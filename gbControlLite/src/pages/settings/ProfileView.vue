<template>
  <div class="relative flex flex-col h-full px-4 py-6 bg-slate-900">
    <div class="flex-1">
      <Button severity="secondary" class="!p-0 !absolute top-7 left-4" text rounded @click="$router.back()">
        <IconChevronLeft class="text-surface-500" stroke="2" size="30" />
      </Button>
      <h1 class="text-3xl font-semibold text-center">Profile</h1>
      <div class="flex flex-col items-center my-12">
        <div class="relative mb-2 border-2 shadow-md size-28 border-primary-600 rounded-2xl">
          <img src="@/assets/disposable/user.jpg" alt="profile" class="object-cover w-full h-full rounded-2xl">
          <Button class="!p-1 shadow-md !absolute -bottom-3 -right-3" rounded @click="$router.back()">
            <IconPencil class="text-white" stroke="2" size="30" />
          </Button>
        </div>
        <p class="text-xl font-bold">{{ usersName }}</p>
        <p class="font-medium text-surface-500">@lolascott3</p>
      </div>

      <div class="mb-4 divide-y divide-primary-400">
        <div class="grid grid-cols-2 divide-x-[1px] py-4 divide-primary-400">
          <div class="col-span-1 px-2">
            <p class="font-semibold text-center">Name</p>
            <p class="text-center">{{ usersName }}</p>
          </div>
          <div class="col-span-1 px-2">
            <p class="font-semibold text-center">Coins</p>
            <p class="text-center">{{ userMARCoins }}</p>
          </div>
        </div>
        <div class="grid grid-cols-2 divide-x-[1px] py-4 divide-primary-400">
          <div class="col-span-1 px-2">
            <p class="font-semibold text-center">Birthday</p>
            <p class="text-center">{{ userBirthday }}</p>
          </div>
          <div class="col-span-1 px-2">
            <p class="font-semibold text-center">Joined</p>
            <p class="text-center">{{ firstDate }}</p>
          </div>
        </div>
      </div>

      <p class="mb-1 text-lg font-semibold">Interests</p>
      <p class="mb-8 text-surface-500">
        None of this information is required, but for a more personalized experience with MARCo, feel free to fill in any or all of the fields below. Choose from suggested options
        or enter your own!
      </p>

      <div class="py-0 pb-3 mb-8 card">
        <TabView :scrollable="true" panel-class="!p-0 tab-view">
          <TabPanel header="Favorite Animals" content-class="!p-0">
            <div class="flex gap-2 pt-3">
              <MultiSelect v-model="selectedAnimals" :options="animalList" option-label="name" placeholder="Select Favorite Animals" class="w-full" />
              <Button class="!p-1 size-[42px] flex-shrink-0" text>
                <IconDeviceFloppy class="text-primary-500" stroke="2" size="30" />
              </Button>
            </div>
          </TabPanel>
          <TabPanel header="Hobbies">
            <div class="flex gap-2 pt-3">
              <MultiSelect v-model="selectedHobbies" :options="hobbiesList" option-label="name" placeholder="Select Hobbies" class="w-full" />
              <Button class="!p-1 size-[42px] flex-shrink-0" text>
                <IconDeviceFloppy class="text-primary-500" stroke="2" size="30" />
              </Button>
            </div>
          </TabPanel>
          <TabPanel header="Faith/Religion">
            <div class="flex gap-2 pt-3">
              <Dropdown v-model="selectedFaith" :options="faithList" option-label="name" placeholder="Select Faith/Religion" class="w-full" />
              <Button class="!p-1 size-[42px] flex-shrink-0" text>
                <IconDeviceFloppy class="text-primary-500" stroke="2" size="30" />
              </Button>
            </div>
          </TabPanel>
        </TabView>
      </div>

      <div class="mb-8">
        <label for="number" class="block mb-2 text-lg font-semibold">Emergency contact</label>
        <div class="flex gap-2">
          <Dropdown option-label="name" placeholder="+1 (201) 555-5555" class="w-full" />
          <Button class="!p-1 size-[42px] flex-shrink-0" text>
            <IconDeviceFloppy class="text-primary-500" stroke="2" size="30" />
          </Button>
        </div>
        <span class="text-sm text-surface-500">Please enter at least ONE emergency contact.</span>
      </div>

      <div class="mb-16">
        <p class="mb-2 text-lg font-semibold">Account controls</p>
        <Button rounded class="w-full gap-2 font-semibold" severity="secondary">
          <IconRestore stroke="2" size="20" />
          Reset Password
        </Button>
      </div>

      <div class="border-red-500 card">
        <p class="text-lg font-semibold text-red-500">DANGER ZONE</p>
        <p class="mb-3 text-red-500">Actions below this line are irreversible</p>
        <Button rounded class="w-full gap-2 font-semibold" severity="danger">
          <IconTrashX stroke="2" size="20" />
          Delete My Account
        </Button>
      </div>
    </div>
  </div>
</template>

<script setup lang="ts">
import { IconChevronLeft, IconDeviceFloppy, IconPencil, IconRestore, IconTrashX } from "@tabler/icons-vue";
import Button from "primevue/button";
import Dropdown from "primevue/dropdown";
import MultiSelect from "primevue/multiselect";
import TabPanel from "primevue/tabpanel";
import TabView from "primevue/tabview";
import { ref, computed } from "vue";

import useUserStore from "@/store/user";
const userStore = useUserStore();

const usersName = computed(() => {
  return `${userStore.rawUsrData !== null ? userStore.rawUsrData.basicInformation["basic-given-name"] : "Friend"} ${
    userStore.rawUsrData !== null ? userStore.rawUsrData.basicInformation["basic-last-name"] : ""
  }`;
});

const firstDate = computed(() => {
  return userStore.rawUsrData !== null ? userStore.rawUsrData.userPersonality.userGeneral.firstDate: "01/01/2024";
});

const userBirthday = computed(() => {
  return userStore.rawUsrData !== null ? userStore.rawUsrData.basicInformation.birthDate : "-";
});

const userMARCoins = computed(() => {
  return userStore.rawUsrData !== null ? userStore.rawUsrData.userPersonality.userGeneral.MARCoins : 0;
})
const selectedAnimals = ref();
const animalList = ref([
  { name: "Cats", value: "cat" },
  { name: "Dogs", value: "dog" },
  { name: "Birds", value: "bird" },
  { name: "Monkeys", value: "monkey" },
  { name: "Foxes", value: "fox" },
  { name: "Horses", value: "horse" },
  { name: "Pandas", value: "panda" },
  { name: "Sloths", value: "sloth" },
  { name: "Rabbits", value: "rabbit" },
  { name: "Lizards", value: "lizard" },
  { name: "Snakes", value: "snake" },
]);

const selectedHobbies = ref();
const hobbiesList = ref([
  { name: "Playing music", value: "music" },
  { name: "Makeup", value: "makeup" },
  { name: "Art", value: "general art" },
  { name: "Drawing", value: "drawing" },
  { name: "Painting", value: "painting" },
  { name: "Theater", value: "theater" },
  { name: "Gaming", value: "gaming" },
  { name: "Magic/Magic Tricks", value: "magic" },
  { name: "Cooking", value: "cooking" },
  { name: "Photography", value: "photography" },
  { name: "Reading", value: "reading" },
  { name: "Writing", value: "writing" },
  { name: "Playing/Watching Sports", value: "sports" },
]);
const selectedFaith = ref();
const faithList = ref([
  { name: "Christianity", value: "christianity" },
  { name: "Judaism", value: "judaism" },
  { name: "Islam", value: "islam" },
  { name: "Hinduism", value: "hinduism" },
  { name: "Buddhism", value: "buddhism" },
  { name: "Spiritual/New Religion", value: "spiritual" },
  { name: "Sikh", value: "sikh" },
  { name: "Taoism", value: "taoism" },
  { name: "Atheism", value: "atheism" },
]);
</script>

<style scoped></style>
