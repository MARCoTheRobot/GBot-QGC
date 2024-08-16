<template>
  <div
    class="fixed top-0 z-10 flex flex-row items-start justify-between w-full px-4 py-1 bg-gray-800/60 backdrop-blur-2xl"
  >
    <div class="flex items-center gap-2">
      <IconVideo class="w-8 h-8" />
      <span class="w-4 h-4 bg-green-500 rounded-full"></span>
      <IconScooterElectric class="w-8 h-8"/>
      <span class="w-4 h-4 bg-green-500 rounded-full"></span>
      <IconVolume class="w-8 h-8"/>
      <span class="w-4 h-4 bg-red-500 rounded-full"></span>
      <IconTextCaption class="w-8 h-8"/>
      <span class="w-4 h-4 bg-red-500 rounded-full"></span>


    </div>
    
  </div>
  
  <!-- end of sidebar -->
  <div class="mb-[64px]" />
</template>

<script setup lang="ts">
import useSettingsStore from "@/store/settings";
import {
  IconScooterElectric,
  IconVideo,
  IconVolume,
  IconTextCaption,
  IconCalendarWeek,
  IconChevronRight,
  IconListDetails,
  IconLogout,
  IconMenu2,
  IconMoon,
  IconNotebook,
  IconPhone,
  IconPlayerPlay,
  IconRefresh,
  IconSettings,
  IconSun,
  IconX,
} from "@tabler/icons-vue";
import Button from "primevue/button";
import Sidebar from "primevue/sidebar";
import { ref } from "vue";
import useUserStore from "@/store/user";

const userStore = useUserStore();

const sidebarVisible = ref(false);
const settings = useSettingsStore();
const props = defineProps<{
  type?: "home" | "internal";
}>();

const saveAndQuit = () => {
  window.location.reload();
};
</script>

<style scoped></style>
