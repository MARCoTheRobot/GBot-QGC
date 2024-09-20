import { defineStore } from "pinia";
import { ref, reactive, watch, computed } from "vue";

import { useToast } from "primevue/usetoast";
import { Buffer } from "buffer";
import { Plugins } from "@capacitor/core";
const { UdpPlugin } = Plugins;
import { UdpPluginUtils } from "capacitor-udp"; // if you are using capacitor-udp

import { useMutation } from "@tanstack/vue-query";

import { Preferences } from "@capacitor/preferences";
import { v4 as uuidv4 } from "uuid";

import { startingImage } from "@/data/videoLoading";

import { EComm } from "@/utils/externalComm";

import { useRoute, useRouter } from "vue-router";

const useRobotStore = defineStore("robot", () => {
  // Globals
  const route = useRoute();
  const router = useRouter();
  const toast = useToast();

  const dataPrefix = {
    video: Buffer.from("\x00"),
    detections: Buffer.from("\x01"),
    json_data: Buffer.from("\x02"),
    audio: Buffer.from("\x03"),
  };

  const states = {
    manual: 0,
    yolo: 1,
    audio: 2,
  };

  const state = ref(0);
  let stateSendInterval = setInterval(() => {
    if (typeof state.value === "number" && state.value > -1) {
      camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ state: state.value }))]));
    }
  }, 500);

  /**
   * ---------------------
   * STATE MANAGEMENT
   * ---------------------
   */

  /**
   * @function setState
   * @param newState
   * @description - Sets the state of the robot and sends the new state to the robot
   */
  const setState = (newState: any) => {
    state.value = newState;
    if (state.value && state.value > -1) {
      stateSendInterval = setInterval(() => {
        camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ state: state.value }), "utf-8")]));
      }, 500);
    } else {
      try {
        clearInterval(stateSendInterval);
      } catch (e) {
        console.log(e);
      }
    }
  };

  /**
   * ---------------------
   * CAMERA COMMUNICATION MANAGEMENT
   * ---------------------
   */

  // Define cam_comm states
  const internalTemperature = ref<number>(0);
  const cpuTemperature = ref<number>(0);
  const m1Speed = ref<number>(0);
  const m2Speed = ref<number>(0);
  const robotRoll = ref<number>(0);
  const transcript = ref<string>("");
  const lastVideoTime = ref<any>(0);
  const MAX_VIDEO_TIMEOUT = 2;
  const videoBuffer = ref<any>(startingImage);

  /**
   * @function camCommData
   * @param data
   * @description - This function is called when data is received from the robot's Camera Communication
   */
  const camCommData = (data: any) => {
    // console.log("Received data:", data.toString());
    const dataPrefix2 = data.slice(0, 1);
    data = data.slice(1);

    if (dataPrefix2.equals(dataPrefix["video"])) {
      // gui.after(0, () => this.cam.displayVideo(data, this.frameSize)); // needs to be run on tkinter thread otherwise flickering will occur
      // console.log("Received video data");
      videoBuffer.value = data;
      lastVideoTime.value = Date.now();
    } else if (dataPrefix2.equals(dataPrefix["json_data"])) {
      const parsedData = JSON.parse(data.toString());
      for (const [k, i] of Object.entries(parsedData)) {
        if (k === "internal_temperature") {
          internalTemperature.value = i;
        } else if (k === "cpu_temperature") {
          cpuTemperature.value = i;
        } else if (k === "pitch") {
          robotRoll.value = i;
        } else if (k === "motor_speeds") {
          m1Speed.value = i[0];
          m2Speed.value = i[1];
          // this.motors.lastSpeedValueMotors = i;
          // this.motors.motorSpeedData(i);
        } else if (k === "state") {
          if (i !== state.value) {
            // gui.setState(i);
            // this.state = i;
          }
        } else if (k === "transcript") {
          try {
            transcript.value = JSON.stringify(i.text) + " ";
          } catch (err) {
            transcript.value = JSON.stringify(i);
          }
        }
      }
    }
  };

  const videoActive = ref(false);
  const videoActiveTimeout = ref<any>(0);
  watch(videoBuffer, (newVideoBuffer) => {
    try {
      clearTimeout(videoActiveTimeout.value);
    } catch (e) {
      // console.log(e);
    }
    if (newVideoBuffer) {
      videoActive.value = true;
      videoActiveTimeout.value = setTimeout(() => {
        videoActive.value = false;
      }, MAX_VIDEO_TIMEOUT * 1000);
    }
  });

  const connectionPassword = ref("HARV7");

  /**
   * ---------------------
   * EXTERNAL COMMUNICATION
   * ---------------------
   */
  const camComm = new EComm(["harv7.harv-guardbot.org", 8043], "v" + connectionPassword.value, false); // for live usage
  // const camComm = new EComm(["10.204.56.41", 8043], "v" + connectionPassword.value, false); // for testing
  camComm.initialize();
  // const audioComm = new EComm(["10.204.56.41", 8044], "a" + connectionPassword.value, false);
  const audioComm = new EComm(["harv7.harv-guardbot.org", 8044], "a" + connectionPassword.value, false);

  audioComm.initialize();
  camComm.receiveLoop((data) => {
    // console.log("Received:", data);
    camCommData(data);
  });

  const audioActive = ref(false);
  const lastAudioTime = ref(0);
  const SAMPLE_RATE = ref(16000);
  const CHUNK_SIZE = 3200;
  const NUM_CHANNELS = 1;
  const AUDIO_CONTEXT = new AudioContext({ sampleRate: SAMPLE_RATE.value });

  // console.log("MSGAAA: callAudio ", CallAudio);

  // Function to convert Uint8Array to Float32Array
  function convertUint8ToFloat32(uint8Array) {
    const float32Array = new Float32Array(uint8Array.length / 4); // 4 bytes per Float32
    const dataView = new DataView(uint8Array.buffer); // View the Uint8Array as a binary buffer

    // Loop through each 4-byte chunk and interpret it as a Float32
    for (let i = 0; i < float32Array.length; i++) {
      float32Array[i] = dataView.getFloat32(i * 4, true); // true for little-endian byte order
      // Amplify by 3
      float32Array[i] *= 10;
      // Cap it at -1 or 1
      float32Array[i] = Math.max(-1, Math.min(float32Array[i], 1));
    }

    return float32Array;
  }

  let audioConnectedInterval = 0;

  /**
   * @function audioCommData
   * @param data
   * @description - This function is called when data is received from the robot's Audio Communication
   */
  const audioCommData = async (data) => {
    // Convert the data to a base64 string
    const dataPrefix2 = data.slice(0, 1);
    data = data.slice(1);
    // console.log("Received audio data eeffee", dataPrefix2, dataPrefix["audio"]);

    if (dataPrefix2.equals(dataPrefix["audio"])) {
      try {
        clearInterval(audioConnectedInterval);
      } catch (err) {
        // Do nothing
      }
      console.log("MSG 123: Prefix is audio eeffee");
      console.log("MSG 123: Received audio data eeffee", data);

      const uint8Data = new Uint8Array(data);
      console.log("DEBUG: transforming data:", uint8Data);
      const nowBuffering = convertUint8ToFloat32(uint8Data);
      console.log("DEBUG: Playing nowBuffering eeffee", nowBuffering);
      const audioBuffer = AUDIO_CONTEXT.createBuffer(1, nowBuffering.length, AUDIO_CONTEXT.sampleRate); // Mono, sample rate 16000 Hz
      // const nowBuffering = new Float32Array(data.length);
      // for (let i = 0; i < data.length; i++) {
      //     nowBuffering[i] = (data[i] / 128.0 - 1) * 0.4; // Convert from 8-bit PCM to float
      // }
      console.log("DEBUG: Playing nowBuffering eeffee", nowBuffering);
      audioBuffer.copyToChannel(nowBuffering, 0); // Copy to the audio buffer

      const bufferSource = AUDIO_CONTEXT.createBufferSource();
      bufferSource.buffer = audioBuffer;
      bufferSource.connect(AUDIO_CONTEXT.destination); // Connect to speakers

      bufferSource.start();

      audioActive.value = true;
      audioConnectedInterval = setInterval(() => {
        audioActive.value = false;
      }, 2000);

    } else if (dataPrefix2.equals(dataPrefix["json_data"])) {
      const parsedData = JSON.parse(data.toString());
      for (const [k, i] of Object.entries(parsedData)) {
        if (k === "transcript") {
          try {
            transcript.value = JSON.stringify(i.text);
          } catch (err) {
            transcript.value = JSON.stringify(i);
          }
        }
      }
    }
  };

  function buildWaveHeader(opts) {
    const numFrames = opts.numFrames;
    const numChannels = opts.numChannels || 2;
    const sampleRate = opts.sampleRate || 44100;
    const bytesPerSample = opts.bytesPerSample || 2;
    const format = opts.format;

    const blockAlign = numChannels * bytesPerSample;
    const byteRate = sampleRate * blockAlign;
    const dataSize = numFrames * blockAlign;

    const buffer = new ArrayBuffer(44);
    const dv = new DataView(buffer);

    let p = 0;

    function writeString(s) {
      for (let i = 0; i < s.length; i++) {
        dv.setUint8(p + i, s.charCodeAt(i));
      }
      p += s.length;
    }

    function writeUint32(d) {
      dv.setUint32(p, d, true);
      p += 4;
    }

    function writeUint16(d) {
      dv.setUint16(p, d, true);
      p += 2;
    }

    writeString("RIFF"); // ChunkID
    writeUint32(dataSize + 36); // ChunkSize
    writeString("WAVE"); // Format
    writeString("fmt "); // Subchunk1ID
    writeUint32(16); // Subchunk1Size
    writeUint16(format); // AudioFormat
    writeUint16(numChannels); // NumChannels
    writeUint32(sampleRate); // SampleRate
    writeUint32(byteRate); // ByteRate
    writeUint16(blockAlign); // BlockAlign
    writeUint16(bytesPerSample * 8); // BitsPerSample
    writeString("data"); // Subchunk2ID
    writeUint32(dataSize); // Subchunk2Size

    return buffer;
  }

  const myAudio = new Audio();

  const audioCommDataNEW = (data: any) => {
    // console.log("Received data eeffee:", data.toString());
    const dataPrefix2 = data.slice(0, 1);
    data = data.slice(1);
    // console.log("Received audio data eeffee", dataPrefix2, dataPrefix["audio"]);

    if (dataPrefix2.equals(dataPrefix["audio"])) {
      console.log("MSG 123: Prefix is audio eeffee");
      console.log("MSG 123: Received audio data eeffee", data);

      const sampleRate = 16000; // samples per second
      const numChannels = 1; // mono or stereo
      const isFloat = false; // integer or floating point
      const [type, format] = isFloat ? [Float32Array, 3] : [Uint8Array, 1];

      const wavHeader = new Uint8Array(
        buildWaveHeader({
          numFrames: data.byteLength / type.BYTES_PER_ELEMENT,
          bytesPerSample: type.BYTES_PER_ELEMENT,
          sampleRate,
          numChannels,
          format,
        })
      );

      console.log("The wavHeader is:", wavHeader);
      // create WAV file with header and downloaded PCM audio
      const wavBytes = new Uint8Array(wavHeader.length + data.byteLength);
      wavBytes.set(wavHeader, 0);
      wavBytes.set(data, wavHeader.length);
      const base64String = btoa(String.fromCharCode(...wavBytes));
      const dataURI = `data:audio/wav;base64,${base64String}`;
      myAudio.src = dataURI;
      myAudio.play();
    } else if (dataPrefix2.equals(dataPrefix["json_data"])) {
      const parsedData = JSON.parse(data.toString());
      for (const [k, i] of Object.entries(parsedData)) {
        if (k === "transcript") {
          try {
            transcript.value = JSON.stringify(i.text);
          } catch (err) {
            transcript.value = JSON.stringify(i);
          }
        }
      }
    }
  };

  audioComm.receiveLoop((data) => {
    // console.log("Received:", data);
    audioCommData(data);
  });

  /**
   * @function streamAudioBuffer
   * @description - this loops through the audio buffers and plays them in order
   */
  // const streamAudioBuffer = setInterval(() => {
  //   if (nextAudioBuffer) {
  //     console.log("#NEXT BUFFER#", nextAudioBuffer)
  //     const source = audioContext.createBufferSource();
  //     source.buffer = nextAudioBuffer;
  //     source.connect(audioContext.destination);
  //     source.start();
  //     // nextAudioBuffer = null;
  //   }
  // }, Math.floor(1000 / 16));

  /**
   * ---------------------
   * CONTROLLER
   * ---------------------
   * This section defines the controller for the robot, a virtual joystick in the app
   */
  // Initialize Joystick
  const joystick = ref([0, 0]);

  // When the joystick is updated, send the new joystick data to the robot
  // watch(joystick, (newJoystick) => {
  //   // console.log("Joystick updated:", newJoystick);
  //   // The joystick x and y inputs are reversed for the virtual joystick versus the physical joystick, so we will need to flip the values
  //   const sendJoystick = [newJoystick[1], -1 * newJoystick[0]];
  //   const data = JSON.stringify({ controls: sendJoystick });
  //   // console.log("Sending data AAAAA:", data);
  //   const bufferData = Buffer.from(data, "utf-8");
  //   // console.log("Returning the data to string AAAAA:", bufferData.toString());
  //   const concatData = Buffer.concat([dataPrefix["json_data"], bufferData]);
  //   // console.log("Returning the concatdata to string AAAAA:", concatData.toString());
  //   camComm.sendS(concatData);
  // });

  const motorInterval = setInterval(() => {
    const sendJoystick = [joystick.value[1], -1 * joystick.value[0]];
    const data = JSON.stringify({ controls: sendJoystick });
    // console.log("Sending data AAAAA:", data);
    const bufferData = Buffer.from(data, "utf-8");
    // console.log("Returning the data to string AAAAA:", bufferData.toString());
    const concatData = Buffer.concat([dataPrefix["json_data"], bufferData]);
    // console.log("Returning the concatdata to string AAAAA:", concatData.toString());
    camComm.sendS(concatData);
  }, 50);

  /**
   * ---------------------
   * MOTORS
   * ---------------------
   * This section defines the motor control for the robot
   */

  const lastMotorSpeedTime = ref(0);
  const motorSpeeds = ref([0, 0]);
  const MAX_MOTOR_TIMEOUT = 2;

  /**
   * @computed motorsActive
   * @returns {boolean} - True if the motors are active, false otherwise
   */
  const motorsActive = computed(() => {
    return Date.now() - lastMotorSpeedTime.value < MAX_MOTOR_TIMEOUT;
  });

  /**
   * @function motorSpeedData
   * @param none
   * @description - This function is called when the motor speeds are updated
   */
  const motorSpeedData = (data: any) => {
    // console.log("Motor speeds updated:", data);
    motorSpeeds.value = data;
    lastMotorSpeedTime.value = Date.now();
  };

  /**
   * @function useMotorOverride
   * @param data - The data to send to the robot
   * @description - This function is used to override the motor speeds of the robot
   */
  const useMotorOverride = (data: any) => {
    console.log("Motor override:", data);
    camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ controls: data }), "utf-8")]));
  };

  let motorOverrideInterval = 0;

  /**
   * ---------------------
   * POWER MANAGEMENT
   * ---------------------
   */

  /**
   * @function shutdown
   * @param none
   * @description - Sends a shutdown command to the robot
   */
  const shutdown = () => {
    camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ shutdown: true }), "utf-8")]));
  };

  /**
   * @function reboot
   * @param none
   * @description - Sends a reboot command to the robot
   */
  const reboot = () => {
    camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ reboot: true }), "utf-8")]));
  };

  /**
   * ---------------------
   * CHAT MANAGEMENT
   * ---------------------
   * @description - This section defines the chat management for the robot
   * @description - The chat management is used to send and receive messages from the robot
   * @description - That includes payloads from the chatbot that correspond to actions on the robot
   */

  /**
   * @function useHandlePayload
   * @param payload - The payload from the chatbot
   * @description - This function is used to handle payloads from the chatbot
   */
  const useHandlePayload = (payload: any) => {
    /**
     * There are three parts to the payload:
     * 1 - statusResponse: string - The response from the robot that is to be displayed in the chat
     * 2 - payload - The payload from the chatbot, which has the following structure:
     *   - forceDrive: boolean - If true, the robot will drive regardless of the current state
     *   - passthrough: Object - A json_data object to be sent to the robot as-is
     *    - transcribe: boolean - A boolean to start or stop the transcription
     * 3 - params - The parameters from the chatbot, if any
     */
    if (payload.payload) {
      if (payload.payload.forceDrive) {
        // If forceDrive is true, the robot will drive regardless of the current state
        // This is used to override the current state of the robot
        // The robot will drive with the joystick
        setState(states.manual);

        /**
         * Now, we need to calculate the drive values for the robot,
         * and how long it needs to drive
         */

        const HARV7_WHEEL_DIAMETER = 7; // inches
        const HARV_7_MAX_RPM = 40; // RPM
        const distanceNumber = payload.params && payload.params.distance ? parseFloat(payload.params.distance) : 10; // Unitless
        const unit = payload.params && payload.params.distanceUnit ? payload.params.distanceUnit : "feet"; // inches
        const direction = payload.params && payload.params.direction ? directionToSign(payload.params.direction) : directionToSign("forward"); // forward or backward
        toast.add({ severity: "info", summary: "Starting to drive", detail: `Driving ${distanceNumber} ${unit}`, life: 1500 });
        // Calculate the distance in inches
        const distance = unitToInches(unit, distanceNumber);

        // Calculate how long the robot needs to drive based on the distance, diameter, and RPM
        const distancePerRevolution = Math.PI * HARV7_WHEEL_DIAMETER; // inches
        const rotationsRequired = distance / distancePerRevolution; // How many rotations the robot needs to make to go the distance
        const timeRequired = rotationsRequired / HARV_7_MAX_RPM; // How long the robot needs to drive to go the distance - minutes
        const secondsRequired = timeRequired * 60; // How long the robot needs to drive to go the distance - seconds
        let currSeconds = 0;

        motorOverrideInterval = setInterval(() => {
          if (currSeconds < secondsRequired) {
            useMotorOverride([direction[0], direction[1]]);
            currSeconds += 0.5;
          } else {
            clearInterval(motorOverrideInterval);
            toast.add({ severity: "success", summary: "Finished driving", detail: `Finished driving ${distanceNumber} ${unit}`, life: 1500 });
            useMotorOverride([0, 0]);
          }
        }, 50);
      }
      if (payload.payload.passthrough) {
        // If passthrough is true, the robot will send the payload to the robot as-is
        // This is used to send custom commands to the robot
        console.log("Sending passthrough:", payload.payload.passthrough);
        camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify(payload.payload.passthrough), "utf-8")]));
      }
      if (payload.payload.transcribe) {
        // If transcribe is true, the robot will start or stop the transcription
        // This is used to start or stop the transcription
      }
      if (payload.payload.speak) {
        // If speak is true, the robot will speak the text
        // This is used to make the robot speak
        useAudioCommand(payload.params.echo);
      }
    } else {
      return false;
    }
  };

  /**
   * ---------------------
   * AUDIO MANAGEMENT
   * ---------------------
   */

  /**
   * @function useAudioCommand
   * @param command - The command to send to the robot
   * @description - This function is used to send audio commands to the robot to speak
   */
  const useAudioCommand = (command: string) => {
    console.log("Sending audio command:", command);
    audioComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ command: command }), "utf-8")]));
  };

  /**
   * ---------------------
   * UTILITY FUNCTIONS
   * ---------------------
   */

  const unitToInches = (unit: string, value: number) => {
    if (unit === "in") {
      return value;
    } else if (unit === "feet") {
      return value * 12;
    } else if (unit === "yards") {
      return value * 36;
    } else if (unit === "cm") {
      return value / 2.54;
    } else if (unit === "meter") {
      return value * 39.3701;
    } else {
      return value;
    }
  };

  const directionToSign = (direction: string) => {
    if (direction === "forward") {
      return [1, 0];
    } else if (direction === "backward") {
      return [-1, 0];
    } else if (direction === "left") {
      return [0, 1];
    } else if (direction === "right") {
      return [0, -1];
    } else {
      return [1, 0];
    }
  };

  // Return all public variables and functions
  return {
    camComm,
    audioComm,
    connectionPassword,
    joystick,
    videoActive,
    audioActive,
    internalTemperature,
    cpuTemperature,
    m1Speed,
    m2Speed,
    robotRoll,
    transcript,
    videoBuffer,
    motorSpeeds,
    motorSpeedData,
    motorsActive,
    shutdown,
    reboot,
    useHandlePayload,
    SAMPLE_RATE,
  };
});

export default useRobotStore;
