<template>
  <div class="relative flex flex-col h-full px-4 py-6">
    <div class="flex-1">
      <Button severity="secondary" class="!p-0 !absolute top-7 left-4" text rounded @click="$router.back()">
        <IconChevronLeft class="text-surface-500" stroke="2" size="30" />
      </Button>
      <h1 class="text-3xl font-semibold text-center">MARCo Settings</h1>

      <img src="@/assets/images/img6.png" alt="profile" class="w-full mx-auto my-8 max-w-36">

      <div class="mb-8">
        <p class="mb-1 text-lg font-semibold">MARCo’s voice</p>
        <p class="mb-8 text-surface-500">Here you can let MARCo know what you want to see and what you definitely don't want to see in activities and chats.</p>
        <div class="flex gap-2 mb-2">
          <Dropdown :options="voices" option-label="name" placeholder="Voice Profiles" class="w-full" />
          <Button class="!p-1 size-[42px] flex-shrink-0" text>
            <IconDeviceFloppy class="text-primary-500" stroke="2" size="30" />
          </Button>
        </div>
        <Button rounded class="w-full gap-2 font-semibold" size="small">
          <IconPlayerPlay stroke="2" size="20" />
          Preview Voice
        </Button>
      </div>

      <div class="mb-8">
        <p class="block mb-2 text-lg font-semibold">Control</p>
        <div class="flex justify-between gap-2">
          <label for="control-marco">Control MARCo from this device</label>
          <InputSwitch id="control-marco" v-model="controlMarco" />
        </div>
      </div>
      <div class="mb-8">
        <p class="block mb-2 text-lg font-semibold">Sync</p>
        <InputGroup>
          <InputText placeholder="Sync MARCo" />
          <Button outlined label="Sync" severity="secondary" />
        </InputGroup>
      </div>
      <div class="mb-8">
        <p class="block mb-2 text-lg font-semibold">Factory Reset</p>
        <Button severity="secondary" rounded class="w-full gap-2 font-semibold" outlined> Factory Reset </Button>
      </div>
    </div>
  </div>
</template>

<script setup lang="ts">
import { IconChevronLeft, IconDeviceFloppy, IconPlayerPlay } from "@tabler/icons-vue";

import Button from "primevue/button";
import Dropdown from "primevue/dropdown";
import InputSwitch from "primevue/inputswitch";
import InputText from "primevue/inputtext";
import InputGroup from "primevue/inputgroup";
import { ref } from "vue";

const controlMarco = ref(false);
const voices = ref([
  { name: "Voice Profile 1", code: "VP1" },
  { name: "Voice Profile 2", code: "VP2" },
  { name: "Voice Profile 3", code: "VP3" },
  { name: "Voice Profile 4", code: "VP4" },
  { name: "Voice Profile 5", code: "VP5" },
]);
</script>

<style scoped></style>
