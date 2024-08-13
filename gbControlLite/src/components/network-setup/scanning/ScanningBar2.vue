<template>
  <div>
    <h3 class="text-xl font-semibold">Is this your MARCo?</h3>
    <img src="@/assets/marco/MARCo-II.png" alt="marco" class="w-full py-6 mx-auto max-w-44">
    <p class="mb-2 text-lg font-bold">MARCo-II</p>
    <div class="mb-2 divide-y-2">
      <p class="flex items-center gap-2 py-2">
        <b>WIFI:</b>
        <span v-if="!hardwareStore.deviceWifiStatus" :class="`block bg-red-600 rounded-full size-3`" />
        <span v-else :class="`block bg-green-600 rounded-full size-3`" />
        <i>{{ hardwareStore.deviceWifiStatus ? "Connected":"None" }}</i>
      </p>
      <p class="py-2"><b>Nickname:</b> <i>None</i></p>
    </div>
    <div class="flex items-center gap-4">
      <button v-ripple class="w-full px-5 py-1 text-sm font-semibold text-black uppercase bg-white border border-white border-solid rounded-full" @click="handleSelectMARCo">SELECT</button>
      <button v-ripple class="w-full px-5 py-1 text-sm font-semibold uppercase border border-white border-solid rounded-full" @click="handleRescan">RESCAN</button>
    </div>
  </div>
</template>

<script setup lang="ts">

import { useHardwareStore } from "@/store/hardware";
import { onUnmounted } from "vue";
const hardwareStore = useHardwareStore();
const emits = defineEmits<{
  (e: "onSelectMARCo"): void;
  (e: "onRescan" ): void;
}>();



const handleSelectMARCo = () => {
  if(!hardwareStore.deviceWifiStatus){
    hardwareStore.hardwareStep += 1;
  }
  else{
    console.log("Sending Dock ID to the server");
    hardwareStore.sendDockID();
  }
};

const handleRescan = () => {
  emits("onRescan");
};

// While the screen is up, we need to ping the wifi status of the device every 5 seconds
const timer = setInterval(() => {
  hardwareStore.getDeviceNetworkStatus();
}, 5000);

onUnmounted(() => {
  clearInterval(timer);
});

</script>

<style scoped></style>
