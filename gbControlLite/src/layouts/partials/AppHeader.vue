<template>
  <div
    v-if="props.type === 'internal'"
    class="fixed top-0 z-10 flex items-center justify-between w-full px-4 py-3 border-b-2 dark:bg-surface-700 bg-surface-200 border-surface-300 dark:border-surface-500"
  >
    <div class="flex items-center gap-2">
      <Button severity="secondary" class="!p-1" text rounded @click="sidebarVisible = true">
        <IconMenu2 class="text-surface-500" stroke="2" size="30" />
      </Button>
      <Button severity="secondary" class="!p-1" text rounded @click="settings.app.theme === 'dark' ? (settings.app.theme = 'light') : (settings.app.theme = 'dark')">
        <IconMoon v-if="settings.app.theme === 'dark'" class="text-surface-500" stroke="2" size="30" />
        <IconSun v-else class="text-surface-500" stroke="2" size="30" />
      </Button>
    </div>
    <div class="flex items-center gap-2 rounded-full cursor-pointer bg-surface-500 dark:bg-surface-800">
      <span class="pr-4 font-medium text-white">{{ userStore.rawUsrData !== null ? userStore.rawUsrData.basicInformation["basic-given-name"]:"Friend" }}</span>
    </div>
  </div>
  <div v-if="props.type === 'home'" class="fixed top-0 z-10 flex items-center justify-between w-full px-4 py-3">
    <div class="flex items-center gap-2">
      <Button severity="secondary" class="!p-1" text rounded @click="sidebarVisible = true">
        <IconMenu2 class="text-surface-500" stroke="2" size="30" />
      </Button>
      <Button severity="secondary" class="!p-1" text rounded @click="settings.app.theme === 'dark' ? (settings.app.theme = 'light') : (settings.app.theme = 'dark')">
        <IconMoon v-if="settings.app.theme === 'dark'" class="text-surface-500" stroke="2" size="30" />
        <IconSun v-else class="text-surface-500" stroke="2" size="30" />
      </Button>
    </div>
  </div>
  <!-- sidebar -->
  <Sidebar v-model:visible="sidebarVisible" header="Sidebar" class="dark:border-0">
    <template #container="{ closeCallback }">
      <div class="h-full">
        <div class="relative p-4 bg-primary-600">
          <div class="flex items-center gap-3">
            <div class="p-1 border rounded-full border-primary-600 size-14">

            </div>
            <p class="text-xl font-semibold text-white"> {{ userStore.rawUsrData !== null ? userStore.rawUsrData.basicInformation["basic-given-name"]: "Friend" }} {{ userStore.rawUsrData !== null ? userStore.rawUsrData.basicInformation["basic-last-name"]: "User" }}</p>
          </div>
          <button class="absolute right-0 px-3 py-2 -translate-y-1/2 rounded-l-full bg-primary-500 top-1/2" @click="closeCallback">
            <IconX stroke="2" size="24" color="white" />
          </button>
        </div>
        <div class="h-[calc(100svh-88px)] overflow-auto">
          <div class="py-2 border-b-2 border-surface-200 dark:border-surface-700">
            <router-link
              v-for="(item, index) of navItems"
              :key="index"
              :to="item.to"
              class="flex items-center justify-between px-4 py-2 cursor-pointer select-none hover:bg-surface-100 dark:hover:bg-surface-700"
            >
              <div class="flex items-center gap-2">
                <component :is="item.icon" :class="[item.color, 'flex-shrink-0']" stroke="2" size="30" />
                <p class="text-lg font-semibold line-clamp-1">{{ item.title }}</p>
              </div>
              <IconChevronRight class="text-surface-600" stroke="1.5" size="24" />
            </router-link>
          </div>
          <div>
            <div class="flex items-center justify-between px-4 py-2 cursor-pointer select-none hover:bg-surface-100 dark:hover:bg-surface-700">
              <div class="flex items-center gap-2">
                <IconRefresh class="flex-shrink-0 text-orange-600" stroke="2" size="30" />
                <p class="text-lg font-semibold line-clamp-1">Connect to MARCo</p>
              </div>
            </div>
            <div class="flex items-center justify-between px-4 py-2 cursor-pointer select-none hover:bg-surface-100 dark:hover:bg-surface-700">
              <div class="flex items-center gap-2">
                <IconLogout class="flex-shrink-0 text-red-600" stroke="2" size="30" />
                <p class="text-lg font-semibold line-clamp-1" @click="saveAndQuit">Save and Quit</p>
              </div>
            </div>
          </div>
        </div>
      </div>
    </template>
  </Sidebar>
  <!-- end of sidebar -->
  <div class="mb-[64px]" />
</template>

<script setup lang="ts">
import useSettingsStore from "@/store/settings";
import {
  IconBrandAppgallery,
  IconCalendarWeek,
  IconChevronRight,
  IconListDetails,
  IconLogout,
  IconMenu2,
  IconMoon,
  IconNotebook,
  IconPhone,
  IconPlayerPlay,
  IconRefresh,
  IconSettings,
  IconSun,
  IconX,
} from "@tabler/icons-vue";
import Button from "primevue/button";
import Sidebar from "primevue/sidebar";
import { ref } from "vue";
import useUserStore from "@/store/user";

const userStore = useUserStore();

const sidebarVisible = ref(false);
const settings = useSettingsStore();
const props = defineProps<{
  type?: "home" | "internal";
}>();
const navItems = ref([
  {
    title: "Customize MARCo",
    icon: IconPhone,
    color: "text-orange-600",
    to: "/",
  },
  {
    title: "Media Player",
    icon: IconPlayerPlay,
    color: "text-green-600",
    to: "/media-player",
  },
  {
    title: "My Journal",
    icon: IconNotebook,
    color: "text-cyan-600",
    to: "/journal",
  },
  {
    title: "Store",
    icon: IconBrandAppgallery,
    color: "text-violet-600",
    to: "/store",
  },
  {
    title: "Activities & Goals",
    icon: IconCalendarWeek,
    color: "text-rose-600",
    to: "/activity",
  },
  {
    title: "Wishlist",
    icon: IconListDetails,
    color: "text-purple-600",
    to: "/wishlist",
  },
  {
    title: "Settings",
    icon: IconSettings,
    color: "text-teal-600",
    to: "/settings",
  },
]);

const saveAndQuit = () => {
  window.location.reload();
};
</script>

<style scoped></style>
