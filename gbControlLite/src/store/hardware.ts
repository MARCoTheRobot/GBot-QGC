import { defineStore } from "pinia";
import { computed, ref, watch } from "vue";
// import { conversationHistory } from '@/data/disposable/conversation-data';
// import { useSendMessage, useMARCoTalk } from "@/hooks/api/main.api";
import useUserStore from "@/store/user";
import { db, rt } from "@/hooks/firebase";
import { Device } from "@capacitor/device";
import { BleClient, numbersToDataView, ScanMode } from "@capacitor-community/bluetooth-le";
import { Preferences } from "@capacitor/preferences";
import { playBLEReceiveSFX, playBLESendSFX } from "@/lib/audio";
import { useMutation } from "@tanstack/vue-query";
import { v4 as uuidv4 } from "uuid";

export const useHardwareStore = defineStore("hardware", () => {
  const bleEncoder = new TextEncoder();
  const device: any = ref(null);
  const readWrite: any = ref(null);
  const attempts = ref(0);
  const scanAttempts = ref(0);
  const scanMessage = ref("Starting to scan for MARCo...");
  const hardwareStep: any = ref(0);
  const readStream: any = ref(null);
  const writeStream: any = ref(null);
  const MARCO_ERROR_CODE = numbersToDataView(bleEncoder.encode('E'));
  const networkStream: any = ref(null);
  const deviceIDStream: any = ref(null);
  const objectStream: any = ref(null);
  const commandStream: any = ref(null);
  const deviceWifiStatus: any = ref(false);
  const deviceConnected: any = ref(false);
  const wifiNetworks: any = ref([]);
  const selectedSSID: any = ref('');
  const selectedSSIDPassword: any = ref('');
  const dockIDCache: any = ref('');

  const dockID = ref("");
  
  const initializeDockID = async () => {
    if (dockIDCache.value === '') {
      const dockID2 = await Preferences.get({key: "dockID"});
      //eslint-disable-next-line no-constant-condition
      if(dockID2.value){
        console.log("dockID2 is: ", dockID2.value);
        dockID.value = dockID2.value;
        console.log("Got dockID from preferences", dockIDCache.value);
      }
      else{
        //Generate a UUID for the device
        dockID.value = uuidv4();
        //Save the UUID to preferences
        await Preferences.set({key: "dockID", value: dockID.value});
        console.log("Set dockID to", dockIDCache.value);
        
      }
    }
  }

  initializeDockID();


  const MARCO_RECEIVED_EVENTS = {
    B: {
      name: 'MARCO_BUTTON_PRESSED',
      action: async function () {
        console.log('Button pressed');
        // this.EventBus.$emit('button-pressed');
      },
    },
    b: {
      name: 'MARCO_BUTTON_RELEASED',
      action: async function () {
        console.log('Button released');
        // this.EventBus.$emit('button-released');
      },
    },
  };

  const saveDevice = async () => {
    await Preferences.set({
      key: 'device',
      value: JSON.stringify(device),
    });
  }

  const loadDevice = async () => {
    const deviceString = await Preferences.get({ key: 'device' });
    if (deviceString.value) {
      device.value = JSON.parse(deviceString.value);
    } else {
      console.log('Device has not been previously connected or could not be found.');
    }
  }

  const launchScan = async (maxScanAttempts: number, callback: any = false) => {
    // eslint-disable-next-line
    
      const info = await Device.getInfo();

      /*if (info.platform === "ios") {
          EventBus.$emit('open-ios-ble-modal');
          return
      }*/
      scanMessage.value = `Starting to scan for MARCo... Attempt ${scanAttempts.value} of ${maxScanAttempts}`;
      // EventBus.$emit('ble-scan-running', scanAttempts);
      const endScanTimeout = setTimeout(async () => {
        await BleClient.stopLEScan();
        console.log('stopped scanning');
        if (!device.value) {
          //A device was not yet found. If it is less than the maximum scans, try again.
          if (scanAttempts.value < maxScanAttempts) {
            scanAttempts.value++;
            console.log('Scan attempt ' + scanAttempts.value);
            launchScan(maxScanAttempts, callback);
            scanMessage.value = `Starting to scan for MARCo... Attempt ${scanAttempts.value} of ${maxScanAttempts}`;

          } else {
            console.log('Scan failed to find a device. Try again.');
            scanMessage.value = `Scan failed to find a device, try again.`;
            scanAttempts.value = 0;
            return callback(false);
          }
        }
      }, 20000);

      setTimeout(async () => {
        await BleClient.requestLEScan(
          {
            //services: [HEART_RATE_SERVICE],
            scanMode: ScanMode.SCAN_MODE_LOW_LATENCY,
            ConnectionPriority: ScanMode.CONNECTION_PRIORITY_HIGH
          },
          async (result) => {
            console.log('received new scan result', JSON.stringify(result));
            if (result.device.name) {
              if (
                result.device.name.toLowerCase().includes('adafruit bluefruit le') ||
                result.device.name.toLowerCase().includes('marco') ||
                result.device.name.toLowerCase().includes('raspberrypi')
              ) {
                scanMessage.value = `Found a MARCo! Trying to connect`;
                // EventBus.$emit('ble-marco-found');
                console.log('Found the device');
                device.value = result.device;
                console.log("The device is:", device);

                saveDevice();

                BleClient.stopLEScan();
                try {
                  await BleClient.disconnect(device.value.deviceId);
                } catch (err) {
                  console.log('Error disconnecting');
                  console.log(err);
                }

                console.log("Going to resolve");

                clearTimeout(endScanTimeout);
                console.log("Cleared scan timeout");
                scanAttempts.value = 0;

                console.log("Going to resolve next step");
                return callback(true);
              }
            }
          }
        );
      }, 300);

  }

  const launchBLE = async (maxScanAttempts = 5) => {
    return new Promise(async (resolve, reject) => {
      console.log('Initializing BLE');
      console.log("This is the device", device.value);
      console.log("This is the MARCO_ERROR_CODE", MARCO_ERROR_CODE);
      await BleClient.initialize();
      console.log('BLE initialized');
      // EventBus.$emit('ble-initialized');
      scanMessage.value = 'Bluetooth initialized...';
      if (!device.value) {
        try {
          await BleClient.stopLEScan();
        } catch (err) {
          console.log('Error stopping scan');
          console.log(err);
          // reject(err);
        }

        launchScan(maxScanAttempts, async (scanFound: boolean) => {
          
          if(scanFound){
            console.log('Scan successfully found a device');
            //Now, connect to the device
            // eslint-disable-next-line
            attempts.value = 0;
            
  
            resolve(true);
          }
          else{
            console.log('Error scanning for devices');
            // console.log(err);
            reject(false);
          }
          
      });

      } else {
        try {
          await BleClient.disconnect(device.value.deviceId);
        } catch (err) {
          console.log('Error disconnecting');
          console.log(err);
        }

        //Now, connect to the device
        attempts.value = 0;
        resolve(true);
      }
    })
  }

  const connectToDevice = async () => {
    console.log("Connecting to the device...");
    // EventBus.$emit('ble-connect-attempt', attempts);
    try {
      await BleClient.disconnect(device.value.deviceId);
    } catch (err) {
      console.log('Error disconnecting');
      console.log(err);
      // return err;
    }

    try {
      await BleClient.connect(device.value.deviceId);
      //EventBus.$emit('ble-connected');
      console.log('Connected to device');
      console.log(device.value);
      const discovery = await BleClient.discoverServices(device.value.deviceId);
      console.log(discovery);

      // return device;
      const services = await BleClient.getServices(device.value.deviceId);
      console.log('Got services', services);
      console.log(services);

      if (device.value.name.toLowerCase().includes('adafruit bluefruit le')) {
        readWrite.value = services[4];
        readStream.value = readWrite.value.characteristics[0];
        writeStream.value = readWrite.value.characteristics[1];

        //await BleClient.write(device.value.deviceId, readWrite.value.uuid, writeStream.uuid, $MARCO_ERROR_CODE);
        // await BleClient.write(device.value.deviceId, readWrite.value.uuid, writeStream.uuid, $MARCO_LISTEN_CODE);
        //Now, read the characteristics
        /*BleClient.read(device.value.deviceId, "6e400001-b5a3-f393-e0a9-e50e24dcca9e", "6e400003-b5a3-f393-e0a9-e50e24dcca9e").then((data) => {
                console.log("Read data");
                console.log(data);
            }).catch((err) => {
                console.log("Error reading data");
                console.log(err);
            });*/
        console.log('Connected to the device and got the services and characteristics');
        // EventBus.$emit('ble-connected');
        // EventBus.$emit('ble-services-received');
        //Start listening for incoming messages
        await BleClient.startNotifications(device.value.deviceId, readWrite.value.uuid, readStream.value.uuid, async (value) => {
          // console.log('current button');
          const nextCommand = await parseSerialString(value);
          console.log('Next command', nextCommand);

          try {
            MARCO_RECEIVED_EVENTS[nextCommand.trim()].action();
          } catch (err) {
            console.log('Error parsing command');
            console.log(err);
          }
        });
      }
      else {
        //Now, get the read and write service and characteristics if it is a MARCo-III running on a raspberry pi
        if (services.length > 1) {
          readWrite.value = services[2];
          networkStream.value = readWrite.value.characteristics[2];
          deviceIDStream.value = readWrite.value.characteristics[3];
          objectStream.value = readWrite.value.characteristics[4];
          commandStream.value = readWrite.value.characteristics[5];
          // EventBus.$emit('ble-connected');
          // resolve('ble-connected');
          hardwareStep.value = 1;
        }
        else {
          readWrite.value = services[0];
          networkStream.value = readWrite.value.characteristics[2];
          deviceIDStream.value = readWrite.value.characteristics[3];
          objectStream.value = readWrite.value.characteristics[4];
          commandStream.value = readWrite.value.characteristics[5];
          // EventBus.$emit('ble-connected');
          // resolve('ble-connected');
          hardwareStep.value = 1;
        }
      }
    } catch (error) {
      console.log('Error connecting to device');
      console.log(error);
      if (attempts.value < 50) {
        attempts.value++;
        scanMessage.value = `Error connecting to MARCo. Attempt ${attempts.value} of 50`;
        connectToDevice();
      } else {
        return error;
      }
    }

  }

  const parseSerialString = (value: any) => {
    const decoder = new TextDecoder();
    const decoded = decoder.decode(value);
    return decoded;
  }

  const sendDockID = async () => {
    playBLESendSFX();
    console.log("The dockID value is", dockID.value);
        console.log("The dock ID is", dockID);
        
    if (device.value !== null) {
      try {
        
        await BleClient.write(
          device.value.deviceId,
          readWrite.value.uuid,
          deviceIDStream.value.uuid,
          numbersToDataView(bleEncoder.encode(dockID.value)),
        );
        //   EventBus.$emit('dock-id-sent', dockID);
      } catch (e) {
        console.log('There was an error writing to the device:', e);
        //   EventBus.$emit('dock-id-send-failed', dockID);
      }
    }
  }

  const getDefaultDockID = async function () {
    //eslint-disable-next-line
    return new Promise(async (resolve, reject) => {
      if (device.value !== null) {
        try {
          const defaultDockBuffer = await BleClient.read(
            device.value.deviceId,
            readWrite.value.uuid,
            deviceIDStream.value.uuid,
          );
          let defaultDock = '';
          for (let i = 0; i < defaultDockBuffer.buffer.byteLength; i++) {
            defaultDock += String.fromCharCode(defaultDockBuffer.getUint8(i));
          }
          //   globalAudio.src = '/assets/audio/sfx/marco-receiver.mp3';
          //   globalAudio.play();
          playBLEReceiveSFX();
          resolve(defaultDock);
        } catch (e) {
          console.log('There was an error writing to the device:', e);
          reject(e);
        }
      }
    });
  };

  const getDeviceNetworkStatus = async function () {
    //eslint-disable-next-line
    return new Promise(async (resolve, reject) => {
      if (device.value !== null) {
        try {
          const networkStatusBuffer = await BleClient.read(
            device.value.deviceId,
            readWrite.value.uuid,
            networkStream.value.uuid,
          );
          let networkStatusObjString = '';
          for (let i = 0; i < networkStatusBuffer.buffer.byteLength; i++) {
            networkStatusObjString += String.fromCharCode(networkStatusBuffer.getUint8(i));
          }
          const networkStatusObj = JSON.parse(networkStatusObjString);
          console.log('networkStatusObj', networkStatusObj);
          let networkStatus = typeof networkStatusObj === 'object' ? networkStatusObj.status : networkStatusObj;
          console.log('networkStatus12', networkStatus);
          networkStatus = networkStatus.toLowerCase() === 'true';
          deviceWifiStatus.value = networkStatus;
          console.log('networkStatus34', networkStatus);
          //   globalAudio.src = '/assets/audio/sfx/marco-receiver.mp3';
          //   globalAudio.play();
          // playBLEReceiveSFX();
          resolve({
            status: networkStatus,
            attempting: networkStatus.connectionAttempts,
          });
        } catch (e) {
          console.log('There was an error reading the network status from the device:', e);
          reject(e);
        }
      }
    });
  };

  const useSendDeviceNetwork =  () => {
    return useMutation({
      mutationFn: (data: any) => {
        console.log('Data to send', data);
        return new Promise(async (resolve, reject) => {
          // globalAudio.src = '/assets/audio/sfx/marco-sender.mp3';
          // globalAudio.play();
          // playBLESendSFX();
          try{
            console.log('Sending network data with dockID', dockID.value);
          const msg = `WIFI:WPA;${selectedSSIDPassword.value.length > 0 ? 'P:' + selectedSSIDPassword.value + ';' : ''}S:${selectedSSID.value};U:${dockID.value}`;
          const encodedUnicodeString = numbersToDataView(bleEncoder.encode(msg));
          console.log(encodedUnicodeString);
          if (device.value !== null) {
            try {
              await BleClient.write(device.value.deviceId, readWrite.value.uuid, networkStream.value.uuid, encodedUnicodeString, {
                timeout: 10000,
              });
              // EventBus.$emit('network-sent');
              resolve(true);
            } catch (e) {
              console.log('There was an error writing to the device:', e);
              reject(e);
            }
          }
        }
        catch(e){
          console.log('Error sending network data', e);
          reject(e);
        }
        });
      },
    });
  };

  /**
   * @function sendObject
   * @description Sends an object/file to the MARCo device
   * @param {String} object - the stringified version of the data to send
   * @param {String} path - the end file path of data being sent
   */

  const sendObject = async function (object, path) {
    // globalAudio.src = '/assets/audio/sfx/marco-sender.mp3';
    // globalAudio.play();

    const val = { object: object, path: path };
    if (device.value !== null) {
      try {
        await BleClient.write(
          device.value.deviceId,
          readWrite.value.uuid,
          objectStream.value.uuid,
          numbersToDataView(bleEncoder.encode(val)),
          { timeout: 10000 },
        );
        // EventBus.$emit('object-sent', path);
      } catch (e) {
        console.log('There was an error writing to the device:', e);
      }
    }
  };

  /**
   * @function readObject
   * @description Reads an object/file from the MARCo device
   * @param {String} path - the end file path of data to be recovered
   * @returns {String} - the stringified version of the data recovered
   */

  const readObject = (path) => {
    //eslint-disable-next-line
    return new Promise(async (resolve, reject) => {
      if (device.value !== null) {
        console.log('Yes, we are reading it!');
        try {
          //First, write to the device the path of the file to be read
          const val = { read: path };
          console.log('Just about to write to device', val, 'with path', path);
          const encodedUnicodeString = numbersToDataView(bleEncoder.encode(JSON.stringify(val)));
          await BleClient.write(device.value.deviceId, readWrite.value.uuid, objectStream.value.uuid, encodedUnicodeString, {
            timeout: 10000,
          });
          console.log('Wrote to device');

          //Then, read the file from the device
          const objectBuffer = await BleClient.read(device.value.deviceId, readWrite.value.uuid, objectStream.value.uuid);
          let objectString = '';
          for (let i = 0; i < objectBuffer.buffer.byteLength; i++) {
            objectString += String.fromCharCode(objectBuffer.getUint8(i));
          }

          //The objectString is a stringified version of the object, so parse to JSON
          objectString = JSON.parse(objectString);

          let result = objectString.contents;

          console.log('objectString', objectString);

          //The objectString contains four parameters, one is the currentChunk and the other is the maxChunk. If the currentChunk is less than the maxChunk, then we need to continue reading and appending to the contents
          while (parseInt(objectString.chunksLeft) > 0) {
            const objectBuffer = await BleClient.read(device.value.deviceId, readWrite.value.uuid, objectStream.value.uuid);
            objectString = '';
            for (let i = 0; i < objectBuffer.buffer.byteLength; i++) {
              objectString += String.fromCharCode(objectBuffer.getUint8(i));
            }
            objectString = JSON.parse(objectString);
            result += objectString.contents;

            console.log('There are ' + objectString.chunksLeft + ' chunks left');
          }

          //   globalAudio.src = '/assets/audio/sfx/marco-receiver.mp3';
          //   globalAudio.play();

          resolve(result);
        } catch (e) {
          console.log('There was an error writing to the device:', e);
          reject(e);
        }
      }
    });
  };

  //   EventBus.$on('checkDockID', async (param) => {
  //     let isEqual = commlink.compareDockIDs(param);

  //     console.log('Dock ID is equal? ' + isEqual);
  //     if (!isEqual) {
  //       sendDockID(commlink.dockID);
  //     } else {
  //       EventBus.$emit('dock-id-valid');
  //       EventBus.$emit('connectionStatus', true);
  //     }
  //   });

  const getWifiNetworks = async () => {
    // WifiWizard2 is a cordova plugin, so it will show up in the browser level as an object
    if (typeof WifiWizard2 == 'object') {
      try {
        wifiNetworks.value = await WifiWizard2.scan();
      } catch (err) {
        console.log(err);
      }
    }
  }




  return {
    device,
    readWrite,
    attempts,
    scanAttempts,
    scanMessage,
    hardwareStep,
    deviceWifiStatus,
    deviceConnected,
    wifiNetworks,
    selectedSSID,
    selectedSSIDPassword,
    dockID,
    saveDevice,
    loadDevice,
    launchScan,
    launchBLE,
    connectToDevice,
    parseSerialString,
    getDeviceNetworkStatus,
    sendDockID,
    getDefaultDockID,
    useSendDeviceNetwork,
    sendObject,
    readObject,
    getWifiNetworks,
  }

});