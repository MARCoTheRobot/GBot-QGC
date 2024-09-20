<template>
  <div
    class="fixed top-0 z-10 flex flex-row items-start justify-between w-full px-4 py-1 bg-gray-800/60 backdrop-blur-2xl"
  >
    <div class="flex items-center gap-2">
      <!--Check if video is active and add delay-->
      <IconVideo class="w-8 h-8" />
      <span :class="`w-4 h-4 ${dotColor(robot.videoActive)} rounded-full`" />

      <!--Audio on-->
      <IconVolume class="w-8 h-8" />
      <span :class="`w-4 h-4 ${dotColor(robot.audioActive)} rounded-full`" />

      <!--Transcript active-->
      <IconTextCaption class="w-8 h-8" />
      <span :class="`w-4 h-4 ${dotColor(robot.audioActive)} rounded-full`" />

      <!--Motors active-->
      <IconScooterElectric class="w-8 h-8" />
      <span :class="`px-2 ${robot.motorsActive ? 'bg-green-500':'bg-red-500'} rounded-full`">{{ robot.m1Speed.toFixed(1) }}</span>
      <span :class="`px-2 ${robot.motorsActive ? 'bg-green-500':'bg-red-500'} rounded-full`">{{ robot.m2Speed.toFixed(1) }}</span>
      

      <!--Robot Pitch-->
      <IconAngle class="w-8 h-8" />
      <span class="w-4 h-4 rounded-full">{{ robot.robotRoll.toFixed(1) }}°</span>

      <!--External temperature-->
      <IconThermometer class="w-8 h-8" />
      <span :class="`px-2 ${tempColor(robot.internalTemperature)} rounded-full`">{{ robot.internalTemperature.toFixed(0) }}°</span>

      <!--CPU Temperature-->
      <IconCpu class="w-8 h-8" />
      <span :class="`px-2 ${tempColor(robot.cpuTemperature)} rounded-full`">{{ robot.cpuTemperature.toFixed(0) }}°</span>



    </div>
    
  </div>
  
  <!-- end of sidebar -->
  <div class="mb-[44px]" />
</template>

<script setup lang="ts">
import useSettingsStore from "@/store/settings";
import {
  IconScooterElectric,
  IconVideo,
  IconVolume,
  IconTextCaption,
  IconAngle,
  IconThermometer,
  IconCpu
} from "@tabler/icons-vue";
import Button from "primevue/button";
import Sidebar from "primevue/sidebar";
import { ref } from "vue";
import useRobotStore from "@/store/robot";

const robot = useRobotStore();


const sidebarVisible = ref(false);
const settings = useSettingsStore();
const props = defineProps<{
  type?: "home" | "internal";
}>();

const saveAndQuit = () => {
  window.location.reload();
};

const dotColor = (active: boolean) => {
  return active ? "bg-green-500" : "bg-red-500";
};

const tempColor = (temperature: number) => {
  if(temperature < 32) return "bg-blue-500";
  else if(temperature < 50) return "bg-green-500";
  else if(temperature < 70) return "bg-yellow-500";
  return "bg-red-500";
}
</script>

<style scoped></style>
