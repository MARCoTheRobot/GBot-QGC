import { defineStore } from "pinia";
import { ref, watch } from "vue";
// import { conversationHistory } from '@/data/disposable/conversation-data';
import { useSendMessage, useMARCoTalk } from "@/hooks/api/main.api";
import useUserStore from "@/store/user";
import { db, rt } from "@/hooks/firebase";
import { query, get, set, ref as rtRef, onValue, orderByChild, equalTo } from "firebase/database";
import { Preferences } from "@capacitor/preferences";
import { v4 as uuidv4 } from "uuid";
import { all } from "axios";

export const useChatStore = defineStore("chat", () => {

  //------CHAT MESSAGE VARIABLES AND FUNCTIONS------//
  const messages = ref([]);
  const currMessage = ref("");
  const quickReplyArray = ref(["Hi", "Tell me a joke"]);
  const mediaEmbedURL = ref("");
  const { mutate: MARCoTalk } = useMARCoTalk();
  const userStore = useUserStore();
  const dockID = ref("");
  const allowPing = ref(true);
  const allowMARCoTalk = ref(true);
 

  const { 
    isPending: marcoThinking, 
    isError: isChatError, 
    isSuccess: chatIsSuccessful, 
    data: responseBody, 
    error: chatError, 
    mutate: makeTextMessageRequest 
  } = useSendMessage();

  const sendMsg = () => {
    if (currMessage.value !== "") {
      console.log("There is a message to send.");
      messages.value.push({ from: "user", message: currMessage.value, time: new Date().toLocaleTimeString(), media: "" });
      const nextMsg = currMessage.value;
      makeTextMessageRequest({text: nextMsg});
      currMessage.value = "";
    }
  };

  const sendAction = (action: string) => {
    console.log("Sending action: ", action);
    makeTextMessageRequest({action: action});
  }

  // Watch for change in status for the chat messages. If it is successfully modified, run a param handler on the response body from the server
  watch(chatIsSuccessful, (newVal) => {
    if (!newVal) return;

    console.log("responseBody: ", responseBody.value);
    //If there is responseText, loop over the responseText and add each message to the messages array
    if (responseBody.value.responseText) {
      responseBody.value.responseText.forEach((msg: any) => {
        messages.value.push({ from: "MARCo", message: msg, time: new Date().toLocaleTimeString(), media: "" });
      });

      if(allowMARCoTalk.value){
        console.log("Allowing MARCo to talk");
        console.log("The value of allowMARCoTalk is: ", allowMARCoTalk.value);
        MARCoTalk(responseBody.value.responseText);
      }
    }

    // If there are quick replies, add these to the quick reply array for render
    if (responseBody.value.quickReplyArray) {
      quickReplyArray.value = responseBody.value.quickReplyArray;
    } else {
      quickReplyArray.value = [];
    }

    // If there is an embedded media source, add that for renderin to the last message
    if (responseBody.value.embedMedia.isTrue) {
      console.log("There is embedded media, adding to the last message");
      mediaEmbedURL.value = responseBody.value.embedMedia.mediaSource;
      messages.value[messages.value.length - 1].media = responseBody.value.embedMedia.mediaSource;
    }

    // If it tells us to switch the window, switch windows to the appropriate screen
    if (responseBody.value.switchWindow.isTrue) {
      console.log("Switching windows to: ", responseBody.value.switchWindow.switchNum);
      switch (responseBody.value.switchWindow.switchNum) {
        case 0:
          console.log("TODO: figure this out");
          break;
      }
    }

    if (responseBody.value.intentName) {
      userStore.checkDailyActivities(responseBody.value.intentName);
    }
  });

  const appendMARCoMessage = (msgs: string[]) => {
    console.log("Made it to appending MARCo's messages...");
    msgs.forEach((msg: any) => {
      messages.value.push({ from: "MARCo", message: msg, time: new Date().toLocaleTimeString(), media: "" });
    });

    if(allowMARCoTalk.value){
      MARCoTalk(msgs);
    }
  };
  

  //------REALTIME DATABASE VARIABLES AND FUNCTIONS------//
  const listeningStatus = ref(false);
  const isConnected = ref(false);
  const setListeningStatus = async (isListening: boolean) => {
    listeningStatus.value = isListening;
      if(isConnected.value){
        const speechRef = rtRef(rt,
          "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDevice/transcription/isListening"
        );
        set(speechRef, isListening);
      }

      if(listeningStatus.value){
        //Pause MARCo from talking
        try{
          this.audioHandler.pauseMARCoTalk();
        }
        catch(err){
          console.log(err);
        }
      }
      else{
        if(this.tempSpeech.speech.length < 1){
          //Resume MARCo talking if there was no input
          this.audioHandler.resumeMARCoTalk();
        }
      }
  }

  /**async holdUntilWifi() {
    return new Promise((resolve, reject) => {
      let wifiInterval = setInterval(() => {
        if (this.wifiConnected) {
          clearInterval(wifiInterval);
          resolve(true);
        } else {
          console.log("Waiting for wifi to connect");
          require("dns").resolve("www.google.com", function (err) {
            if (err) {
              console.log("No connection");
              this.wifiConnected = false;
            } else {
              console.log("Connected");
              this.wifiConnected = true;
              clearInterval(wifiInterval);
              resolve(true);
            }
          });
        }
      }, 1000);
    });
  }*/

   const initializeCommlink = async () => {

    //eslint-disable-next-line no-async-promise-executor
    const checkForDockID = new Promise(async (resolve, reject) => {
      //Step 1: Check if there is a device ID
      if (dockID.value) {
        //If the dockID already exists, then we can just connect to the realtime database and start getting data
        resolve(true);
      } else {
        //If the dockID does not exist, then we need to get the dockID from preferences
        const dockID2 = await Preferences.get({key: "dockID"});
        //eslint-disable-next-line no-constant-condition
        if(dockID2.value){
          dockID.value = dockID2.value;
          resolve(true);
        }
        else{
          //console.log("Device has not been previously connected or could not be found.")
          //Generate a UUID for the device
          dockID.value = uuidv4();
          //Save the UUID to preferences
          await Preferences.set({key: "dockID", value: dockID.value});

          //Copy the template realtime database to a new realtime database with the new UUID
          const copyTemplate = new Promise((resolve, reject) => {
            const copyTemplateRef = rtRef(rt,
              "MARCo/v2/deviceSyncs/TEMPLATE"
            );
            const newDockRef = rtRef(rt,
              "MARCo/v2/deviceSyncs/" + dockID.value
            );
            get(copyTemplateRef).then(async (snapshot) => {
              console.log("Got the template ref");
              if (snapshot.exists()) {
                console.log("Template exists");
                const template = snapshot.val();
                console.log("The template is", snapshot.val());
                await set(newDockRef, template);
                resolve(true);
              } else {
                console.log("No data available");
              }
            }).catch((error) => {
              console.error(error);
            });
           
          });

          copyTemplate.then(async (result) => {
            console.log("Copied the template to the new dock");
            resolve(result);
          });
        }
      }
    });

    checkForDockID.then(async (result) => {
      console.log("Dock ID is: " + dockID.value);

      //Enable the dock
      const ref3 = rtRef(rt,
        "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/dockEnabled"
      );
      set(ref3, true);
      //Start listening for changes in the dock's state
      const botStateRef = rtRef(rt,
        `MARCo/v2/deviceSyncs/${dockID.value}/handshake/robotEnabled`
      );

      //Continuously listen to the dock state ref for changes in the event it disconnects.
      onValue(botStateRef, (snapshot) => {
        console.log("Received a robot state update from the realtime database");
        const response = snapshot.val();
        updateConnectionStatus(response);
      });

      //Start listening for the realtime database connection for API calls
      const jsonRef = rtRef(rt,
        "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDevice/jsonResponse"
      );
      onValue(jsonRef, (snapshot) => {
        console.log("Received a response from the realtime database");
        const response = snapshot.val();  
        //Only if there actually is an object, send it to the paramHandler
        if(typeof(response) == "object" && response != null){
        if(Object.keys(response).length > 0){
          this.EventBus.$emit("paramHandler", response);
        }
      }
      });

      //Start listening to the realtime database for SFX updates
      const ref2 = rtRef(rt,
        "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDevice/transcription"
      );
      onValue( ref2 , (snapshot) => {
        console.log("Received a transcription update from the realtime database");
        const transcript = snapshot.val();
        // this.EventBus.$emit("transcript",transcript);
      });

      //Listen for pings from the realtime database to ensure live connection
      const pingRef = rtRef(rt,
        "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/pingDock/toDock"
      );
      onValue(pingRef, (snapshot) => {
        console.log("Received a ping from the realtime database");
        const response = snapshot.val();
        if (response) {
          const responseRef = rtRef(rt,
            "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/pingDock/fromDock"
          );
          set(responseRef, response);
        }
      });

      //Listen for updates from the dock for hardware events
      const hardwareRef = rtRef(rt,
        "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDevice/hardwareEvents"
      );
      onValue(hardwareRef, (snapshot) => {
        console.log("Received a hardware event from the realtime database");
        const response = snapshot.val();
        //this.hardwareHandler.mapEvent(response);
      });

      // Update the realtime response with the provided params
      // this.EventBus.$on("updateRealtimeResponseSync", (params) => {
      //   updateRealtimeResponse(params);
      // });

      // Ping the bot
      // this.EventBus.$on("pingBot", () => {
      //   this.pingBot();
      // });

      // Update the ref for the response text with the provided params
      // this.EventBus.$on("onboardTalk", (params) => {
      //   const responseRef = rtRef(rt,
      //     "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDock/jsonResponse/responseText"
      //   );
      //   set(responseRef, []);
      //   set(responseRef, params);
      // });

      // Update the device volume with the provided volume
      // this.EventBus.$on("updateDeviceVolume", (volume) => {
      //   const volumeRef = rtRef(rt,
      //     `MARCo/v2/deviceSyncs/${dockID.value}/fromDock/deviceVolume`
      //   );
      //   set(volumeRef, parseInt(volume));
      // });

      // Update the initialized status with the provided status
      // this.EventBus.$on("initializedStatus", (status) => {
      //   const initializedRef = rtRef(rt,
      //     `MARCo/v2/deviceSyncs/${dockID.value}/handshake/initialized`
      //   );
      //   set(initializedRef, status);
      // });

      // Check the connection status
      // this.EventBus.$on("checkConnectionStatus", () => {
      //   const botEnabledRef = rtRef(rt,
      //     `MARCo/v2/deviceSyncs/${dockID.value}/handshake/robotEnabled`
      //   );
      //   get(botEnabledRef).then((snapshot) => {
      //     if (snapshot.exists()) {
      //       this.isConnected = snapshot.val();
      //       this.updateConnectionStatus(this.isConnected);
      //     }
      //   });
      // });

      // Update the audio response with the provided params
      // this.EventBus.$on("audioHandler", (params) => {
      //   this.updateAudioResponse(params);
      // });

      // Update the user with the provided params
      // this.EventBus.$on("updateUser", (params) => {
      //   const userRef = rtRef(rt,
      //     "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/currUsrID"
      //   );
      //   set(userRef, params);
      // });

      // Scan for the provided userID in the Firebase Realtime Database
      // this.EventBus.$on("scanForUserID", (userID) => {
      //   this.queryFirebaseRealtimeDatabase(userID);
      // });

      // Check for multiple docks
      // this.EventBus.$on("checkMultipleDocks", () => {
      //   this.checkForLiveDock();
      // });

    });

    
  }

  const updateRealtimeResponse = async (params: any) => {
    const jsonRef = rtRef(rt,
      "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDock/jsonResponse"
    );
    set(jsonRef, params);

    const ref2 = rtRef(rt,
      "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/dockEnabled"
    );
    set(ref2, true);

    pingBot();
  }

  const updateAudioResponse = async (params) => {
    console.log("Updating the audio ref with the following params: ", params);
    const audioRef = rtRef(rt,
      "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDock/sfxHandler"
    );
    set(audioRef, params);
  }

  const pingBot = (notifyPings=3,maxPings=8) => {
    //eslint-disable-next-line no-async-promise-executor
    return new Promise(async (resolve, reject) => {
    console.log("Ping?")
    if(allowPing.value){
      console.log("Ping!")
      allowPing.value = false;
   //Create a random integer between 1 and 1000 to check if the dock is alive
    const randomInt = Math.floor(Math.random() * 1000) + 1;
    set(rtRef(rt, `MARCo/v2/deviceSyncs/${dockID.value}/handshake/pingBot/toBot`), randomInt);

    let pingCheck = 0;
    //Set an interval to check if the dock has responded
    const pingInterval = setInterval(async () => {
      pingCheck++;
      const ref2 = ref( rt,
        `MARCo/v2/deviceSyncs/${dockID.value}/handshake/pingBot/fromBot`
      );
      const response = await get(ref2);
      console.log(`Sent ping of ${randomInt} to dock, received: `, response.val());
      this.EventBus.$emit("pingUpdate", `Sent ping: ${randomInt}\nTo dock ${dockID.value}\nReceived: ${response.val()}\nAttempt: ${pingCheck} of ${maxPings}...`)
      if (parseInt(response.val()) == randomInt) {
        this.EventBus.$emit("pendingConnectionStatus", false);
        clearInterval(pingInterval);
        this.isConnected = true;
        setTimeout(() => {
          this.allowPing = true;
        }, 20000);
        resolve(true);
      } else {
        if (pingCheck > maxPings) {
          this.updateConnectionStatus(false);
          clearInterval(pingInterval);
          this.allowPing = true;
          resolve(false);
        }
        else if(pingCheck > notifyPings){
          this.EventBus.$emit("pendingConnectionStatus", true);
        }
      }
    }, 1500);
  }
});
  }
  const updateConnectionStatus = async (isConnected) => {
    this.isConnected = isConnected;
    this.EventBus.$emit("pendingConnectionStatus", false);
    //If it is not connected, then we need to emit an event to the event bus to let the rest of the app know
    this.EventBus.$emit("connectionStatus", isConnected);
    
    const botEnabledRef = rtRef(rt,
      `MARCo/v2/deviceSyncs/${dockID.value}/handshake/robotEnabled`);
    set(botEnabledRef, isConnected);
  }

  const compareDockIDs = async (dockID) => {
    if (dockID == dockID.value) {
      return true;
    } else {
      return false;
    }
  }

const queryFirebaseRealtimeDatabase = async (userID) =>{
  const deviceSyncsRef = rtRef(rt, "/MARCo/v2/deviceSyncs");
  const check = query(deviceSyncsRef, orderByChild("handshake/currUsrID"), equalTo(userID));
  const snapshot = await get(check);
  const results = [];
  if (snapshot.exists()) {
    snapshot.forEach((childSnapshot) => {
      const key = childSnapshot.key;
      results.push(key);
    });

    //Now get the current dockID and remove it from the results
    const currentDockID = await Preferences.get({key: "dockID"});
    if(currentDockID.value){
      const index = results.indexOf(currentDockID.value);
      if(index > -1){
        results.splice(index,1);
      }
    }
 

  //If there is only one result, then we need to set the dockID to that result and update the preferences
  if(results.length == 1){
    dockID.value = results[0];
    await Preferences.set({key: "dockID", value: dockID.value});
    EventBus.$emit("userScanResultSingle", true);
    setTimeout(() => {
      window.location.reload();
    }, 3000);
  }
  else if(results.length == 0){
    EventBus.$emit("userScanResultEmpty", true);
  }
  else{
    EventBus.$emit("userScanResultMultiple", results);
    this.webDockResults = results;
  
}
}
else{
  console.log("No results found");
  EventBus.$emit("userScanResultEmpty", false);
}
}

const checkForLiveDock = async () => {
  let dockFound = false;
  for (let i = 0; i < this.webDockResults.length; i++) {
    dockID.value = this.webDockResults[i];
    EventBus.$emit("checkingForLiveDock",{
      id: dockID.value,
      index: i,
      message: `Moving to live dock ${i+1} of ${this.webDockResults.length}... ID is ${dockID.value}`
    })
    const nextDock = await pingBot(10,4);
    console.log("Next dock is: ", nextDock);
    if (nextDock) {
      
      await this.Preferences.set({key: "dockID", value: dockID.value});
      EventBus.$emit("userScanResultSingle", true);
      dockFound = true;
      setTimeout(() => {
        window.location.reload();
      }, 3000);
      break;
    }
    else{
      console.warn("Dock is not responding, moving on to the next dock");

    }
  }
  if(!dockFound){
  EventBus.$emit("userScanResultEmpty", true);
}
}

  return { messages, currMessage, marcoThinking, quickReplyArray, mediaEmbedURL, allowMARCoTalk, sendMsg, appendMARCoMessage, sendAction };
});
