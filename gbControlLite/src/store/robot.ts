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
    if(typeof(state.value) === 'number' && state.value > -1){
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
  const videoBuffer = ref<any>("");

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
          transcript.value = i + " ";
        }
      }
    }
  };

  const videoActive = ref(false);
  const videoActiveTimeout = ref<any>(0);
  watch(videoBuffer, (newVideoBuffer) => {
    try{
      clearTimeout(videoActiveTimeout.value);
    }
    catch(e){
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
  const camComm = new EComm(["harv7.harv-guardbot.org",8043], "v" + connectionPassword.value, false); // for live usage
  // const camComm = new EComm(["192.168.0.169", 8043], "v" + connectionPassword.value, false); // for testing
  camComm.initialize();
  // const audioComm = new EComm(["192.168.0.169",8044], "a" + connectionPassword.value, false);
    const audioComm = new EComm(["harv7.harv-guardbot.org",8044], "a" + connectionPassword.value, false);

  audioComm.initialize();
  camComm.receiveLoop((data) => {
    // console.log("Received:", data);
    camCommData(data);
  });


  /**
   * @function audioCommData
   * @param data 
   * @description - This function is called when data is received from the robot's Audio Communication
   */
  const audioCommData = (data: any) => {
    // console.log("Received data:", data.toString());
    const dataPrefix2 = data.slice(0, 1);
    data = data.slice(1);

    if (dataPrefix2.equals(dataPrefix["audio"])) {
      // gui.after(0, () => this.cam.displayVideo(data, this.frameSize)); // needs to be run on tkinter thread otherwise flickering will occur
      // console.log("Received video data");
      console.log("Received audio data");
    } else if (dataPrefix2.equals(dataPrefix["json_data"])) {
      const parsedData = JSON.parse(data.toString());
      for (const [k, i] of Object.entries(parsedData)) {
        if (k === "transcript") {
          transcript.value = i;
        }
      }
    }
  };

  audioComm.receiveLoop((data) => {
    // console.log("Received:", data);
    audioCommData(data);
  });
  // const camComm = ref("");
  // const audioComm = ref("");

  /**
   * ---------------------
   * CONTROLLER
   * ---------------------
   * This section defines the controller for the robot, a virtual joystick in the app
   */
  // Initialize Joystick
  const joystick = ref([0, 0]);
  // const useSendJoystick = (data: any) => {
  //   console.log("Joystick updated:", data.value);
  //   camComm.sendS(Buffer.concat([dataPrefix['json_data'], Buffer.from(JSON.stringify(data.value), 'utf-8')]));
  // };
  // When the joystick is updated, send the new joystick data to the robot
  watch(joystick, (newJoystick) => {
    // console.log("Joystick updated:", newJoystick);
    const data = JSON.stringify({"controls":newJoystick});
    // console.log("Sending data AAAAA:", data);
    const bufferData = Buffer.from(data, "utf-8");
    // console.log("Returning the data to string AAAAA:", bufferData.toString());
    const concatData = Buffer.concat([dataPrefix["json_data"], bufferData]);
    // console.log("Returning the concatdata to string AAAAA:", concatData.toString());
    camComm.sendS(concatData);
  });

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
    camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({"controls":data}), "utf-8")]));
  }

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
    if(payload.payload){
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
        const HARV_7_MAX_RPM = 60; // RPM
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
            useMotorOverride([ direction[0], direction[1] ]);
            currSeconds += 0.5;
          } else {
            clearInterval(motorOverrideInterval);
            toast.add({ severity: "success", summary: "Finished driving", detail: `Finished driving ${distanceNumber} ${unit}`, life: 1500 });
            useMotorOverride([0, 0]);
          }
        }, 500);
      }
      if(payload.payload.passthrough){
        // If passthrough is true, the robot will send the payload to the robot as-is
        // This is used to send custom commands to the robot
        console.log("Sending passthrough:", payload.payload.passthrough);
        camComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify(payload.payload.passthrough), "utf-8")]));
      }
      if(payload.payload.transcribe){
        // If transcribe is true, the robot will start or stop the transcription
        // This is used to start or stop the transcription
      }
      if(payload.payload.speak){
        // If speak is true, the robot will speak the text
        // This is used to make the robot speak
        useAudioCommand(payload.params.echo);
      }
    }
    else{
      return false
    }
  }

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
    audioComm.sendS(Buffer.concat([dataPrefix["json_data"], Buffer.from(JSON.stringify({"command":command}), "utf-8")]));
  }


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
    }
    else if (unit === "yards") {
      return value * 36;
    }
     else if (unit === "cm") {
      return value / 2.54;
    } else if (unit === "meter") {
      return value * 39.3701;
    } else {
      return value;
    }
  }

  const directionToSign = (direction: string) => {
    if (direction === "forward") {
      return [1, 1];
    } else if (direction === "backward") {
      return [-1, -1];
    } else if(direction === "left") {
      return [-1, 0];
    }
    else if(direction === "right") {
      return [1, 0];
    }
    else {
      return [1, 1];
    }
  }


  return {
    camComm,
    audioComm,
    connectionPassword,
    joystick,
    videoActive,
    internalTemperature,
    cpuTemperature,
    m1Speed,
    m2Speed,
    robotRoll,
    transcript,
    videoBuffer,
    // useSendJoystick,
    motorSpeeds,
    motorSpeedData,
    motorsActive,
    shutdown,
    reboot,
    useHandlePayload,
  };
});

export default useRobotStore;
