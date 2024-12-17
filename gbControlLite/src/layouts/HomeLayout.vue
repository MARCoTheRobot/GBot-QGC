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

      
      
  

    </div>
  </main>
</template>

<script setup lang="ts">
import TranscriptDialog from "@/components/TranscriptDialog.vue";
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
