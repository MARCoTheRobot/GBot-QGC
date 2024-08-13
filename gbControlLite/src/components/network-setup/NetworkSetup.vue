<template>
  <div>
    
        <div class="px-5 py-4 text-white bg-surface-800/60 backdrop-blur-lg rounded-2xl">
          <ScanningBar1 v-if="hardwareStore.hardwareStep === 0" @on-troubleshoot="handleTroubleshoot" @on-scan-complete="handleNextStep" />
          <ScanningBar2 v-else-if="hardwareStore.hardwareStep === 1" />
          <ScanningBar3 v-else-if="hardwareStore.hardwareStep === 2" />

          <TroubleshootBar1 v-else-if="hardwareStore.hardwareStep === 3" @on-no="handleNextStep" @on-yes="handleNextStep" />
          <TroubleshootBar2 v-else-if="hardwareStore.hardwareStep === 4" @on-no="handleNextStep" @on-yes="handleNextStep" />
          <TroubleshootBar3 v-else-if="hardwareStore.hardwareStep === 5" @on-no="handleNextStep" @on-yes="handleNextStep" />
          <TroubleshootBar4 v-else-if="hardwareStore.hardwareStep === 6" @on-troubleshoot="handleNextStep" />
          <TroubleshootBar5 v-else-if="hardwareStore.hardwareStep === 7" @on-troubleshoot="handleNextStep" />
          <TroubleshootBar6 v-else-if="hardwareStore.hardwareStep === 8" @on-yes="handleNextStep" />
          <TroubleshootBar7 v-else-if="hardwareStore.hardwareStep === 9" />

          <EmptyComponent v-if="hardwareStore.hardwareStep === 10" :msg="t(`networkSetup.connectedMessage`)" :lottie="checkbox1" />

        </div>
  </div>
</template>

<script setup lang="ts">
import Dialog from "primevue/dialog";
import { ref, watch, onMounted } from "vue";
import { useHardwareStore } from "@/store/hardware";
import ScanningBar1 from "./scanning/ScanningBar1.vue";
import ScanningBar2 from "./scanning/ScanningBar2.vue";
import ScanningBar3 from "./scanning/ScanningBar3.vue";
import TroubleshootBar1 from "./troubleshoot/TroubleshootBar1.vue";
import TroubleshootBar2 from "./troubleshoot/TroubleshootBar2.vue";
import TroubleshootBar3 from "./troubleshoot/TroubleshootBar3.vue";
import TroubleshootBar4 from "./troubleshoot/TroubleshootBar4.vue";
import TroubleshootBar5 from "./troubleshoot/TroubleshootBar5.vue";
import TroubleshootBar6 from "./troubleshoot/TroubleshootBar6.vue";
import TroubleshootBar7 from "./troubleshoot/TroubleshootBar7.vue";
import EmptyComponent from "@/components/utility/EmptyComponent.vue";
import checkbox1 from "@/assets/lotties/checkmark-1.json"
import { useLang } from "@/hooks/useLang";
import { storeToRefs } from "pinia";
import useUserStore from "@/store/user";

const { t } = useLang();

const hardwareStore = useHardwareStore();
const userStore = useUserStore();

const { isConnected } = storeToRefs(userStore);

const props = defineProps<{
  open: boolean;
}>();

const networkSetup = ref(false);
networkSetup.value = props.open;

watch(
  () => props.open,
  (val) => {
    networkSetup.value = val;
  },
);

watch(isConnected, (newVal) =>{
  if(newVal){
    hardwareStore.hardwareStep = 10;
  }
})

const step = ref(hardwareStore.hardwareStep);

// onMounted(() => {
//   // hardwareStore.hardwareStep = step.value;
//   // Start the scan for MARCos and update accordingly
  
// });

hardwareStore.launchBLE(5).then((status) => {
    console.log("BLE launched and scanning:");
    hardwareStore.connectToDevice();
  });

watch(hardwareStore.deviceConnected, (val) => {
  if (val) {
    hardwareStore.getDeviceNetworkStatus();
  }
});

const handleTroubleshoot = () => {
  hardwareStore.hardwareStep = 3;
};

const handleNextStep = () => {
  hardwareStore.hardwareStep += 1;
};

</script>

<style scoped>
.slide-enter-active,
.slide-leave-active {
  transition: all 0.15s ease-out;
}

.slide-enter-from {
  position: absolute;
  opacity: 0;
  transform: translateX(30px);
}

.slide-leave-to {
  position: absolute;
  opacity: 0;
  transform: translateX(-30px);
}
</style>
