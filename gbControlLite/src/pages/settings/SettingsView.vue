<template>
  <AppHeader type="internal" />
  <div class="relative flex flex-col h-screen px-4 py-6 dark:bg-surface-900">
    <div class="flex-1">
      <Button severity="secondary" class="!p-0 !absolute top-7 left-4" text rounded @click="$router.back()">
        <IconChevronLeft class="text-surface-500" stroke="2" size="30" />
      </Button>
      <h1 class="text-3xl font-semibold text-center">Settings</h1>
			<div class="gap-4">
				<!-- <RouterLink v-for="(route, r) in settingsRoutes" :key="`settings-route-${r}`" v-ripple :to="{ name: route.name }" 
					class="flex items-center justify-between p-3 my-2 text-lg rounded-md cursor-pointer hover:bg-surface-400 bg-surface-700">
					<span class="font-semibold">{{ route.title }}</span>
					<IconChevronRight stroke="2" size="30" />
				</RouterLink> -->
        <p>Drive Strength:</p>
        <InputNumber v-model="robot.motorDriveSensitivity" mode="decimal" :min="0" :max="1" />
        <p>Turn Strength:</p>
        <InputNumber v-model="robot.motorTurnSensitivity" mode="decimal" :min="0" :max="1" />

        <Divider />
        <p>Voice Profile</p>
        <Dropdown v-model="robot.voiceProfile" :options="voiceProfiles" optionLabel="name" optionValue="value" placeholder="Select a Voice Profile" @change="saveVoiceProfile"/>
        <p>Voice Gain:</p>
        <InputNumber v-model="robot.voiceGain" mode="decimal" :min="0" :max="3" @input="saveVoiceGain" />

        <Divider />
        <p>Voice commands come from:</p>
        <Dropdown v-model="robot.commandsFrom" :options="commandsFromOpts" placeholder="Select a source" @input="saveAppOrRobot" />

				
			</div>
			<Button class="w-full mt-4" label="Logout" icon="pi pi-sign-out" icon-pos="right" @click="logout" />
		</div>

    
  </div>
</template>

<script setup lang="ts">
import { IconChevronLeft, IconChevronRight, IconSettings } from "@tabler/icons-vue";
import Button from "primevue/button";
import { RouterLink, useRouter } from "vue-router";
import AppHeader from "@/layouts/partials/AppHeader.vue";
import { useToast } from "primevue/usetoast";
import { ref } from "vue";
import InputNumber from "primevue/inputnumber";
import useRobotStore from "@/store/robot";
import Divider from "primevue/divider";
import Dropdown from "primevue/dropdown";

const robot = useRobotStore();

const router = useRouter();
const toast = useToast();

const settingsRoutes = ref([
	  { name: "settings", title: "Profile" },
  { name: "settings", title: "Preferences" },
  { name: "settings", title: "MARCo Settings" },
  { name: "settings", title: "Linked Accounts" },
  { name: "settings", title: "About MARCo" },
]);

const voiceProfiles = ref([
  { name: "American Male 1", value: "en-US-Standard-D" },
  {name: "American Male 2", value: "en-US-Standard-B" },
  { name: "American Male 3", value: "en-US-Standard-A" },
  { name: "American Male 4", value: "en-US-Standard-I" },
  { name: "American Male 5", value: "en-US-Standard-J" },
  { name: "American Female 1", value: "en-US-Standard-C" },
  { name: "American Female 2", value: "en-US-Standard-E" },
  { name: "American Female 3", value: "en-US-Standard-F" },
  { name: "American Female 4", value: "en-US-Standard-G" },
  { name: "American Female 4", value: "en-US-Standard-H" },
  { name: "Australian Male 1", value: "en-AU-Standard-B" },
  { name: "Australian Female 1", value: "en-AU-Standard-A" },
  
]);

const commandsFromOpts = [
  "app",
  "robot"
]

const saveVoiceProfile = (voiceProfile) => {
  console.log("Saving voice profile", voiceProfile.value);
  localStorage.setItem("voiceProfile", voiceProfile.value);
}

const saveVoiceGain = (voiceGain) => {
  console.log("Saving voice gain", voiceGain);
  localStorage.setItem("voiceGain", voiceGain.value);
}

const saveAppOrRobot = (source) => {
  console.log("Saving voice source", source);
  localStorage.setItem("commandsFrom", source.value);
}

</script>

<style scoped></style>
