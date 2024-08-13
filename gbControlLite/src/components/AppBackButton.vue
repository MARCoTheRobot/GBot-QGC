<template>
  <Button severity="secondary" class="!p-0 !absolute top-7 left-4" text rounded @click="$router.back()">
    <IconChevronLeft class="text-surface-500" stroke="2" size="30" />
  </Button>
</template>

<script setup lang="ts">
import { IconChevronLeft } from "@tabler/icons-vue";
import Button from "primevue/button";
</script>

<style scoped></style>
