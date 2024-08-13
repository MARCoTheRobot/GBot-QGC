<template>
  <div class="flex flex-col items-center gap-4">
    <ProgressSpinner style="width: 50px; height: 50px" stroke-width="8" animation-duration=".2s" />
    <p class="text-lg">Searching nearby...</p>
    <button class="w-full px-5 py-1 text-sm font-semibold uppercase border border-white border-solid rounded-full">TROUBLESHOOT</button>
  </div>
</template>

<script setup lang="ts">
import ProgressSpinner from "primevue/progressspinner";
</script>

<style scoped></style>
