<template>
  <Toast />	
  <ConfirmDialog />
  <!-- <TranscriptDialog mode="live" /> -->
  <div class="flex flex-row w-full h-full overflow-hidden">
    
  
    
    <div class="flex-col w-screen bg-surface-900">
      <div class="flex-initial h-full overflow-x-hidden overflow-y-auto">
        <router-view v-slot="{ Component }">
      <transition name="slide">
        <component :is="Component" class="w-full" />
      </transition>
    </router-view>
      </div>
    
    </div>
  </div>
  </template>
  
  <script setup lang="ts">
  /**
   * In this file first we load the user information from the api
   * if we don't get any then we will show the initial screen we store some info in the local storage
   */
  import useSettingsStore from "@/store/settings";
  import Image from "primevue/image";
  import logoImg from "@/assets/logo.png";
  const settings = useSettingsStore();
  import { ref } from "vue";
  import "swiper/css";
  import { useToast } from "primevue/usetoast";
  import Toast from "primevue/toast";
  import ConfirmDialog from "primevue/confirmdialog";
  import Menu from "primevue/menu";
  import AppHeader from "@/layouts/partials/AppHeader.vue";
  import TranscriptDialog from "@/components/TranscriptDialog.vue";
  import { useRouter } from "vue-router";
  import Dropdown from "primevue/dropdown";
  // import useRobotStore from "@/store/robot";
  // const robot = useRobotStore();
  
  const router = useRouter();
  const toast = useToast();
  toast.add({ severity: "success", summary: "Success Message", detail: `${settings.user}` });
  
  </script>
  
  <style scoped>
  .slide-enter-active,
  .slide-leave-active {
    transition: all 0.2s ease-out;
  }
  
  .slide-enter-to {
    position: absolute;
    right: 0;
  }
  
  .slide-enter-from {
    position: absolute;
    right: -100%;
  }
  
  .slide-leave-to {
    position: absolute;
    left: -100%;
  }
  
  .slide-leave-from {
    position: absolute;
    left: 0;
  }
  </style>
  