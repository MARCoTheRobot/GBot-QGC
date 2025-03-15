<template>
<Toast />	
<ConfirmDialog />
<TranscriptDialog mode="live" />
<div class="flex flex-row w-full h-full overflow-hidden">
	
	<Menu :model="menuItems" class="w-1/6 bg-gray-800">
		<template #start>	
			<Image :src="logoImg" alt="logo" />
		</template>
		<template #end>
			<div class="flex flex-col items-center">
				<!-- <Dropdown 
					:options="robot.micFormatOptions" 
					v-model="robot.micFormatSelector" 
					optionLabel="label"
					optionValue="value"
					placeholder="Select Mic Format" 
					class="w-full"
				/>
				<Dropdown 
					:options="robot.micBufferOptions" 
					v-model="robot.micBufferSelection" 
					optionLabel="label"
					optionValue="value"
					placeholder="Select Mic Buffer" 
					class="w-full"
				/> -->
			</div>
			</template>
	</Menu>
	
	<div class="flex-col w-5/6 bg-surface-900">
		<AppHeader type="internal" />
		<div class="flex-initial h-full overflow-x-hidden overflow-y-auto">
			<router-view v-slot="{ Component }">
		<transition name="slide">
			<component :is="Component" class="w-full" />
		</transition>
	</router-view>
		</div>
	
	</div>
</div>
</template>

<script setup lang="ts">
/**
 * In this file first we load the user information from the api
 * if we don't get any then we will show the initial screen we store some info in the local storage
 */
import useSettingsStore from "@/store/settings";
import Image from "primevue/image";
import logoImg from "@/assets/logo.png";
const settings = useSettingsStore();
import { ref } from "vue";
import "swiper/css";
import { useToast } from "primevue/usetoast";
import Toast from "primevue/toast";
import ConfirmDialog from "primevue/confirmdialog";
import Menu from "primevue/menu";
import AppHeader from "@/layouts/partials/AppHeader.vue";
import TranscriptDialog from "@/components/TranscriptDialog.vue";
import { useRouter } from "vue-router";
import Dropdown from "primevue/dropdown";
import useRobotStore from "@/store/robot";
const robot = useRobotStore();

const router = useRouter();
const toast = useToast();
toast.add({ severity: "success", summary: "Success Message", detail: `${settings.user}` });
const menuItems = ref([
	{ label: "Robot Mode", icon: "pi pi-fw pi-home", command: () => {
		router.push("/home");
	} },
	{ label: "Mission Planner", icon: "pi pi-fw pi-map", command: () => {
		router.push("/map");
	} },
	{ label: "Settings", icon: "pi pi-fw pi-cog", command: () => {
		router.push("/settings");
	} },
]);
</script>

<style scoped>
.slide-enter-active,
.slide-leave-active {
	transition: all 0.2s ease-out;
}

.slide-enter-to {
	position: absolute;
	right: 0;
}

.slide-enter-from {
	position: absolute;
	right: -100%;
}

.slide-leave-to {
	position: absolute;
	left: -100%;
}

.slide-leave-from {
	position: absolute;
	left: 0;
}
</style>
