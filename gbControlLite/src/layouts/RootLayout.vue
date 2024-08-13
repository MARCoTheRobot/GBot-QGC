<template>
<Toast />	
<ConfirmDialog />
<div class="flex flex-row w-full h-full overflow-hidden">
	<Menu :model="menuItems" class="w-1/6 bg-gray-800"/>
	
	<div class="w-5/6 bg-slate-900 flex-col">
		<AppHeader type="internal" />
		<div class="p-4 h-full overflow-y-auto overflow-x-hidden flex-initial">
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
const settings = useSettingsStore();
import { ref } from "vue";
import "swiper/css";
import { useToast } from "primevue/usetoast";
import Toast from "primevue/toast";
import ConfirmDialog from "primevue/confirmdialog";
import Menu from "primevue/menu";
import AppHeader from "@/layouts/partials/AppHeader.vue";
const toast = useToast();
toast.add({ severity: "success", summary: "Success Message", detail: `${settings.user}` });
const menuItems = ref([
	{ label: "Dashboard", icon: "pi pi-fw pi-home", to: "/" },
	{ label: "Users", icon: "pi pi-fw pi-users", to: "/users" },
	{ label: "Settings", icon: "pi pi-fw pi-cog", to: "/settings" },
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
