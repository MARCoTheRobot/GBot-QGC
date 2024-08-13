<template>
  <div>
    <img src="@/assets/marco/MARCo-II.png" alt="marco" class="w-full py-6 mx-auto max-w-44">
    <p class="mb-6">Looks like you’re not connected to a MARCo right now. What would you like to do?</p>
    <div class="space-y-2">
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
  </div>
</template>

<script setup lang="ts">
import { IconPlugConnected, IconUserExclamation, IconUserPlus } from "@tabler/icons-vue";

const emits = defineEmits<{
  (e: "onFindMarcos"): void;
  (e: "onAddMarcos"): void;
  (e: "onTroubleshoot"): void;
}>();

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
