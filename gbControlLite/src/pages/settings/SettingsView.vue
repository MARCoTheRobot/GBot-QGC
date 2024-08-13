<template>
  <AppHeader type="internal" />
  <div class="relative flex flex-col h-screen px-4 py-6 dark:bg-slate-900">
    <div class="flex-1">
      <Button severity="secondary" class="!p-0 !absolute top-7 left-4" text rounded @click="$router.back()">
        <IconChevronLeft class="text-surface-500" stroke="2" size="30" />
      </Button>
      <h1 class="text-3xl font-semibold text-center">Settings</h1>
      <IconSettings stroke="2" size="100" class="mx-auto my-8 text-primary-600" />

			<div class="gap-4">
				<RouterLink v-for="(route, r) in settingsRoutes" :key="`settings-route-${r}`" v-ripple :to="{ name: route.name }" 
					class="flex items-center justify-between p-3 my-2 text-lg rounded-md cursor-pointer hover:bg-slate-400 bg-slate-700">
					<span class="font-semibold">{{ route.title }}</span>
					<IconChevronRight stroke="2" size="30" />
				</RouterLink>
				
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
import { useLogoutUser } from "@/hooks/firebase";
import { useToast } from "primevue/usetoast";
import { ref } from "vue";

const router = useRouter();
const toast = useToast();

const settingsRoutes = ref([
	  { name: "setting-profile", title: "Profile" },
  { name: "setting-preference", title: "Preferences" },
  { name: "setting-marco", title: "MARCo Settings" },
  { name: "setting-linked-account", title: "Linked Accounts" },
  { name: "setting-about", title: "About MARCo" },
]);

const logout = () =>{
  useLogoutUser().then(() => {
    toast.add({ severity: "success", summary: "Success", detail: "You have been logged out." });
    router.push({ name: "login" });
  }).catch((error) => {
    toast.add({ severity: "error", summary: "Error", detail: error.message });
  });
}

</script>

<style scoped></style>
