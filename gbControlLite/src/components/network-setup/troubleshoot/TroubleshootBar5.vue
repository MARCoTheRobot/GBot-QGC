<template>
  <div>
    <p class="mb-6">Scanning again for MARCos... Please be patient.</p>
    <div class="flex items-center justify-center">
      <ProgressSpinner style="width: 50px; height: 50px" stroke-width="8" animation-duration=".2s" />
    </div>
    <p class="mb-6 text-lg text-center">Searching nearby...</p>
    <button class="w-full px-5 py-1 text-sm font-semibold uppercase border border-white border-solid rounded-full" @click="handleTroubleshoot">NOTHING’S HAPPENED</button>
  </div>
</template>

<script setup lang="ts">
import ProgressSpinner from "primevue/progressspinner";

const emits = defineEmits<{
  (e: "onTroubleshoot"): void;
  (e: "onScanComplete", value: string): void;
}>();

const handleTroubleshoot = () => {
  emits("onTroubleshoot");
};

const handleScanComplete = (value: string) => {
  emits("onScanComplete", value);
};
</script>

<style scoped></style>
