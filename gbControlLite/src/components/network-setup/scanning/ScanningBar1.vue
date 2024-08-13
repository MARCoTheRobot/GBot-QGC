<template>
  <div class="flex flex-col items-center gap-4">
    <ProgressSpinner style="width: 50px; height: 50px" stroke-width="8" animation-duration=".2s" />
    <p class="text-lg">Searching nearby...</p>
    <p class="text-md">{{ hardwareStore.scanMessage }}</p>
    <Button class="w-full px-5 py-1 text-sm font-semibold text-white uppercase border border-white border-solid rounded-full" outlined rounded color="white" label="TROUBLESHOOT" @click="handleTroubleshoot" />
  </div>
</template>

<script setup lang="ts">
import ProgressSpinner from "primevue/progressspinner";
import { useHardwareStore } from "@/store/hardware";
import Button from "primevue/button";

const hardwareStore = useHardwareStore();

const emits = defineEmits<{
  (e: "onTroubleshoot"): void;
  (e: "onScanComplete", value: string): void;
}>();

// const timer = setTimeout(() => {
//   handleScanComplete("Scan complete");
// }, 5000);

const handleTroubleshoot = () => {
  // clearTimeout(timer);
  emits("onTroubleshoot");
};

const handleScanComplete = (value: string) => {
  emits("onScanComplete", value);
};
</script>

<style scoped></style>
