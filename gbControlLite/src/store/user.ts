import { defineStore } from "pinia";
import { ref, reactive, watch } from "vue";
import { useGetUserActivities } from "@/hooks/api/activities.api";
import { doc, getDoc, setDoc } from "firebase/firestore";
import { db, useAuthenticateUser, auth, rt } from "@/hooks/firebase";
import { useToast } from "primevue/usetoast";
import { playCoinSFX } from "@/lib/audio";
import { rawUserData } from "@/data/disposable/raw-usr-data";
// import { get } from "http";
import { useMutation } from "@tanstack/vue-query";
import { query, get, set, ref as rtRef, onValue, orderByChild, equalTo } from "firebase/database";
import { Preferences } from "@capacitor/preferences";
import { v4 as uuidv4 } from "uuid";
import { useSendMessage, useMARCoTalk } from "@/hooks/api/main.api";
import { useRoute, useRouter } from "vue-router";
import { responseTemplate } from "@/data/responsebody";
import { useHardwareStore } from "./hardware";
const useUserStore = defineStore("user", () => {
  // Globals
  const route = useRoute();
  const router = useRouter();
  const hardwareHandler = useHardwareStore();
  // Activities & Goals
  const activitiesList: any = ref(null);
  const dailyActivities: any = ref(null);
  const activityMode: any = ref(0);
  const selectedActivites: any = ref([]);
  const getActivities = () => {
    return new Promise((resolve, reject) => {
      if (activitiesList.value === null) {
        console.log("Getting daily activities...");
        useGetUserActivities()
          .then((data) => {
            console.log("The data is: ", data);
            activitiesList.value = data;
            console.log("The state.activitiesList is: ", activitiesList.value);
            resolve(activitiesList.value);
          })
          .catch((error) => {
            console.warn("Error getting daily activities: ", error);
            resolve({});
          });
      } else {
        resolve(activitiesList.value);
      }
    });
  };
  const getDailyActivities = () => {
    if (dailyActivities.value !== null) {
      console.log("Cri");
      return dailyActivities;
    } else if (activitiesList.value !== null) {
      const present = new Date();
      const entryTitle = `d${present.getDate()}m${present.getMonth() + 1}y${present.getFullYear()}`;
      // const entryTitle = `d19m12y2023`; // TODO: comment this out and get actual data
      const dailyActivitiesPrep = activitiesList.value[entryTitle];
      dailyActivities.value = dailyActivitiesPrep;
      console.log("The daily activities are: ", dailyActivities.value);
      if (dailyActivities.value !== undefined) {
        return dailyActivities.value;
      } else {
        return [];
      }
    } else {
      return [];
    }
  };
  const setActivities = (acts: any) => {
    activitiesList.value = acts;
  };
  const updateDailyActivities = (acts: any) => {
    dailyActivities.value = acts;
  };
  const checkDailyActivities = async (intentArray: string[]) => {
    //Check if the intent matches an activity on today's goals and if so, mark it as complete
    let wasCompleted = false;
    console.log("The daily activities are: ", dailyActivities);
    //Iterate over the chosen activities and see if any of them fuzzy match the intent
    for (let a = 0; a < dailyActivities.value.length; a++) {
      if (intentArray.includes(dailyActivities.value[a].intent) && !dailyActivities.value[a].complete && !wasCompleted) {
        wasCompleted = true;

        //If the activity was completed, mark it as complete and update the progress bar
        dailyActivities.value[a].complete = true;

        console.log("Setting the activity as complete: ", dailyActivities.value[a]);

        //TODO: If all the activities are complete, then remove the local notifications for the day

        //TODO: Award MARCoins to the user for compleing the activity
        manageMARCoins("add", dailyActivities.value[a].marcoins);

        //Update their firestore data for daily activities with their present completion
        const activityDaily = doc(db, `/users/${rawUsrData.value.basicInformation.userID}/activities/daily`);
        // const activityMaster = doc(this.$db, `/users/${rawUsrData.value.basicInformation.userID}/activities/master`);
        const present = new Date();
        const entryTitle = `d${present.getDate()}m${present.getMonth() + 1}y${present.getFullYear()}`;
        const activityDailyDoc = await getDoc(activityDaily);
        if (activityDailyDoc.exists()) {
          const actDoc = activityDailyDoc.data();
          actDoc[entryTitle] = dailyActivities.value;

          setDoc(activityDaily, actDoc);
        } else {
          const actDoc = {};
          actDoc[entryTitle] = dailyActivities.value;
          setDoc(activityDaily, actDoc);
        }
      }
    }
  };
  // -----Store and MARCoins--------------//
  const manageMARCoins = (action: string, amount: number = 40) => {
    if (!rawUsrData.value.userPersonality.userGeneral.MARCoins) {
      rawUsrData.value.userPersonality.userGeneral.MARCoins = 0;
      const updateUser = useUpdateUser();
      updateUser.mutate();
    }

    // const toast = useToast();
    if (action === "add") {
      // toast.add({ severity: "success", summary: "MARCoins Added", detail: `You have been awarded ${amount} MARCoins!` });
      rawUsrData.value.userPersonality.userGeneral.MARCoins += amount;
      const updateUser = useUpdateUser();
      updateUser.mutate();
      playCoinSFX();
    } else if (action === "subtract") {
      // toast.add({ severity: "error", summary: "MARCoins Removed", detail: `You have lost ${amount} MARCoins!` });
      rawUsrData.value.userPersonality.userGeneral.MARCoins -= amount;
      const updateUser = useUpdateUser();
      updateUser.mutate();
    }
  };

  //---------Authentication and User Data----------------//
  const { isError: isAuthError, isPending: isAuthPending, isSuccess: isAuthSuccess, data: newAuthedUser, error: authError, mutate: signInOrUp } = useAuthenticateUser();

  const rawUsrData: any = ref(rawUserData);
  const user = ref(auth.currentUser);

  const getUserData = async () => {
    // console.log("User changed: ", val);
    if (auth.currentUser !== null) {
      const userRef = doc(db, "users", auth.currentUser.uid);
      getDoc(userRef)
        .then((docSnap) => {
          if (docSnap.exists()) {
            rawUsrData.value = docSnap.data();
          } else {
            rawUsrData.value = rawUserData;
          }
        })
        .catch((error) => {
          console.error("Error getting user data: ", error);
          rawUsrData.value = rawUserData;
        });
    }
  };

  /**
   * useUpdateUser is a custom hook that returns a mutation function for updating user data.
   * It uses the `useMutation` hook to handle the mutation logic.
   * 
   * @returns {Mutation} - A mutation object that can be used to trigger the update user data mutation.
   */
  const useUpdateUser = () => {
      return useMutation({
        /**
         * mutationFn is an asynchronous function that performs the user data update.
         * It returns a Promise that resolves when the user data is successfully updated,
         * or rejects if there is an error during the update process.
         */
        mutationFn: async () => {
          return new Promise(async (resolve, reject) => {
            console.log("Made it to the update user data mutation function");
            try {
              // Attempt to update the user document in the Firestore database
              await setDoc(doc(db, `/users/${rawUsrData.value.basicInformation.userID}`), rawUsrData.value);
              resolve("User data updated successfully");
            } catch (error) {
              // Log the error and reject the promise if the update fails
              console.error("Error updating user data: ", error);
              reject("Error updating user data");
            }
  
            /*IFTRUE_isApp*/
            // Uncomment the following block if the application is syncing
            // This block emits an event to notify that the user data has been updated
            // if (isSyncingApp) {
            //   // Quickly toggle the realtime database to tell MARCo there is an update to the raw user data
            //   EventBus.$emit('updateUser', '');
            //   setTimeout(() => {
            //     EventBus.$emit('updateUser', rawUsrData.value.basicInformation.userID);
            //   }, 300);
            // }
            /*FITRUE_isApp*/
          });
        },
      });
    };

  // Screenings
  const activeScreenings: any = ref([]);
  //--------Chat and Realtime Connection----------------//
  //------CHAT MESSAGE VARIABLES AND FUNCTIONS------//
  const messages = ref([]);
  const currMessage = ref("");
  const quickReplyArray = ref(["Hi", "Tell me a joke"]);
  const mediaEmbedURL = ref<string>("");
  const { mutate: MARCoTalk } = useMARCoTalk();
  const dockID = ref(hardwareHandler.dockID);
  console.log("The dockID is: ", dockID.value);
  const allowPing = ref<boolean>(true);
  const allowMARCoTalk = ref<boolean>(true);
  const userScanResultEmpty = ref<boolean>(false);
  const commlinkInitialized = ref<boolean>(false);
  const initialized = ref<boolean>(false);
  const reconnectDialog = ref<boolean>(false);
  const currResponse = ref<string>("");

  const { isPending: marcoThinking, isError: isChatError, isSuccess: chatIsSuccessful, data: responseBody, error: chatError, mutate: makeTextMessageRequest } = useSendMessage();

  const sendMsg = () => {
    if (currMessage.value !== "") {
      console.log("There is a message to send.");
      messages.value.push({ from: "user", message: currMessage.value, time: new Date().toLocaleTimeString(), media: "" });
      const nextMsg = currMessage.value;
      makeTextMessageRequest({ text: nextMsg });
      currMessage.value = "";
    }
  };

  const sendAction = (action: string) => {
    console.log("Sending action: ", action);
    makeTextMessageRequest({ action: action });
  };

  // Watch for change in status for the chat messages. If it is successfully modified, run a param handler on the response body from the server
  watch(chatIsSuccessful, (newVal) => {
    if (!newVal) return;

    console.log("responseBody: ", responseBody.value);

    paramHandler();
  });

  const paramHandler = (response: any = false) => {
    const result = response ? response : responseBody.value;

    if (isConnected.value) {
      updateRealtimeResponse(result);
    }
    //If there is responseText, loop over the responseText and add each message to the messages array
    if (result.responseText) {
      currResponse.value = "";
      result.responseText.forEach((msg: any) => {
        messages.value.push({ from: "MARCo", message: msg, time: new Date().toLocaleTimeString(), media: "" });
        currResponse.value += msg;
      });

      if (allowMARCoTalk.value && !isConnected.value) {
        console.log("Allowing MARCo to talk");
        console.log("The value of allowMARCoTalk is: ", allowMARCoTalk.value);
        MARCoTalk(result.responseText);
      }
    }

    // If there are quick replies, add these to the quick reply array for render
    if (result.quickReplyArray) {
      quickReplyArray.value = result.quickReplyArray;
    } else {
      quickReplyArray.value = [];
    }

    if (result.marcosEmotion) {
      marcoEmotion.value = response.marcosEmotion;
    }
    else {
      marcoEmotion.value = 'happy';
    }

    // If there is an embedded media source, add that for renderin to the last message
    if (result.embedMedia.isTrue) {
      console.log("There is embedded media, adding to the last message");
      mediaEmbedURL.value = result.embedMedia.mediaSource;
      messages.value[messages.value.length - 1].media = result.embedMedia.mediaSource;
    }

    // If it tells us to switch the window, switch windows to the appropriate screen
    if (result.switchWindow.isTrue) {
      console.log("Switching windows to: ", result.switchWindow.switchNum);
      /**
       * 0: DEPRECATED - Friend Journal
       * 1: DEPRECATED - Open Talks Journal
       * 2: Activity Page
       * 3: Journal Page
       * 4: Reboot app
       * 5: OPEN
       * 6: OPEN
       * 7: Pomodoro timer - 25 minutes
       * 8: Pomodoro timer - 2 hours
       * 9: CSSRS Screening form
       * 10: OPEN
       * 11: Goodbye form
       * 12: RESERVED - Sleep Page
       */
      switch (result.switchWindow.switchNum) {
        case 0:
          console.log("TODO: figure this out");
          break;
        case 2:
          console.log("Switching the window to the activity page");
          router.push("/activity/1");
          break;
        case 3:
          console.log("Switching the window to the journal page");
          router.push("/journal");
          break;
        case 4:
          initialized.value = false;
          router.push("/");
          window.location.reload();
          break;
      }
    }

    if (result.intentName) {
      checkDailyActivities(result.intentName);
    }
  };

  const appendMARCoMessage = (msgs: string[]) => {
    console.log("Made it to appending MARCo's messages...");
    currResponse.value = "";
    msgs.forEach((msg: any) => {
      messages.value.push({ from: "MARCo", message: msg, time: new Date().toLocaleTimeString(), media: "" });
      currResponse.value += msg;
    });

    if (allowMARCoTalk.value) {
      MARCoTalk(msgs);
    }

    // If MARCo is syncing, update the realtime response
    if(isConnected.value) {
      const response = JSON.parse(JSON.stringify(responseTemplate));
      response.responseText = msgs;
      console.log("Updating the realtime response with the following params: ", response);
      updateRealtimeResponse(response);
    }
  };

  //------REALTIME DATABASE VARIABLES AND FUNCTIONS------//
  const listeningStatus = ref(false);
  const isConnected = ref(false);
  const pendingConnectionStatus = ref(false);
  const transcription = ref("");
  const transientTranscription = ref("");

  const setListeningStatus = async (isListening: boolean) => {
    listeningStatus.value = isListening;
    if (isConnected.value) {
      const speechRef = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDevice/transcription/isListening");
      set(speechRef, isListening);
    }

    if (listeningStatus.value) {
      //Pause MARCo from talking
      try {
        this.audioHandler.pauseMARCoTalk();
      } catch (err) {
        console.log(err);
      }
    } else {
      if (this.tempSpeech.speech.length < 1) {
        //Resume MARCo talking if there was no input
        this.audioHandler.resumeMARCoTalk();
      }
    }
  };

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
    commlinkInitialized.value = true;

    console.log("Initializing the commlink");

    //eslint-disable-next-line no-async-promise-executor
    const checkForDockID = new Promise(async (resolve, reject) => {
      //Step 1: Check if there is a device ID
      if (dockID.value) {
        //If the dockID already exists, then we can just connect to the realtime database and start getting data
        resolve(true);
      } else {
        //If the dockID does not exist, then we need to get the dockID from preferences
        const dockID2 = await Preferences.get({ key: "dockID" });
        //eslint-disable-next-line no-constant-condition
        if (dockID2.value) {
          dockID.value = dockID2.value;
          resolve(true);
        } else {
          //console.log("Device has not been previously connected or could not be found.")
          //Generate a UUID for the device
          dockID.value = uuidv4();
          //Save the UUID to preferences
          await Preferences.set({ key: "dockID", value: dockID.value });

          //Copy the template realtime database to a new realtime database with the new UUID
          const copyTemplate = new Promise((resolve, reject) => {
            const copyTemplateRef = rtRef(rt, "MARCo/v2/deviceSyncs/TEMPLATE");
            const newDockRef = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value);
            get(copyTemplateRef)
              .then(async (snapshot) => {
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
              })
              .catch((error) => {
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
      const ref3 = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/dockEnabled");
      set(ref3, true);
      //Start listening for changes in the dock's state
      const botStateRef = rtRef(rt, `MARCo/v2/deviceSyncs/${dockID.value}/handshake/robotEnabled`);

      //Continuously listen to the dock state ref for changes in the event it disconnects.
      onValue(botStateRef, (snapshot) => {
        console.log("Received a robot state update from the realtime database");
        const response = snapshot.val();
        updateConnectionStatus(response);
      });

      //Start listening for the realtime database connection for API calls
      const jsonRef = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDevice/jsonResponse");
      onValue(jsonRef, (snapshot) => {
        console.log("Received a response from the realtime database");
        const response = snapshot.val();
        //Only if there actually is an object, send it to the paramHandler
        if (typeof response == "object" && response != null) {
          if (Object.keys(response).length > 0) {
            paramHandler(response);
          }
        }
      });

      //Start listening to the realtime database for SFX updates
      const ref2 = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDevice/transcription");
      onValue(ref2, (snapshot) => {
        console.log("Received a transcription update from the realtime database");
        const transcript = snapshot.val();

        // If the transcript says MARCo is still listening, set the listening status and update the transcription
        if (transcript.isListening) {
          setListeningStatus(transcript.isListening);
          transientTranscription.value = transcript.isFinal ? "" : transcript.nextSpeech;
          transcription.value = transcript.speech;
        }
        // Else if the incoming transcript is done listening and the app is set to listen, then send the message
        else if (!transcript.isListening && listeningStatus.value) {
          setListeningStatus(transcript.isListening);
          transientTranscription.value = "";
          transcription.value = transcript.speech;
          currMessage.value = transcript.speech;

          if (!route.meta.useTranscript) {
            sendMsg();
          }
        } else {
          console.log("The transcript is not listening and the app is set to not listen.");
        }
      });

      //Listen for pings from the realtime database to ensure live connection
      const pingRef = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/pingDock/toDock");
      onValue(pingRef, (snapshot) => {
        console.log("Received a ping from the realtime database");
        const response = snapshot.val();
        if (response) {
          const responseRef = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/pingDock/fromDock");
          set(responseRef, response);
        }
      });

      //Listen for updates from the dock for hardware events
      const hardwareRef = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDevice/hardwareEvents");
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
  };

  const updateRealtimeResponse = async (params: any) => {
    const jsonRef = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDock/jsonResponse");
    set(jsonRef, params);

    const ref2 = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/handshake/dockEnabled");
    set(ref2, true);

    pingBot();
  };

  const updateAudioResponse = async (params) => {
    console.log("Updating the audio ref with the following params: ", params);
    const audioRef = rtRef(rt, "MARCo/v2/deviceSyncs/" + dockID.value + "/fromDock/sfxHandler");
    set(audioRef, params);
  };

  const pingMsg = ref<string>("Ping?");

  const pingBot = (notifyPings = 3, maxPings = 8) => {
    //eslint-disable-next-line no-async-promise-executor
    return new Promise(async (resolve, reject) => {
      console.log("Ping?");

      while(dockID.value == "") {
        console.log("Dock ID is empty, waiting for it to be set...");
        await new Promise(r => setTimeout(r, 1000));
      }
      
      if (allowPing.value) {
        console.log("Ping!");
        pingMsg.value = "Pinging...";
        allowPing.value = false;
        //Create a random integer between 1 and 1000 to check if the dock is alive
        const randomInt = Math.floor(Math.random() * 1000) + 1;
        console.log("Going to ping: ", `MARCo/v2/deviceSyncs/${dockID.value}/handshake/pingBot/toBot`);
        set(rtRef(rt, `MARCo/v2/deviceSyncs/${dockID.value}/handshake/pingBot/toBot`), randomInt);
        pingMsg.value = `Pinging dock ${dockID.value} with ${randomInt}...`;
        let pingCheck = 0;
        //Set an interval to check if the dock has responded
        const pingInterval = setInterval(async () => {
          pingCheck++;
          pingMsg.value = `Pinging dock ${dockID.value} with ${randomInt}. Attempt ${pingCheck} of ${maxPings}...`;
          const ref2 = rtRef(rt, `MARCo/v2/deviceSyncs/${dockID.value}/handshake/pingBot/fromBot`);
          const response = await get(ref2);
          console.log(`Sent ping of ${randomInt} to dock ${dockID.value}, received: `, response.val());
          // this.EventBus.$emit("pingUpdate", `Sent ping: ${randomInt}\nTo dock ${dockID.value}\nReceived: ${response.val()}\nAttempt: ${pingCheck} of ${maxPings}...`)
          if (parseInt(response.val()) == randomInt) {
            pendingConnectionStatus.value = false;
            clearInterval(pingInterval);
            isConnected.value = true;
            pingMsg.value = `Dock ${dockID.value} is alive!`;
            setTimeout(() => {
              allowPing.value = true;
            }, 20000);
            resolve(true);
          } else {
            if (pingCheck > maxPings) {
              updateConnectionStatus(false);
              pingMsg.value = `Dock ${dockID.value} is not responding.`;
              clearInterval(pingInterval);
              allowPing.value = true;
              resolve(false);
            } else if (pingCheck > notifyPings) {
              pendingConnectionStatus.value = true;
            }
          }
        }, 1500);
      }
    });
  };
  const updateConnectionStatus = async (connectionStatus: boolean) => {
    isConnected.value = connectionStatus;
    pendingConnectionStatus.value = false;
    //If it is not connected, then we need to emit an event to the event bus to let the rest of the app know
    // this.EventBus.$emit("connectionStatus", isConnected);
    const botEnabledRef = rtRef(rt, `MARCo/v2/deviceSyncs/${dockID.value}/handshake/robotEnabled`);
    set(botEnabledRef, isConnected.value);
  };

  const compareDockIDs = async (comparedDockID: string) => {
    if (comparedDockID == dockID.value) {
      return true;
    } else {
      return false;
    }
  };
  
  const webDockResults = ref([]);
  const userScanResultsPending = ref(true);
  const userScanResultsSingle = ref(false);
  const userScanResultsMultiple = ref(false);


  const queryFirebaseRealtimeDatabase = async () => {
    userScanResultsPending.value = true;
    const userID = rawUsrData.value.basicInformation.userID;
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
      const currentDockID = await Preferences.get({ key: "dockID" });
      if (currentDockID.value) {
        const index = results.indexOf(currentDockID.value);
        if (index > -1) {
          results.splice(index, 1);
        }
      }

      //If there is only one result, then we need to set the dockID to that result and update the preferences
      if (results.length == 1) {
        dockID.value = results[0];
        await Preferences.set({ key: "dockID", value: dockID.value });
        userScanResultsSingle.value = true;
        userScanResultsPending.value = false;
        setTimeout(() => {
          window.location.reload();
        }, 3000);
      } else if (results.length == 0) {
        userScanResultEmpty.value = true;
        userScanResultsPending.value = false;
      } else {
        userScanResultsMultiple.value = true;
        userScanResultsPending.value = false;
        console.log("Multiple results found: ", results);
        webDockResults.value = results;
      }
    } else {
      console.log("No results found");
      userScanResultEmpty.value = true;
      userScanResultsPending.value = false;
    }
  };

  const liveDockCheck = ref<any>({
    id: "",
    index: 0,
    message: "Starting to check..."
  });

  const checkForLiveDock = async () => {
    let dockFound = false;
    for (let i = 0; i < webDockResults.value.length; i++) {
      dockID.value = webDockResults.value[i];
        liveDockCheck.value = {
        id: dockID.value,
        index: i,
        message: `Moving to live dock ${i + 1} of ${webDockResults.value.length}... ID is ${dockID.value}`,
      };
      const nextDock = await pingBot(10, 4);
      console.log("Next dock is: ", nextDock);
      if (nextDock) {
        await Preferences.set({ key: "dockID", value: dockID.value });
        // EventBus.$emit("userScanResultSingle", true);
        userScanResultsSingle.value = true;
        userScanResultsPending.value = false;
        dockFound = true;
        setTimeout(() => {
          window.location.reload();
        }, 3000);
        break;
      } else {
        console.warn("Dock is not responding, moving on to the next dock");
        liveDockCheck.value.message = "Dock is not responding, moving on to the next dock";
      }
    }
    if (!dockFound) {
      // EventBus.$emit("userScanResultEmpty", true);
      userScanResultEmpty.value = true;
      userScanResultsPending.value = false;
    }
  };

  //------MARCo Avatar State
  const marcoEmotion = ref('happy');
  const headState = ref('bobrotate');
	const mouthState = ref('smile');
	const eyeState = ref('normal');
	const leftLegState = ref('rest');
	const rightLegState = ref('rest');
	const selectedAvatar = ref('DefaultVwFriend2');

  return {
    messages,
    currMessage,
    marcoThinking,
    quickReplyArray,
    mediaEmbedURL,
    allowMARCoTalk,
    reconnectDialog,
    sendMsg,
    appendMARCoMessage,
    sendAction,
    setListeningStatus,
    initialized,
    activitiesList,
    dailyActivities,
    activityMode,
    selectedActivites,
    isAuthError,
    isAuthPending,
    isAuthSuccess,
    newAuthedUser,
    authError,
    activeScreenings,
    rawUsrData,
    listeningStatus,
    transcription,
    transientTranscription,
    commlinkInitialized,
    isConnected,
    headState,
    mouthState,
    eyeState,
    leftLegState,
    rightLegState,
    selectedAvatar,
    marcoEmotion,
    currResponse,
    liveDockCheck,
    // isUserDataPending,
    // userDataError,
    // isUserDataSuccess,
    // isUserDataError,
    pingMsg,
    pingBot,
    signInOrUp,
    getActivities,
    getDailyActivities,
    setActivities,
    updateDailyActivities,
    checkDailyActivities,
    manageMARCoins,
    getUserData,
    useUpdateUser,
    initializeCommlink,
    userScanResultsPending,
    userScanResultsSingle,
    userScanResultsMultiple,
    userScanResultEmpty,
    webDockResults,
    queryFirebaseRealtimeDatabase,
    checkForLiveDock,
  };
});

export default useUserStore;
