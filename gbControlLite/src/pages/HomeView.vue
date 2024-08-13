<template>
	<div class="flex flex-col gap-2 overflow-y-auto">
		<!--Video display-->
		<div class="bg-slate-800 rounded-3xl w-full h-1/2 overflow-hidden">
			<video class="w-full h-full flex-grow" autoplay muted loop>
				<source src="https://www.w3schools.com/html/mov_bbb.mp4" type="video/mp4" />
				Your browser does not support the video tag.
			</video>
		</div>
		<div class="flex-initial">
		<h3>Hello!</h3>
		<p>How are you feeling today?</p>
	</div>
	</div>
	
</template>

<script setup lang="ts">
import { ref, watch, computed, onMounted } from "vue";
import { useRouter } from "vue-router";
import AppHeader from "@/layouts/partials/AppHeader.vue";
import { useGetUserScreenings, useGetActiveScreening } from "@/hooks/api/screenings.api";
import robotRemoteImg from "@/assets/onboarding/MARCo-With-Couch-Isolated 1-1x.webp";
import newRobotImg from "@/assets/activity/act-cat-2_clear.png";
import appRemoteImg from "@/assets/activity/act-cat-1_clear.png";
import useRetentionStore from "@/store/retention";
import { useLang } from "@/hooks/useLang";
// import { I18nLangType } from "@/types/lang.type";
// import { cn } from "@/libs/utils";
const { t } = useLang();
import Toast from "primevue/toast";
import { useToast } from "primevue/usetoast";
import Card from "primevue/card";
import BlockUI from "primevue/blockui";
import useUserStore from "@/store/user";
import testSVG from "@/assets/images/test_svgrepo.png";
import Button from "primevue/button";
import MarcoAvatar from '@/components/marco-avatar.vue';
import { storeToRefs } from "pinia";
const toast = useToast();
const router = useRouter();



onMounted(() =>{
	// Once the home screen mounts, ping the robot
	userStore.pingBot();
})



</script>

<style>
.box {
	--border-angle: 0turn;
	--main-bg: conic-gradient(from var(--border-angle), rgb(17, 41, 51), rgb(17, 34, 34) 5%, #112 60%, rgb(17, 49, 51) 95%);
	border: solid 5px transparent;
	border-radius: 2em;
	--gradient-border: conic-gradient(from var(--border-angle), transparent 25%, #08f, rgb(199, 212, 194) 99%, transparent);
	background:
		var(--main-bg) padding-box,
		var(--gradient-border) border-box,
		var(--main-bg) border-box;
	background-position: center center;
	-webkit-animation: bg-spin 3s linear infinite;
	animation: bg-spin 3s linear infinite;
}

@-webkit-keyframes bg-spin {
	to {
		--border-angle: 1turn;
	}
}

@keyframes bg-spin {
	to {
		--border-angle: 1turn;
	}
}

@property --border-angle {
	syntax: "<angle>";
	inherits: true;
	initial-value: 0turn;
}
</style>
