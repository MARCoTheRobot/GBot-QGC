import { defineStore } from "pinia";
import { ref, reactive, watch, computed } from "vue";

import { useToast } from "primevue/usetoast";
import { Buffer } from "buffer";
import { Plugins } from "@capacitor/core";
const { UdpPlugin } = Plugins;
import { UdpPluginUtils } from "capacitor-udp"; // if you are using capacitor-udp

import {AssemblyAI, RealtimeTranscript, RealtimeTranscriber} from "assemblyai"

import { useMutation } from "@tanstack/vue-query";

import { Preferences } from "@capacitor/preferences";
import { v4 as uuidv4 } from "uuid";

import { startingImage } from "@/data/videoLoading";

import { EComm } from "@/utils/externalComm";
import { VideoRecorder } from "@/utils/videoRecord";

import { useRoute, useRouter } from "vue-router";

import { genSpeech } from "@/hooks/api/audio.api";

import silenceAudio from "@/assets/audio/silence.mp3";
import http from "@/lib/http";

import useSettingsStore from "./settings";



const useRobotStore = defineStore("robot", () => {
  // Globals
  const route = useRoute();
  const router = useRouter();
  const toast = useToast();
  const settings = useSettingsStore();

  const dataPrefix = {
    video: Buffer.from("\x00"),
    detections: Buffer.from("\x01"),
    json_data: Buffer.from("\x02"),
    audio: Buffer.from("\x03"),
  };

  const states = ref({
    manual: 0,
    yolo: 1,
    audio: 2,
  });

  const state = ref(0);
  let stateSendInterval = setInterval(() => {
    if (typeof state.value === "number" && state.value > -1) {
      camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ state: state.value }))]));
    }
  }, 250);

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
      try {
        clearInterval(stateSendInterval);
      } catch (e) {
        console.warn(e);
      }

      stateSendInterval = setInterval(() => {
        camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ state: state.value }), "utf-8")]));
      }, 250);
    } else {
      try {
        clearInterval(stateSendInterval);
      } catch (e) {
        console.warn(e);
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
  const transientTranscript = ref<string>("");
  const lastVideoTime = ref<any>(0);
  const MAX_VIDEO_TIMEOUT = 2;
  const videoBuffer = ref<any>(startingImage);
  const isRecordingVideo = ref<boolean>(false);
  const vidRecorder = new VideoRecorder();
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
      // if(isRecordingVideo.value) {
      //   vidRecorder.addFrame(videoBuffer.value);
      //   console.log("VIDCHANGE 2 - ADDED FRAME");
      // }
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
          const parsedTranscript = i;
          if (parsedTranscript["message_type"] === "FinalTranscript") {
            try {
              transcript.value = i.text + " ";
              transientTranscript.value = "";
            } catch (err) {
              transcript.value = JSON.stringify(i);
              transientTranscript.value = "";
            }
          } else {
            try {
              transientTranscript.value = i.text + " ";
            } catch (err) {
              transientTranscript.value = JSON.stringify(i);
            }
          }
        }
      }
    }
  };

  watch(isRecordingVideo, (newIsRecordingVideo, oldIsRecordingVideo) => {
    // console.log("VIDCHANGE 1:", newIsRecordingVideo, oldIsRecordingVideo);
    // If the video recording has stopped, save the video
    if (!newIsRecordingVideo && oldIsRecordingVideo) {
      // console.log("VIDCHANGE 3 - SAVING VIDEO CALL");
      // vidRecorder.saveVideo();
    }
  });

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
  // const camComm = new EComm(["192.168.1.208", 8043], "v" + connectionPassword.value, false); // for testing
  camComm.initialize();
  const audioComm = new EComm(["192.168.1.208", 8044], "a" + connectionPassword.value, true);
  // const audioComm = new EComm(["harv7.harv-guardbot.org", 8044], "a" + connectionPassword.value, false);

  audioComm.initialize();
  camComm.receiveLoop((data) => {
    // console.log("Received:", data);
    camCommData(data);
  });

  /**
   * ---------------------
   * AUDIO COMMUNICATION
   * ---------------------
   */
  const audioActive = ref(false);
  const lastAudioTime = ref(0);
  const SAMPLE_RATE = ref(16000);
  const CHUNK_SIZE = 3200;
  const NUM_CHANNELS = 1;
  const voiceProfile = ref("en-US-Standard-H");

  // Load voiceProfile from localstorage
  const voiceProfileLS = localStorage.getItem("voiceProfile");

  if (voiceProfileLS) {
    voiceProfile.value = voiceProfileLS;
  }


  const voiceGain = ref(1.5);
  
  // Load voiceGain from localstorage
  const voiceGainLS = localStorage.getItem("voiceGain");
  if (voiceGainLS) {
    voiceGain.value = parseFloat(voiceGainLS);
  }

  const AUDIO_CONTEXT = new AudioContext({ sampleRate: SAMPLE_RATE.value });
  const audioStream = AUDIO_CONTEXT.createMediaStreamDestination();
  let bufferSource = null;

  

  /**
   * ---------------------
   * REALTIME TRANSRIPTION
   * ---------------------
   */

  const commandsFrom = ref<'app' | 'robot'>("app");

  // Load commandsFrom from localstorage
  const commandsFromLS = localStorage.getItem("commandsFrom");
  if (commandsFromLS) {
    commandsFrom.value = commandsFromLS as 'app' | 'robot';
  }

  const { mutate: sendCommand } = useMutation({
    mutationFn: async (text: string) => {
        return  http({url:"https://commandconversation-kl3exemiua-uc.a.run.app", method: "POST", data:{ text:text, sessionID: "1234" }});
    },

    onMutate: (text: string) => {
        // settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "user", text: nextMessage.value });
        // nextMessage.value = "";
    },
    onSuccess: (data) => {
        console.log("data a a a", data);
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "status", text: data.statusResponse });
        useAudioCommand(data.statusResponse);
        useHandlePayload(data);
    },
    onError: (error) => {
        console.error("error", error);
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "status", text: error.message });
        useAudioCommand(`Sorry, I had an issue with that. Here's why: ${error.message}`);
    }

}
);

  
  let transcriber;
  const initializeTranscriber = async () => {
  // transcriber = aaClient.realtime.transcriber({
  //   sampleRate: SAMPLE_RATE.value,
  //   // languageModel: "assemblyai_default",
  // });

  transcriber.on("open", () => {
    console.log("Transcriber opened");
  });

  transcriber.on("close", () => {
    console.log("Transcriber closed");
  });

  transcriber.on("error", (err) => {
    console.error("Transcriber error:", err);
  });

  transcriber.on("transcript", (data: RealtimeTranscript) => {
    console.log("Transcript:", data);
    if (!data.text) {
      return
    }
    if (data.message_type === 'PartialTranscript') {
      console.log('Partial:', data.text);
      transientTranscript.value = data.text + " ";
    } else {
      console.log('Final:', data.text);
      transcript.value = data.text + " ";
      transientTranscript.value = "";
      if(commandsFrom.value === "robot") {
        sendCommand(data.text);
      }
    }
  });


    // Create a MediaStreamAudioSourceNode from the audioStream
    await transcriber.connect();
const mediaStreamSource = AUDIO_CONTEXT.createMediaStreamSource(audioStream.stream);

// Create a ScriptProcessorNode to process the audio data
const scriptProcessor = AUDIO_CONTEXT.createScriptProcessor(4096, 1, 1);

// Connect the MediaStreamAudioSourceNode to the ScriptProcessorNode
mediaStreamSource.connect(scriptProcessor);

// Process the audio data and send it to the transcriber
scriptProcessor.onaudioprocess = (audioEvent) => {
  const inputBuffer = audioEvent.inputBuffer;
  const channelData = inputBuffer.getChannelData(0); // Get mono channel data

  // Convert the Float32Array to Int16Array for the transcriber
  const int16Data = new Int16Array(channelData.length);
  for (let i = 0; i < channelData.length; i++) {
    int16Data[i] = channelData[i] * 32767; // Convert to 16-bit PCM
  }

  // Send the audio data to the transcriber
  transcriber.sendAudio(int16Data.buffer);
};

// Connect the ScriptProcessorNode to the destination (optional, for monitoring)
scriptProcessor.connect(AUDIO_CONTEXT.destination);


  }

  
  http.get("https://app.marcohealthtech.com/speech/v2/assemblytoken").then((res) => {
    console.log("MSGAAA: res ", res);
    const token = res.token;
    
    transcriber = new RealtimeTranscriber({
      token: token,
      sampleRate: SAMPLE_RATE.value,
      // languageModel: "assemblyai_default
    });
  initializeTranscriber();
  });


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
  const silentAudio = new Audio();
  silentAudio.src = silenceAudio;
  silentAudio.play();
  silentAudio.loop = true;
  silentAudio.addEventListener("ended", () => {
    console.log("Silent audio ended");
    silentAudio.play();
  });

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
      const currTime = Date.now();
      lastAudioTime.value = currTime;

      try {
        clearInterval(audioConnectedInterval);
      } catch (err) {
        // Do nothing
      }
      // console.log("DEBUG 123: Prefix is audio eeffee");
      // console.log("DEBUG 123: Received audio data eeffee", data);

      const uint8Data = new Uint8Array(data);
      console.log("DEBUG: transforming data:", uint8Data);
      const nowBuffering = convertUint8ToFloat32(uint8Data);
      const originalBuffer = nowBuffering;
      console.log("DEBUG: transformed data:", nowBuffering);

      // Calculate the average value of the float32 array
      let sum = 0;
      for (let i = 0; i < nowBuffering.length; i++) {
        sum += nowBuffering[i];
      }
      const avg = sum / nowBuffering.length;
      // console.log("DEBUG: Average value of nowBuffering:", avg);
      // Shift the values so that the average is 0
      for (let i = 0; i < nowBuffering.length; i++) {
        nowBuffering[i] -= avg;
      }

      // Iterate over the float32 array. Sometimes the values clip at 1 or -1, so we need to cap them to their nearest neighbor
      for (let i = 0; i < nowBuffering.length; i++) {
        if (Math.abs(nowBuffering[i]) >= 1) {
          nowBuffering[i] = 1 * 0.5 * Math.sign(nowBuffering[i]);
        }
      }

      // console.log("DEBUG 123: Playing nowBuffering eeffee", nowBuffering);
      const audioBuffer = AUDIO_CONTEXT.createBuffer(1, nowBuffering.length, AUDIO_CONTEXT.sampleRate); // Mono, sample rate 16000 Hz
      // const nowBuffering = new Float32Array(data.length);
      // for (let i = 0; i < data.length; i++) {
      //     nowBuffering[i] = (data[i] / 128.0 - 1) * 0.4; // Convert from 8-bit PCM to float
      // }
      // console.log("DEBUG: Playing nowBuffering eeffee2", nowBuffering);
      audioBuffer.copyToChannel(nowBuffering, 0); // Copy to the audio buffer

      bufferSource = AUDIO_CONTEXT.createBufferSource();
      bufferSource.buffer = audioBuffer;
      bufferSource.connect(AUDIO_CONTEXT.destination); // Connect to speakers
      // Also connect to the audio stream
      bufferSource.connect(audioStream);



      // bufferSource.loop = true;
      bufferSource.start();

      // Try to draw the audio to the canvas
      const leBeouf = originalBuffer;
    const canvas = document.getElementById('audio-canvas');
    const ctx = canvas.getContext('2d');
    ctx.clearRect(0, 0, canvas.width, canvas.height);
    console.log("The data length is:", leBeouf.length);
    ctx.beginPath();
    ctx.moveTo(0, canvas.height / 2);

    for (let i = 0; i < leBeouf.length; i++) {
      const x = i;
      const y = canvas.height / 2 - (leBeouf[i] * 100) ^ 5;
      ctx.lineTo(x, y);
    }

    ctx.strokeStyle = '#00FFFF'; // Neon blue color
    ctx.stroke();
      // bufferSource.onended = () => {

      //   setTimeout(() => {
      //   console.log("ABAB: Audio ended");
      //   if(lastAudioTime.value === currTime) {
      //     console.log("ABAB: Audio ended and no new audio received");
      //     // Replay the audio from the beginning
      //     bufferSource = AUDIO_CONTEXT.createBufferSource();
      //     bufferSource.buffer = audioBuffer;
      //     bufferSource.connect(AUDIO_CONTEXT.destination); // Connect to speakers
      //     bufferSource.start();

      //   }
      // }, 250);

      // }
      // bufferSource.addEventListener("ended", () => {
      //   bufferSource.start();
      // });

      // Send the audio back to the robot
      // console.warn("MICDATA:", data);
      // console.warn("MICDATA Buffer:", Buffer.from(data));
      // audioComm.sendS(Buffer.concat([dataPrefix["audio"], Buffer.from(data)]));

      audioActive.value = true;
      audioConnectedInterval = setInterval(() => {
        audioActive.value = false;
      }, 2000);
    } else if (dataPrefix2.equals(dataPrefix["json_data"])) {
      const parsedData = JSON.parse(data.toString());
      for (const [k, i] of Object.entries(parsedData)) {
        if (k === "transcript") {
          const parsedTranscript = i;
          if (parsedTranscript["message_type"] === "FinalTranscript") {
            try {
              transcript.value = i.text + " ";
            } catch (err) {
              transcript.value = JSON.stringify(i);
            }
          } else {
            try {
              transientTranscript.value = i.text + " ";
            } catch (err) {
              transientTranscript.value = JSON.stringify(i);
            }
          }
        }
      }
    }
  };

  /**
   * @function sendMicData
   * @param data
   * @returns
   */
  const sendMicData = async (data) => {
    // const nowBuffering = convertUint8ToFloat32(uint8Data);
    console.warn("MICDATA Buffer:", Buffer.from(data));
    const buffer = Buffer.concat([dataPrefix["audio"], Buffer.from(data)]);
    audioComm.sendS(buffer);
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
  const micFormatSelector = ref(0);
  const micFormatOptions = [
    { label: "Array Buffer", value: 0 },
    { label: "Uint8Array", value: 1 },
    { label: "Float32 Array", value: 2 },
    { label: "Converted Float 32", value: 3 },
    { label: "Converted Float 32 2", value: 4 },
  ];
  const micBufferSelection = ref(4096);
  const micBufferOptions = [
    { label: "256", value: 256 },
    { label: "512", value: 512 },
    { label: "1024", value: 1024 },
    { label: "2048", value: 2048 },
    { label: "4096", value: 4096 },
    { label: "8192", value: 8192 },
    { label: "16384", value: 16384 },
  ];
  // const audioCommDataNEW = (data: any) => {
  //   // console.log("Received data eeffee:", data.toString());
  //   const dataPrefix2 = data.slice(0, 1);
  //   data = data.slice(1);
  //   // console.log("Received audio data eeffee", dataPrefix2, dataPrefix["audio"]);

  //   if (dataPrefix2.equals(dataPrefix["audio"])) {
  //     console.log("MSG 123: Prefix is audio eeffee");
  //     console.log("MSG 123: Received audio data eeffee", data);

  //     const sampleRate = 16000; // samples per second
  //     const numChannels = 1; // mono or stereo
  //     const isFloat = false; // integer or floating point
  //     const [type, format] = isFloat ? [Float32Array, 3] : [Uint8Array, 1];

  //     const wavHeader = new Uint8Array(
  //       buildWaveHeader({
  //         numFrames: data.byteLength / type.BYTES_PER_ELEMENT,
  //         bytesPerSample: type.BYTES_PER_ELEMENT,
  //         sampleRate,
  //         numChannels,
  //         format,
  //       })
  //     );

  //     console.log("The wavHeader is:", wavHeader);
  //     // create WAV file with header and downloaded PCM audio
  //     const wavBytes = new Uint8Array(wavHeader.length + data.byteLength);
  //     wavBytes.set(wavHeader, 0);
  //     wavBytes.set(data, wavHeader.length);
  //     const base64String = btoa(String.fromCharCode(...wavBytes));
  //     const dataURI = `data:audio/wav;base64,${base64String}`;
  //     myAudio.src = dataURI;
  //     myAudio.play();
  //   } else if (dataPrefix2.equals(dataPrefix["json_data"])) {
  //     const parsedData = JSON.parse(data.toString());
  //     for (const [k, i] of Object.entries(parsedData)) {
  //       if (k === "transcript") {
  //         const parsedTranscript = i;
  //         if (parsedTranscript["message_type"] === "FinalTranscript") {
  //           try {
  //             transcript.value = i.text + " ";
  //           } catch (err) {
  //             transcript.value = JSON.stringify(i);
  //           }
  //         } else {
  //           try {
  //             transientTranscript.value = i.text + " ";
  //           } catch (err) {
  //             transientTranscript.value = JSON.stringify(i);
  //           }
  //         }
  //       }
  //     }
  //   }
  // };

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
    const sendJoystick = [joystick.value[1] * motorDriveSensitivity.value, -1 * joystick.value[0] * motorTurnSensitivity.value];
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
  const motorDriveSensitivity = ref(0.5);
  const motorTurnSensitivity = ref(0.3);

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
    // console.log("Motor override:", data);
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
        setState(states.value.manual);

        /**
         * Now, we need to calculate the drive values for the robot,
         * and how long it needs to drive
         */

        const HARV7_WHEEL_DIAMETER = 7; // inches
        const HARV_7_MAX_RPM = 10; // RPM
        const distanceNumber = payload.params && payload.params.distance ? parseFloat(payload.params.distance) : 100; // Unitless
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
        const motorOverridePing = 50; // ms

        motorOverrideInterval = setInterval(() => {
          if (currSeconds < secondsRequired) {
            useMotorOverride([direction[0], direction[1]]);
            currSeconds += motorOverridePing / 1000;
          } else {
            clearInterval(motorOverrideInterval);
            toast.add({ severity: "success", summary: "Finished driving", detail: `Finished driving ${distanceNumber} ${unit}`, life: 1500 });
            useMotorOverride([0, 0]);
          }
        }, motorOverridePing);
      }
      if (payload.payload.passthrough) {
        // If passthrough is true, the robot will send the payload to the robot as-is
        // This is used to send custom commands to the robot
        // console.log("Sending passthrough:", payload.payload.passthrough);
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
      if(payload.payload.driveMode){
        if(payload.payload.driveMode === "manual"){
          setState(states.value.manual);
        } else if(payload.payload.driveMode === "follow"){
          setState(states.value.yolo);
        }
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
    // console.log("Sending audio command:", command);
    // audioComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({ command: command }), "utf-8")])); NOTE - MOVING TO APP GENERATED SPEECH

    // First, generate the speech
    genSpeech(command, voiceProfile.value).then((res) => {
      // Step 1. Convert to an audio buffer
      console.log("DEBUG: Playing audio buffer:", res);

      toAudioBuff(res.data.data, (buffer) => {
        console.log("The audio buffer is:", buffer);

        // Add one second of silence to the start and end of the buffer
        const silenceDuration = AUDIO_CONTEXT.sampleRate; // 1 second of silence
        const newLength = buffer.length + silenceDuration * 2; // Original length + 1 second silence at start and end
        const extendedBuffer = AUDIO_CONTEXT.createBuffer(
          buffer.numberOfChannels,
          newLength,
          AUDIO_CONTEXT.sampleRate
        );

        for (let channel = 0; channel < buffer.numberOfChannels; channel++) {
          const originalData = buffer.getChannelData(channel);
          const extendedData = extendedBuffer.getChannelData(channel);

          // Fill the start with silence
          extendedData.set(new Float32Array(silenceDuration), 0);

          // Copy the original data
          extendedData.set(originalData, silenceDuration);

          // Fill the end with silence
          extendedData.set(new Float32Array(silenceDuration), silenceDuration + originalData.length);
        }

        const source = AUDIO_CONTEXT.createBufferSource();
        source.buffer = extendedBuffer;

        // Step 2. Create a media stream destination
        const destination = AUDIO_CONTEXT.createMediaStreamDestination();

        // Step 3: Create a ScriptProcessorNode
        const scriptProcessor = AUDIO_CONTEXT.createScriptProcessor(4096, 1, 1); // Buffer size: 4096 samples

        // Step 4: Process the audio data
        scriptProcessor.onaudioprocess = (audioEvent) => {
          const inputBuffer = audioEvent.inputBuffer;
          const channelData = inputBuffer.getChannelData(0); // Get mono channel data

          // Downsample to 16kHz if needed
          // const downsampledData = downsampleBuffer(channelData, 44100, 16000);
          const downsampledData = channelData; // No downsampling needed?

          // Reduce the gain by 10 dB
          for (let i = 0; i < downsampledData.length; i++) {
            downsampledData[i] *= voiceGain.value;
          }

          // Convert to Float32Array for compatibility
          const audioData = new Float32Array(downsampledData);

          // Send the audio data to the UDP server
          sendMicData(audioData.buffer);
        };

        // Step 5: Connect nodes
        source.connect(destination); // Route audio to MediaStreamDestination
        destination.stream.getAudioTracks().forEach((track) => {
          const mediaStreamSource = AUDIO_CONTEXT.createMediaStreamSource(new MediaStream([track]));
          mediaStreamSource.connect(scriptProcessor);
        });

        scriptProcessor.connect(AUDIO_CONTEXT.destination); // Optional: Play through speakers
        // source.connect(AUDIO_CONTEXT.destination); // Play the audio locally

        // Step 6: Start the audio playback
        source.start();

        source.onended = () => {
          console.log("Audio ended");
          // Stop the script processor
          scriptProcessor.disconnect();
        };
      });
    });
  };

  const toAudioBuff = (buf, callback) => {
    const ab = new ArrayBuffer(buf.length);
    const view = new Uint8Array(ab);
    for (let i = 0; i < buf.length; ++i) {
      view[i] = buf[i];
    }
    AUDIO_CONTEXT.decodeAudioData(ab, (buffer) => {
      return callback(buffer);
    });
  };

  const arrayBufferToBase64 = (buffer, callback) => {
    let binary = "";
    const bytes = new Uint8Array(buffer);
    const len = bytes.byteLength;
    for (let i = 0; i < len; i++) {
      binary += String.fromCharCode(bytes[i]);
    }
    callback(window.btoa(binary));
  };

  // Function to downsample buffer
  // Function to downsample buffer
  const downsampleBuffer = (buffer: Float32Array, inSampleRate: number, outSampleRate: number): Float32Array => {
    if (outSampleRate === inSampleRate) {
      return buffer; // No resampling needed if rates match
    }

    const sampleRatio = inSampleRate / outSampleRate;
    const newLength = Math.round(buffer.length / sampleRatio);
    const result = new Float32Array(newLength);

    let offsetResult = 0;
    let offsetBuffer = 0;

    while (offsetResult < result.length) {
      const nextOffsetBuffer = Math.round((offsetResult + 1) * sampleRatio);
      let accum = 0,
        count = 0;

      for (let i = offsetBuffer; i < nextOffsetBuffer && i < buffer.length; i++) {
        accum += buffer[i];
        count++;
      }

      result[offsetResult] = accum / count; // Average the samples for simple downsampling
      offsetResult++;
      offsetBuffer = nextOffsetBuffer;
    }

    return result;
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
    commandsFrom,
    states,
    state,
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
    transientTranscript,
    videoBuffer,
    isRecordingVideo,
    motorSpeeds,
    motorDriveSensitivity,
    motorTurnSensitivity,
    motorSpeedData,
    motorsActive,
    shutdown,
    reboot,
    useHandlePayload,
    SAMPLE_RATE,
    AUDIO_CONTEXT,
    audioStream,
    voiceProfile,
    voiceGain,
    sendMicData,
    micFormatOptions,
    micFormatSelector,
    micBufferOptions,
    micBufferSelection,
    useAudioCommand,
  };
});

export default useRobotStore;
