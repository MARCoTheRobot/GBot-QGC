<template>
  <div>
    <h3 class="">
      Connect the MARCo to a power supply - some models MUST be connected, some have a battery pack. In either case, wait a minute or two and try to click the power button again -
      did it light up this time?
    </h3>
    <img src="@/assets/marco/troubleshoot-bar/3.png" alt="marco" class="w-full rounded-xl my-4 aspect-[4.8/3.2] object-cover">
    <div class="flex items-center gap-4">
      <button class="w-full px-5 py-1 text-sm font-semibold text-black uppercase bg-white border border-white border-solid rounded-full" @click="handleYes">Yes</button>
      <button class="w-full px-5 py-1 text-sm font-semibold uppercase border border-white border-solid rounded-full" @click="handleNo">No</button>
    </div>
  </div>
</template>

<script setup lang="ts">
const emits = defineEmits<{
  (e: "onYes"): void;
  (e: "onNo"): void;
}>();

const handleYes = () => {
  emits("onYes");
};

const handleNo = () => {
  emits("onNo");
};
</script>

<style scoped></style>
