<template>
  <div class="pa-5 rounded-3xl bg-green-200 relative overflow-hidden">
    <p class="text-white">{{ title }}</p>
    <img src="https://via.placeholder.com/150" alt="Category" class="w-96 h-96 object-cover absolute" style="bottom: -15px; right: -10px">
  </div>
</template>

<script setup lang="ts">
import { ref } from "vue";
const title = ref("Category");
</script>
