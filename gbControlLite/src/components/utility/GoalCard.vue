<template>
  <Card :class="`px-2 py-4 rounded-[2rem] my-3 relative overflow-hidden`" :style="`background-color: ${goalColor};`">
    <template #title>
      <h2 class="text-gray-900 dark:text-gray-800">
        The "<span :style="`color: ${goalColor}; filter: saturate(4000%) brightness(85%)`">{{ goalTitle }}</span
        >" Goal
      </h2>
    </template>
    <template #subtitle>
      <span class="text-gray-900 dark:text-gray-800">Spend {{ goalDuration }} days with MARCo to {{ goalDescription }}</span>
    </template>
    <template #content>
      <Avatar class="bg-transparent dark:bg-transparent" :image="goalImg" style="position: absolute; top: 70%; left: 80%; transform: rotate(45deg); opacity: 0.6" size="xlarge" />
      <Avatar class="bg-transparent dark:bg-transparent" :image="goalImg" style="position: absolute; top: 40%; left: 90%; transform: rotate(-32deg); opacity: 0.4" size="large" />
      <Avatar class="bg-transparent dark:bg-transparent" :image="goalImg" style="position: absolute; top: 20%; left: 85%; transform: rotate(-55deg); opacity: 0.2" size="normal" />
      <Avatar class="bg-transparent dark:bg-transparent" :image="goalImg" style="position: absolute; top: -5%; left: 85%; transform: rotate(6deg); opacity: 0.15" size="normal" />
    </template>
  </Card>
</template>

<script setup lang="ts">
import { ref } from "vue";
import Card from "primevue/card";
import Avatar from "primevue/avatar";

const props = defineProps<{
  goalTitle?: string;
  goalColor?: string;
  goalDescription?: string;
  goalImg?: string;
  goalDuration?: number;
}>();

const goalTitle = ref(props.goalTitle || "Feel Better");
const goalColor = ref(props.goalColor || "#FFC107");
const goalDescription = ref(props.goalDescription || "feel better");
const goalDuration = ref(props.goalDuration || 30);
const goalImg = ref(props.goalImg || "https://www.svgrepo.com/show/7696/png.svg");
</script>
