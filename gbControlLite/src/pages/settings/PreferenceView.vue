<template>
  <div class="relative flex flex-col h-full px-4 py-6">
    <div class="flex-1">
      <Button severity="secondary" class="!p-0 !absolute top-7 left-4" text rounded @click="$router.back()">
        <IconChevronLeft class="text-surface-500" stroke="2" size="30" />
      </Button>
      <h1 class="text-3xl font-semibold text-center">Preferences</h1>

      <IconAdjustmentsHorizontal stroke="2" size="100" class="mx-auto my-8 text-primary-600" />
      <div class="mb-8">
        <label for="number" class="block mb-2 text-lg font-semibold">Select a Language</label>
        <div class="flex gap-2">
          <Dropdown option-label="name" placeholder="Language settings " class="w-full" />
          <Button class="!p-1 size-[42px] flex-shrink-0" text>
            <IconDeviceFloppy class="text-primary-500" stroke="2" size="30" />
          </Button>
        </div>
      </div>

      <div class="mb-8">
        <p class="mb-2 text-lg font-semibold">Content preferences</p>
        <Accordion>
          <!-- eslint-disable-next-line vue/attribute-hyphenation -->
          <AccordionTab headerClass="bg-white [&>*]:px-4 [&>*]:py-3">
            <template #header>
              <span class="flex items-center w-full gap-2">
                <img src="@/assets/content-moderation/images/image_4.png" class="flex-shrink-0 rounded-full size-8" alt="">
                <span class="font-bold whitespace-nowrap">Age Restriction</span>
              </span>
            </template>
            adasdas
          </AccordionTab>
          <!-- eslint-disable-next-line vue/attribute-hyphenation -->
          <AccordionTab headerClass="bg-white [&>*]:px-4 [&>*]:py-3">
            <template #header>
              <span class="flex items-center w-full gap-2">
                <img src="@/assets/content-moderation/images/image_5.png" class="flex-shrink-0 rounded-full size-8" alt="">
                <span class="font-bold whitespace-nowrap">Restricted Content</span>
              </span>
            </template>
          </AccordionTab>
          <!-- eslint-disable-next-line vue/attribute-hyphenation -->
          <AccordionTab headerClass="bg-white [&>*]:px-4 [&>*]:py-3">
            <template #header>
              <span class="flex items-center w-full gap-2">
                <img src="@/assets/content-moderation/images/image_8.png" class="flex-shrink-0 rounded-full size-8" alt="">
                <span class="font-bold whitespace-nowrap">My Content</span>
              </span>
            </template>
          </AccordionTab>
          <!-- eslint-disable-next-line vue/attribute-hyphenation -->
          <AccordionTab headerClass="bg-white [&>*]:px-4 [&>*]:py-3">
            <template #header>
              <span class="flex items-center w-full gap-2">
                <img src="@/assets/content-moderation/images/image_6.png" class="flex-shrink-0 rounded-full size-8" alt="">
                <span class="font-bold whitespace-nowrap">Topics to Avoid</span>
              </span>
            </template>
          </AccordionTab>
        </Accordion>
      </div>

      <div class="mb-8">
        <p class="mb-2 text-lg font-semibold">Notification preferences</p>
        <div class="flex gap-2 pt-3">
          <InputText type="text" class="w-full" placeholder="Phone Number" />
          <Button class="!p-1 size-[42px] flex-shrink-0" text>
            <IconDeviceFloppy class="text-primary-500" stroke="2" size="30" />
          </Button>
        </div>
        <Message :closable="false"
          >6/16/2022 - MARCo's text messages are in beta for robot users only. To set a phone notification schedule, you must be syncing to a MARCo. Emergency text messages will
          not be affected.</Message
        >
      </div>

      <div class="mb-8">
        <p class="text-lg font-semibold">Content preferences</p>
        <p class="mb-2">MARCo can text me to checkin with me</p>
        <div class="space-y-2">
          <div v-for="item in checkin" :key="item.value" class="flex items-center">
            <RadioButton v-model="selectedCheckin" :input-id="item.value" name="dynamic" class="flex-shrink-0" :value="item.value" />
            <label :for="item.value" class="ml-2">{{ item.label }}</label>
          </div>
        </div>
      </div>
      <div class="mb-8">
        <div class="flex items-center gap-2">
          <IconMoon stroke="2" size="20" />
          <p class="text-lg font-semibold">Quiet Hours</p>
        </div>
        <p class="mb-2">When is Marco NOT allowed to text you?</p>
      </div>
    </div>
  </div>
</template>

<script setup lang="ts">
import { IconAdjustmentsHorizontal, IconChevronLeft, IconDeviceFloppy, IconMoon } from "@tabler/icons-vue";
import Accordion from "primevue/accordion";
import AccordionTab from "primevue/accordiontab";
import Button from "primevue/button";
import Dropdown from "primevue/dropdown";
import InputText from "primevue/inputtext";
import Message from "primevue/message";
import RadioButton from "primevue/radiobutton";
import { ref } from "vue";

const checkin = ref([
  { label: "Daily", value: "5" },
  { label: "Every other day", value: "4" },
  { label: "Weekly", value: "3" },
  { label: "Bi-Weekly", value: "2" },
  { label: "Monthly", value: "1" },
  { label: "Never", value: "0" },
]);

const selectedCheckin = ref(null);
</script>

<style scoped></style>
