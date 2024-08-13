<template>

  <!--State 1 - 'list' - list all available wifi networks and give the option to create a new one-->
  <div v-if="networkState === 'list'">
    <p class="mb-4 text-center">FOR SECURITY - PLEASE RE-ENTER NETWORK INFORMATION TO BE SENT TO MARCo</p>
    <div class="mb-4 divide-y-2 divide-surface-500">
      <div class="flex items-center justify-between pb-3">
        <h3 class="flex items-center gap-3 text-lg font-bold text-white"><IconWifi stroke="2" size="24" /> <span>Networks</span></h3>
        <Button class="flex items-center gap-2 px-4 py-1 text-sm font-semibold text-white uppercase border border-white border-solid rounded-full" label="Add network" rounded outlined @click="networkState = 'form'" />
      </div>
      <div v-if="hardware.wifiNetworks.length > 0" class="h-full py-3 overflow-auto max-h-52">
        <div v-for="(item, index) in hardware.wifiNetworks" :key="index" v-ripple class="flex items-center gap-4 py-4 text-lg cursor-pointer select-none p-ripple" @click="hardware.selectedSSID = item?.SSID; networkState = 'form';">
          <IconWifi v-if="item?.level > -50" size="32" stroke="2" />
          <IconWifi2 v-else-if="item?.level > -60" size="32" stroke="2" />
          <IconWifi1 v-else-if="item?.level > -70" size="32" stroke="2" />
          <IconWifi0 v-else size="32" stroke="2" />
          {{ item?.SSID }}
        </div>
      </div>
      <div v-else class="h-full py-3 overflow-auto max-h-52">
        <div class="flex items-center gap-4 py-4 text-lg cursor-pointer select-none">
          <Skeleton shape="circle" size="32px" />
          <Skeleton width="80%" height="1rem" />
        </div>
        <div class="flex items-center gap-4 py-4 text-lg cursor-pointer select-none">
          <Skeleton shape="circle" size="32px" />
          <Skeleton width="80%" height="1rem" />
        </div>
        <div class="flex items-center gap-4 py-4 text-lg cursor-pointer select-none">
          <Skeleton shape="circle" size="32px" />
          <Skeleton width="80%" height="1rem" />
        </div>
      </div>
    </div>
    <!-- <p>{{ hardware.wifiNetworks }}</p> -->
    <button class="px-5 py-1 text-sm font-semibold uppercase border border-white border-solid rounded-full" @click="hardware.hardwareStep--">back</button>
  </div>

  <!--State 2 - 'form' - Form to add a new wifi network to MARCo -->
  <div v-else-if="networkState === 'form'">
    <div class="flex flex-col items-center justify-between w-full pb-3">
      <IconWifi size="48" />
      <h3 class="text-3xl font-bold text-white">Add Network</h3>
      </div>
    <form class="mb-4">
      <div class="mb-4">
        <label for="ssid" class="block mb-2 text-white">SSID</label>
        <InputText id="ssid" v-model="hardware.selectedSSID" class="w-full border-white rounded-full outline-1 dark bg-none" />
      </div>
      <div class="mb-4">
        <label for="password" class="block mb-2 text-white">Password</label>
        <Password id="password" v-model="hardware.selectedSSIDPassword" class="w-full" />
      </div>
      <div class="flex flex-row justify-between w-full">
      <Button class="px-4 py-2 text-sm font-semibold text-white uppercase outline-white" outlined rounded label="Back" @click="networkState = 'list'" />

      <Button class="px-4 py-2 text-sm font-semibold text-white uppercase outline-white" outlined rounded label="Add" @click="addNetwork" />
    </div>
    </form>
    </div>

    <!--State 3 - 'pending' - is pending so long as wifi is sent to the device -->

    <div v-else-if="networkState === 'pending'">
      <div class="flex flex-col items-center gap-4">
        <ProgressSpinner style="width: 50px; height: 50px" stroke-width="8" animation-duration=".2s" />
        <p class="text-lg">Sending network to MARCo...</p>
        <!-- <p class="text-md">{{hardware.scanMessage}}</p> -->
      </div>
      <div class="flex flex-row justify-between w-full">
      <Button class="px-4 py-2 text-sm font-semibold text-white uppercase outline-white" outlined rounded label="Back" @click="networkState = 'list'" />

      <Button class="px-4 py-2 text-sm font-semibold text-white uppercase outline-white" outlined rounded label="Add" @click="addNetwork" />
    </div>

  </div>
</template>

<script setup lang="ts">
import { ref, watch, defineEmits } from "vue";
import { wpa_conf_data } from "@/data/wpa-conf";
import WPA_CONF from "@/lib/wpa";
import { IconWifi, IconWifi0, IconWifi1, IconWifi2 } from "@tabler/icons-vue";
import { reactive } from "vue";
import { useHardwareStore } from "@/store/hardware";
import Skeleton from "primevue/skeleton";
import Button from "primevue/button";
import InputText from "primevue/inputtext";
import ProgressSpinner from "primevue/progressspinner";
import { useToast } from "primevue/usetoast";

import Password from "primevue/password";

const toast = useToast();

const networkState = ref("list");

const hardware = useHardwareStore();

const wpaConf = reactive(WPA_CONF.parse(WPA_CONF.clean(wpa_conf_data)));

hardware.getWifiNetworks();

const emits = defineEmits<{
  (e: "onBack"): void;
}>();

const goBack = () => {
  emits("onBack");
};

const {
  isPending: isSendWifiPending,
  isError: isSendWifiError,
  error: sendWifiError,
  isSuccess: sendWifiSuccess,
  mutate: sendNetwork,
} = hardware.useSendDeviceNetwork();

watch(isSendWifiPending, (val) => {
  if (val) {
    networkState.value = "pending";
  }
});
const addNetwork = async () => {
  sendNetwork(true, {
    onSettled: () => {
      networkState.value = "list";
    },
    onSuccess: () => {
      networkState.value = "pending";
    },
    onError: () => {
      networkState.value = "form";
      toast.add({
        severity: "error",
        summary: "Error",
        detail: "Failed to send network to MARCo",
      });
    }
  })
};


</script>

<style scoped></style>
