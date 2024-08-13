<template>
  <main class="h-full bg-gradient-to-r from-green-500 to-teal-500">
    <div class="w-full h-full mx-auto lg:max-w-md lg:py-8">
      <div class="h-full overflow-hidden bg-surface-50 lg:rounded-lg lg:border-2 border-primary-600">
        <div class="h-full overflow-auto">
          <router-view v-slot="{ Component, route }">
            <!-- Use a custom transition or fallback to `fade` -->
            <transition :name="route.meta.transition || 'fade'" mode="out-in">
              <div :key="route.name">
                <component :is="Component" />
              </div>
            </transition>
          </router-view>
        </div>
        <chat-bar v-if="showChatBar" />
      </div>

      <!--Transcription dialog & border-->
      <transition name="fade" mode="out-in">
        <div v-if="userStore.listeningStatus" class="fixed inset-0 top-0 left-0 z-50 items-center justify-center w-screen h-screen bg-slate-950/20" style="backdrop-filter: blur(6px);">
          <!-- <div class="absolute inset-0 transcript-modal gradient-border"></div> -->
          <div class="gradient-border left-border box-123" />
          <div class="gradient-border right-border box-123" />
          <div class="gradient-border top-border box-123" />
          <div class="gradient-border bottom-border box-123" />
          <div class="relative z-10 flex items-center justify-center w-full h-full">
            <!-- Modal content goes here -->
             <div v-if="userStore.transcription.length > 0 || userStore.transientTranscription.length > 0">
              <span class="text-2xl font-extrabold text-white">{{ userStore.transcription + " " }} </span>
              <span class="text-2xl italic font-extrabold" style="border-bottom: 1px dashed white;">{{ userStore.transientTranscription }}</span>
             </div>
             <div v-else>
              <span class="text-lg">{{ t(`util.listening`) }}...</span>
             </div>
            
          </div>
        </div>
      </transition>

      <!--Reconnect to MARCo sidebar-->
      <Sidebar v-model:visible="userStore.reconnectDialog" header="Can't find a MARCo" position="bottom">
        <!--State = 0 - options for reconnecting or adding MARCo-->
        <div class="p-4" v-if="reconnectMARCoState === 0">
          <EmptyComponent :msg="t(`networkSetup.couldNotFind`)"/>
          <div class="flex flex-col w-full gap-2">
            <Button :label="t(`networkSetup.connectToPrevious`).toLocaleUpperCase()" class="w-full" severity="secondary" icon="pi pi-search-plus" text @click="openSearchPreviousMARCo" />
            <Button :label="t(`networkSetup.addNewMARCo`).toLocaleUpperCase()" class="w-full" severity="secondary" icon="pi pi-user-plus" text @click="reconnectMARCoState = 1" />
            <Button :label="t(`util.troubleshoot`).toLocaleUpperCase()" class="w-full" icon="pi pi-wrench" severity="secondary" text />
          </div>
        </div>
        <!--State = 1 - bluetooth network setup-->
        <NetworkSetup :open="reconnectMARCoState === 1"  v-if="reconnectMARCoState === 1" />

        <!--State = 2 - Scan to see if previous docks exist in the realtime database-->
        <div class="p-4" v-if="reconnectMARCoState === 2">
          <EmptyComponent :msg="`Pending User Scan Results: ${userStore.userScanResultsPending}; Single User Scan Results: ${userStore.userScanResultsSingle}; Multiple User Scan Results: ${userStore.userScanResultsMultiple};`"/>
        </div>

        <!--State = 3 - Multiple previous dock results were found, show how many and prompt the user-->
        <div class="p-4" v-if="reconnectMARCoState === 3">
          <EmptyComponent :msg="`There are ${userStore.webDockResults.length} previous connections found. It will take up to ${Math.ceil(userStore.webDockResults.length * 4 / 60) } minutes to check them.`" :action1="openCheckPreviousMARCos" :action1-label="t(`util.start`).toLocaleUpperCase()" />
          <div class="flex flex-row justify-between w-full">
            <Button :label="t(`util.start`).toLocaleUpperCase()" class="w-full" severity="secondary" icon="pi pi-search-plus" text @click="openCheckPreviousMARCos" />
            <Button :label="t(`util.cancel`).toLocaleUpperCase()" class="w-full" icon="pi pi-wrench" severity="secondary" text />
          </div>
        </div>

        <!--State = 4 - Scanning previously connected MARCo's-->
        <div class="p-4" v-if="reconnectMARCoState === 4">
          <EmptyComponent :msg="`Checking previous MARCos... Please make sure the one you want to connect to is powered on and connected to wifi.`"/>
          <ProgressBar :value="(userStore.liveDockCheck.index + 1) / (userStore.webDockResults.length)">{{ userStore.liveDockCheck.index + 1 }} /{{ userStore.webDockResults.length}}</ProgressBar>
            <Panel header="Stats for Nerds" toggleable :collapsed="true" class="w-full">
              <p>{{userStore.liveDockCheck.message}} {{ userStore.pingMsg }}</p>
            </Panel>
      
        </div>

        <!--State = 5 - Found a previously connected MARCo - proceed to refresh window-->
        <div class="p-4" v-if="reconnectMARCoState === 5">
          <EmptyComponent :msg="`Found a MARCo! This window will refresh shortly.`" :lottie="checkbox1"/>
        </div>

        <!--State = 6 - Could not find a previously connected MARCo-->
        <div class="p-4" v-if="reconnectMARCoState === 6">
          <EmptyComponent :msg="`Could not find any previously connected MARCos...`"/>
          <div class="flex flex-row justify-between w-full">
            <Button :label="t(`util.start`).toLocaleUpperCase()" class="w-full" severity="secondary" icon="pi pi-search-plus" text @click="reconnectMARCoState = 1" />
            <Button :label="t(`util.cancel`).toLocaleUpperCase()" class="w-full" icon="pi pi-wrench" severity="secondary" text />
          </div>
        </div>

      </Sidebar>
      
    </div>
  </main>
</template>

<script setup lang="ts">
import ChatBar from "@/components/chat/ChatBar.vue";
import Sidebar from "primevue/sidebar";
import { ref, computed, onBeforeMount, watch } from "vue";
import { useRoute } from "vue-router";
import { auth } from "@/hooks/firebase";
import useUserStore from "@/store/user";
import { useLang } from "@/hooks/useLang";
import NetworkSetup from "@/components/network-setup/NetworkSetup.vue";
import EmptyComponent from "@/components/utility/EmptyComponent.vue";
import Button from "primevue/button";
import Panel from "primevue/panel";
import ProgressBar from "primevue/progressbar";
import { storeToRefs } from "pinia";
import checkbox1 from "@/assets/lotties/checkmark-1.json"

const { t } = useLang();
const userStore = useUserStore();


auth.onAuthStateChanged((user) => {
  if (user) {
    userStore.getUserData();
    console.log("THE CURRENT USER 223 IS: ", auth.currentUser);
    if(!userStore.commlinkInitialized){
      console.log("INITIALIZING THE COMMLINK HERE");
      userStore.initializeCommlink();
  }
  }
});

onBeforeMount(() => {
  if (auth.currentUser) {
    console.log("THE CURRENT USER IS: ", auth.currentUser);
    userStore.getUserData();
    if(!userStore.commlinkInitialized){
      console.log("INITIALIZING THE COMMLINK DURING MOUNT");
      userStore.initializeCommlink();
      
  }
  }
  else{
    console.log("NO USER IS LOGGED IN");
  }

  console.log("RUNNING THE MOUNTING FUNCTION");
});


const reconnectMARCoState = ref<number>(5);


const route = useRoute();
console.log("THE ROUTE META IS: ", route.meta.showChatBar);


const showChatBar = computed(() => {
  return route.meta.showChatBar && userStore.initialized;
});

const {userScanResultsPending, userScanResultsSingle, userScanResultsMultiple} = storeToRefs(userStore);

/**
 * @description - Watches the userScanResultsMultiple variable and moves to the completed state if multiple docks are found
 */
watch(userScanResultsMultiple, (newVal, oldVal) =>{
  if(newVal && !oldVal){
    console.log("Multiple old docks found, moving to state 3");
    reconnectMARCoState.value = 3;
  }
});

/**
 * @description - Watches the userScanResultsSingle variable and moves to the completed state if a single dock is found
 */
watch(userScanResultsSingle, (newVal, oldVal) =>{
  if(newVal && !oldVal){
    console.log("Single old dock found, moving to state 5");
    reconnectMARCoState.value = 5;
  }
});

/**@function openSearchPreviousMARCo
 * @description Moves to the state where the app is searching for previously connected MARCos and launches that function
 */ 
const openSearchPreviousMARCo = () => {
  reconnectMARCoState.value = 2;
  userStore.queryFirebaseRealtimeDatabase();
}

/**
 * @function openCheckPreviousMARCos
 * @description Moves to the state where the app is checking previously connected MARCos and launches that function
 */
const openCheckPreviousMARCos = () => {
  reconnectMARCoState.value = 4;
  userStore.checkForLiveDock();
}



</script>

<style scoped>
@import "@/css/transitions.css";

.box-123 {
  display: flex;
  align-items: center;
  justify-content: center;
  width: calc(100vw - var(--borderWidth) * 2);
  height: calc(100vh - var(--borderWidth) * 2);
  color: white;
  font-family: 'Raleway';
  font-size: 2.5rem;
}
.gradient-border {
  --borderWidth: 12px;
  background: transparent;
  position: absolute;
  border-radius: var(--borderWidth);
}

.gradient-border.left-border{
  left:calc(-100% + 2 * var(--borderWidth));
}
.gradient-border.right-border{
  left:calc(100vw - 0.5* var(--borderWidth));
}
.gradient-border.top-border{
  top:calc(-100vh + 2.5 * var(--borderWidth));
}
.gradient-border.bottom-border{
  top:calc(100vh - var(--borderWidth));
}
.gradient-border:after {
  content: '';
  position: absolute;
  top: calc(-1 * var(--borderWidth));
  left: calc(-1 * var(--borderWidth));
  height: calc(100% + var(--borderWidth) * 2);
  width: calc(100% + var(--borderWidth) * 2);
  background: linear-gradient(60deg, #f79533, #f37055, #ef4e7b, #a166ab, #5073b8, #1098ad, #07b39b, #6fba82);
  border-radius: calc(2 * var(--borderWidth));
  z-index: -1;
  animation: animatedgradient 3s ease alternate infinite;
  background-size: 300% 300%;
  filter:blur(8px)
}


@keyframes animatedgradient {
	0% {
		background-position: 0% 50%;
	}
	50% {
		background-position: 100% 50%;
	}
	100% {
		background-position: 0% 50%;
	}
}





</style>
