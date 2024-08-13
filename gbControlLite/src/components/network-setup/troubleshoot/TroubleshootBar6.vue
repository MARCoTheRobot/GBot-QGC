<template>
  <div>
    <h3 class="">Here’s a QR code that you can scan to get in touch with a member of our support team on your phone.</h3>
    <img src="@/assets/marco/qr/chat-QR-code.png" alt="marco" class="object-cover w-full mx-auto my-6 max-w-48 rounded-xl aspect-square">
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
