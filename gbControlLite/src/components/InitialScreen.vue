<template>
  <div
    :class="
      cn(
        'relative h-screen flex overflow-hidden bg-gradient-to-t transition-all ease-in-out duration-150',
        { 'from-[#0ACFFE] to-[#495AFF]': currentPage == 0 },
        { 'from-[#6A11CB] to-[#2575FC]': currentPage == 1 },
        { 'from-[#00C6FB] to-[#005BEA]': currentPage == 2 },
        { 'from-[#F9F047] to-[#09A03A]': currentPage == 3 },
      )
    "
  >
    <div class="absolute top-0 left-0 flex items-center justify-center w-full gap-2 p-4 xs:p-8 z-4">
      <div :class="cn('flex-1 h-2 bg-white bg-opacity-40', { 'bg-opacity-100': currentPage == 0 })" />
      <div :class="cn('flex-1 h-2 bg-white bg-opacity-40', { 'bg-opacity-100': currentPage == 1 })" />
      <div :class="cn('flex-1 h-2 bg-white bg-opacity-40', { 'bg-opacity-100': currentPage == 2 })" />
      <div :class="cn('flex-1 h-2 bg-white bg-opacity-40', { 'bg-opacity-100': currentPage == 3 })" />
    </div>
    <Transition name="slide">
      <template v-if="currentPage == 0">
        <div class="relative flex flex-col justify-between flex-shrink-0 w-full h-full max-w-md p-4 xs:p-8">
          <div class="relative pt-12 text-white z-3">
            <h2 class="mb-4 text-4xl font-bold">{{ t(`initialScreen[${currentPage}].title`) }}</h2>
            <p class="mb-8 text-lg text-surface-6">{{ t(`initialScreen[${currentPage}].description`) }}</p>
          </div>
          <div class="flex flex-col space-y-6">
            <Dropdown v-model="lang" panel-class="!rounded-2xl !my-2" :options="languages" class="!rounded-full !px-3 !py-1 z-3" option-label="name" aria-labelledby="basic" />
            <button class="py-4 font-semibold text-white uppercase border-2 border-white rounded-full z-3 bg-black/70" @click="currentPage++">{{ t(`util.getStarted`).toLocaleUpperCase() }}</button>
          </div>
          <img class="absolute bottom-0 left-0 w-full z-1" src="@/assets/images/img1.png" alt="image">
        </div>
      </template>
      <template v-else-if="currentPage == 1">
        <div class="relative flex flex-col justify-between flex-shrink-0 w-full h-full max-w-md p-4 xs:p-8">
          <div class="relative pt-12 text-white z-3">
            <h2 class="mb-4 text-4xl font-bold">{{ t(`initialScreen[${currentPage}].title`) }}</h2>
            <p class="mb-8 text-lg text-surface-6">{{ t(`initialScreen[${currentPage}].description`) }}</p>
            <div class="relative flex border border-white rounded-full bg-white/15">
              <div
                :class="
                  cn(
                    'absolute transition-all ease-in-out duration-150 top-0 w-1/2 h-full bg-white rounded-full z-1',
                    { 'left-0': type == 'Robot' },
                    { 'left-full -translate-x-full': type == 'App' },
                  )
                "
              />
              <button :class="cn('w-1/2 py-3 rounded-full z-2 font-semibold', { 'text-black': type == 'Robot' })" @click="type = 'Robot'">{{ t(`util.robot`).toLocaleUpperCase() }}</button>
              <button :class="cn('w-1/2 py-3 rounded-full z-2 font-semibold', { 'text-black': type == 'App' })" @click="type = 'App'">{{ t(`util.app`).toLocaleUpperCase() }}</button>
            </div>
          </div>
          <div class="absolute bottom-0 left-0 flex z-1">
            <img
              :class="cn('w-1/2 transition-all ease-in-out duration-150 opacity-70', { 'scale-150 opacity-100 translate-x-10': type == 'Robot' })"
              src="@/assets/images/img2.png"
              alt="image"
            >
            <img
              :class="cn('w-1/2 transition-all ease-in-out duration-150 opacity-70', { 'scale-150 opacity-100 -translate-x-10': type == 'App' })"
              src="@/assets/images/img5.png"
              alt="image"
            >
          </div>
          <button class="py-4 font-semibold text-white uppercase border-2 border-white rounded-full z-3 bg-black/70" @click="stepUpPage2">{{ t(`util.continue`).toLocaleUpperCase() }}</button>
        </div>
      </template>
      <template v-else-if="currentPage == 2">
        <div class="relative flex flex-col justify-between flex-shrink-0 w-full h-full max-w-md p-4 xs:p-8">
          <div class="relative pt-12 text-white z-3">
            <h2 class="mb-4 text-4xl font-bold">{{ t(`initialScreen[${currentPage}].title`) }}</h2>
            <p class="mb-8 text-lg text-surface-6">{{ t(`initialScreen[${currentPage}].description`) }}</p>
          </div>
          <div class="flex flex-col pt-4 space-y-4 z-3">
            <button class="py-4 font-semibold text-white uppercase border-2 border-white rounded-full bg-black/70" @click="currentPage++">Troubleshoot connection</button>
            <button class="py-4 font-semibold text-white uppercase border-2 border-white rounded-full bg-black/70" @click="confirmSkip">{{ t(`util.skip`).toLocaleUpperCase() }}</button>
          </div>
          <img class="absolute bottom-0 left-0 w-full z-1" src="@/assets/images/img3.png" alt="image">
        </div>
      </template>
      <template v-else-if="currentPage == 3">
        <div class="relative flex flex-col justify-between flex-shrink-0 w-full h-full max-w-md p-4 xs:p-8">
          <div class="relative pt-12 text-white z-3">
            <h2 class="mb-4 text-4xl font-bold">{{ t(`initialScreen[${currentPage}].title`) }}</h2>
            <p class="mb-8 text-lg text-surface-6">{{ t(`initialScreen[${currentPage}].description`) }}</p>
          </div>
          <button class="py-4 font-semibold text-white uppercase border-2 border-white rounded-full z-3 bg-black/70" @click="goHome">{{ t(`util.done`).toLocaleUpperCase() }}</button>
          <img class="absolute bottom-0 left-0 w-full z-1" src="@/assets/images/img4.png" alt="image">
        </div>
      </template>
    </Transition>

    <Dialog v-model:visible="openNetworkDialog" :style="{ width: '25rem' }">
      <template #container="{ closeCallback }">
        <NetworkSetup :open="currentPage === 2" />
        </template>
        </Dialog>
  </div>
</template>

<script setup lang="ts">
import Dropdown from "primevue/dropdown";
import { ref, watch, computed } from "vue";
import useSettingsStore from "@/store/settings";
import { useLang } from "@/hooks/useLang";
import { I18nLangType } from "@/types/lang.type";
import { cn } from "@/lib/utils";
import NetworkSetup from "./network-setup/NetworkSetup.vue";
import { useRouter } from "vue-router";
import { storeToRefs } from "pinia";
import useUserStore from "@/store/user";
import Dialog from "primevue/dialog";
const userStore = useUserStore();
const {isConnected} = storeToRefs(userStore);
import {useConfirm} from "primevue/useconfirm";
const confirm = useConfirm();

const { t, locale } = useLang();
const settings = useSettingsStore();
const currentPage = ref(0);
const router = useRouter();
const languages = ref([
  { name: "English", val: "en" },
  { name: "Filipino", val: "fili" },
]);
const lang = ref(languages.value[0]);
const type = ref("Robot");
userStore.initializeCommlink();

watch(isConnected, (newVal) =>{
  // If a MARCo is connected, move to the last screen and then go home
  if(newVal){
    setTimeout(() =>{
      currentPage.value = 3;
      setTimeout(() =>{
        goHome();
      }, 2500);
    },1500)
  }
})

const goHome = () => {
  settings.user.firstTime = false;
  router.push({ name: "login" });

}



const openNetworkDialog = computed(()=>{
  return currentPage.value === 2
})

const confirmSkip = () => {
  confirm.require({
    message: t(`initialScreen[${currentPage.value}].skipMessage`),
    header: `${t(`util.skip`)}?`,
    acceptLabel: t(`util.yes`),
    rejectLabel: t(`util.no`),
    acceptClass: "p-button-danger rounded-full",
    rejectClass: "p-button-secondary p-button-outlined rounded-full",
    accept: () => {
      currentPage.value++;
      setTimeout(() => {
        settings.user.firstTime = false;
        router.push({ name: "login" });
      }, 1500);
    },
  });
  
};

const stepUpPage2 = () => {
  if(type.value === "Robot"){
    currentPage.value++
  }
  else{
    currentPage.value += 2;
    setTimeout(() => {
      settings.user.firstTime = false;
      router.push({ name: "login" });
    }, 1500);
  }
  
};

watch(lang, (val) => {
  settings.user.lang = val.val as I18nLangType;
  locale.value = val.val as I18nLangType;
});
</script>

<style scoped>
.slide-enter-active,
.slide-leave-active {
  transition: all 0.15s ease-out;
}

.slide-enter-from {
  opacity: 0;
  transform: translateX(30px);
}

.slide-leave-to {
  opacity: 0;
  transform: translateX(-30px);
}
</style>
