import { defineStore } from "pinia";
import { ref, reactive, watch, computed } from "vue";

import { useToast } from "primevue/usetoast";
import { Buffer } from 'buffer';
import { Plugins } from "@capacitor/core";
const { UdpPlugin } = Plugins;
import {UdpPluginUtils} from "capacitor-udp"; // if you are using capacitor-udp

import { useMutation } from "@tanstack/vue-query";

import { Preferences } from "@capacitor/preferences";
import { v4 as uuidv4 } from "uuid";

import { EComm } from "@/utils/externalComm";

import { useRoute, useRouter } from "vue-router";

const useRobotStore = defineStore("robot", () => {
  // Globals
  const route = useRoute();
  const router = useRouter();

  const dataPrefix = {
    'video':Buffer.from('\x00'),
    'detections':Buffer.from('\x01'),
    'json_data':Buffer.from('\x02'),
    'audio':Buffer.from('\x03') };

    const states = {
      'manual': 0,
      'yolo':1,
      'audio':2,
    };
    

    const state = ref(null);

    // Camera COMM Communication
    
    // Define cam_comm states
    const internalTemperature = ref(0);
    const cpuTemperature = ref(0);
    const pitch = ref(0);
    const m1Speed = ref(0);
    const m2Speed = ref(0);
    const robotRoll = ref(0);
    const transcript = ref("");
    const camCommData = (data: Buffer) => {
      const dataPrefix2 = data.slice(0, 1);
      data = data.slice(1);

      if (dataPrefix2.equals(dataPrefix['video'])) {
          // gui.after(0, () => this.cam.displayVideo(data, this.frameSize)); // needs to be run on tkinter thread otherwise flickering will occur
      } else if (dataPrefix2.equals(dataPrefix['json_data'])) {
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
                  if (i !== this.state) {
                      // gui.setState(i);
                      // this.state = i;
                  }
              } else if (k === "transcript") {
                  transcript.value = i;
              }
          }
      }
  }

  const connectionPassword = ref("HARV7")

  // const camComm = new EComm(["16.170.39.119",8043], "v" + connectionPassword.value, false); // for live usage
  const camComm = new EComm(["192.168.1.208",8043], "v" + connectionPassword.value, false); // for testing
  // const audioComm = new EComm(["16.170.39.119",8044], "a" + connectionPassword.value, false);
  camComm.receiveLoop((data) => {
    console.log("Received:", data);
    camCommData(data);
  });
  // const camComm = ref("");
  const audioComm = ref("");
  
  /**
   * ---------------------
   * CONTROLLER
   * ---------------------
   * This section defines the controller for the robot, a virtual joystick in the app
   */
  // Initialize Joystick
  const joystick = ref([0,0]);
  // const useSendJoystick = (data: any) => {
  //   console.log("Joystick updated:", data.value);
  //   camComm.sendS(Buffer.concat([dataPrefix['json_data'], Buffer.from(JSON.stringify(data.value), 'utf-8')]));
  // };
  // When the joystick is updated, send the new joystick data to the robot
  watch(joystick, (newJoystick) => {
    console.log("Joystick updated:", newJoystick);
    const data = JSON.stringify(newJoystick);
    console.log("Sending data AAAAA:", data);
    const bufferData = Buffer.from(data, 'utf-8');
    console.log("Returning the data to string AAAAA:", bufferData.toString());
    const concatData = Buffer.concat([dataPrefix['json_data'], bufferData]);
    console.log("Returning the concatdata to string AAAAA:", concatData.toString());
    camComm.sendS(concatData);
  });

  /**
   * ---------------------
   * MOTORS
   * ---------------------
   * This section defines the motor control for the robot
   */

  const lastMotorSpeedTime = ref(0);
  const motorSpeeds = ref([0,0]);
  const MAX_MOTOR_TIMEOUT = 2;

  /**
   * @computed motorsActive
   * @returns {boolean} - True if the motors are active, false otherwise
   */
  const motorsActive = computed(() => {
    return (Date.now() - lastMotorSpeedTime.value) < MAX_MOTOR_TIMEOUT;
  });
  

  /**
   * @function motorSpeedData
   * @param none
   * @description - This function is called when the motor speeds are updated
   */
  const motorSpeedData = (data: any) => {
    console.log("Motor speeds updated:", data);
    motorSpeeds.value = data;
    lastMotorSpeedTime.value = Date.now();
  }

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
    camComm.sendS(Buffer.concat([dataPrefix['json_data'], Buffer.from(JSON.stringify({"shutdown":true}), 'utf-8')]));
  }

  /**
   * @function reboot
   * @param none
   * @description - Sends a reboot command to the robot
   */
  const reboot = () => {
    camComm.sendS(Buffer.concat([dataPrefix['json_data'], Buffer.from(JSON.stringify({"reboot":true}), 'utf-8')]));
  }

  


  return {
    camComm,
    audioComm,
    connectionPassword,
    joystick,
    // useSendJoystick,
    motorSpeeds,
    motorSpeedData,
    motorsActive,
    shutdown,
    reboot
  };
});

export default useRobotStore;
