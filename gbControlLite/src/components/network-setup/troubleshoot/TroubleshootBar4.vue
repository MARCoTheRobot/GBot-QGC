<template>
  <div>
    <p class="mb-6">Sounds like MARCo needs a little help then. Choose one of the options below to contact a member of our support team:</p>
    <div class="mb-6 space-y-2">
      <button class="flex items-center gap-3" @click="handleFindMarcos">
        <IconPlugConnected stroke="2" size="20" />
        Find previously connected MARCos
      </button>
      <button class="flex items-center gap-3" @click="handleAddMarcos">
        <IconUserPlus stroke="2" size="20" />
        Add a new MARCo or send WiFi details
      </button>
      <button class="flex items-center gap-3" @click="handleTroubleshoot">
        <IconUserExclamation stroke="2" size="20" />
        Troubleshoot
      </button>
    </div>
    <button class="w-full px-5 py-1 text-sm font-semibold uppercase border border-white border-solid rounded-full" @click="handleGoBack">GO BACK</button>
  </div>
</template>

<script setup lang="ts">
import { IconPlugConnected, IconUserExclamation, IconUserPlus } from "@tabler/icons-vue";

const emits = defineEmits<{
  (e: "onGoBack"): void;
  (e: "onFindMarcos"): void;
  (e: "onAddMarcos"): void;
  (e: "onTroubleshoot"): void;
}>();

const handleGoBack = () => {
  emits("onGoBack");
};

const handleFindMarcos = () => {
  emits("onFindMarcos");
};

const handleAddMarcos = () => {
  emits("onAddMarcos");
};

const handleTroubleshoot = () => {
  emits("onTroubleshoot");
};
</script>

<style scoped></style>
