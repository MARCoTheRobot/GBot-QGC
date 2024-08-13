<template>
	<AppHeader type="internal" />
	<div v-if="!userStore.initialized" class="relative flex-col h-full overflow-y-scroll dark:bg-slate-900"
		style="height: 100vh">
		<!--Header image based on the current coaching or seasonal information-->
		<div class="mb-[-50px] relative">
			<img src="@/assets/onboarding/onboarding-vid-0.webp" alt="Header Image"
				class="object-cover w-full h-full">
			<div class="absolute top-0 left-0 w-full h-full bg-gradient-to-t from-slate-900 to-white/0" />
		</div>
		<!--Header content-->
		<div class="flex-col w-full mx-4">
			<!--Header card-->

			<!--Header quick icons if needed-->
		</div>

		<!--"Remote control section"-->
		<div class="flex-col w-full gap-2 px-4 slide-in-bottom">
			<!--Intelligent quick option-->
			<div v-ripple
				class="box w-full relative bg-gray-800 rounded-[32px] shadow border-4 px-4 py-2 overflow-hidden"
				@click="homeScreenOptions[1 * userStore.isConnected].action">
				<div class="text-white text-[32px] font-normal">{{ homeScreenOptions[1 * userStore.isConnected].title }}
				</div>
				<div class="text-sm font-normal text-white">{{ homeScreenOptions[1 * userStore.isConnected].description
					}}</div>
				<img class="w-[134px] h-[142px] left-[247px] top-[-21px] absolute"
					:src="homeScreenOptions[1 * userStore.isConnected].image">
			</div>
			<!--Other options for control-->
			<p class="my-2">Other options:</p>
			<div class="grid grid-cols-2 gap-4 mb-6">
				<!--Second choice option-->
				<div v-ripple
					class="relative col-span-1 overflow-hidden cursor-pointer select-none rounded-xl aspect-square bg-primary-500"
					@click="homeScreenOptions[1 * !userStore.isConnected].action">
					<h3 class="relative m-4 text-3xl font-bold text-white z-1">{{ homeScreenOptions[1 *
						!userStore.isConnected].title }}</h3>
					<p class="mx-4">{{ homeScreenOptions[1 * !userStore.isConnected].description }}</p>
					<img :src="homeScreenOptions[1 * !userStore.isConnected].image" alt="marco"
						class="absolute w-full rounded-md -bottom-10 -right-10 max-w-60">
				</div>

				<!--Third choice option, always add new MARCo-->
				<div v-ripple
					class="relative col-span-1 overflow-hidden cursor-pointer select-none rounded-xl aspect-square bg-primary-500"
					@click="homeScreenOptions[2].action">
					<h3 class="relative m-4 text-3xl font-bold text-white z-1">{{ homeScreenOptions[2].title }}</h3>
					<p class="mx-4">{{ homeScreenOptions[2].description }}</p>

					<img :src="homeScreenOptions[2].image" alt="marco"
						class="absolute w-full rounded-md -bottom-10 -right-10 max-w-60">
				</div>
			</div>
		</div>
		<!--Coaching videos here-->
		<p class="mx-4 text-2xl font-bold text-white">Coaching Videos</p>
		<div v-if="retentionStore">
			<!--Active coaching video-->
			<Card v-ripple class="mx-3 my-4 border-white/25 outline" @click="
				userStore.mediaEmbedURL = retentionStore.onboardingLessonArray[retentionStore.weekNumber].videoLink;
			$router.push('/media-player');
			">
				<template #header>
					<img alt="user header"
						:src="`/images/onboarding/${retentionStore.onboardingLessonArray[retentionStore.weekNumber].headerImage}`">
				</template>
				<template #title>{{ retentionStore.onboardingLessonArray[retentionStore.weekNumber].title }}</template>
				<template #subtitle>{{ retentionStore.onboardingLessonArray[retentionStore.weekNumber].description
					}}</template>
				<template #footer />
			</Card>
			<!--Full list with locks-->
			<div class="box-content flex items-center w-full gap-2 pr-4 mb-6 overflow-scroll remove-scroll">
				<BlockUI v-for="(item, index) in retentionStore.onboardingLessonArray" :key="index"
					:blocked="index > retentionStore.weekNumber">
					<div v-ripple
						class="relative items-center justify-center w-40 h-40 overflow-hidden aspect-square rounded-xl bg-blue-500/50"
						@click="
							userStore.mediaEmbedURL = item.videoLink;
						$router.push('/media-player');
						">
						<i v-if="index > retentionStore.weekNumber"
							class="absolute text-6xl text-white align-middle top-8 left-8 pi pi-lock" />
						<img :src="`/images/onboarding/${item.headerImage}`" alt="user header"
							class="w-40 h-40 aspect-square">
					</div>
				</BlockUI>
			</div>
		</div>
		<div v-else>{{ t(`util.loading`).toLocaleUpperCase() }}...</div>

		<!--Custom Toasts-->

		<!--Active Screenings TODO-->
		<Toast position="bottom-center" group="headless-screening-todo">
			<template #container="{ message, closeCallback }">
				<div class="inline-flex items-start justify-start p-4 bg-blue-100 rounded-lg">
					<img :src="testSVG" alt="test" class="w-12 h-12">
					<div class="flex-col ml-4" @click="openActiveScreening">
						<p class="text-lg font-bold">Screening Reminder</p>
						<p class="text-sm">You have an active screening to complete.</p>
					</div>
					<Button label="X" class="p-button-primary p-button-rounded p-button-text" text
						@click="closeCallback" />

				</div>
			</template>
		</Toast>

		<!--Add new content below-->
	</div>
	<!-- <AppHeader type="home" /> -->
	<div v-if="!userStore.isConnected && userStore.initialized" class="relative w-screen h-screen">
		<MarcoAvatar />
	
	

		<!-- chat bubble -->
		<Toast position="top-center" group="headless-chat-messages">
			<template #container="{ message, closeCallback }">
				<div class="inline-flex items-start justify-start w-full p-4 rounded-lg bg-gradient-to-l from-blue-900/80 to-sky-600/60 backdrop-blur-sm" @click="closeCallback">
					<!-- <img :src="testSVG" alt="test" class="w-12 h-12" /> -->
					<div class="flex-col ml-4">
						<p class="text-lg text-white" v-html="message.detail" />
					</div>
					

				</div>
			</template>
		</Toast>
		
	</div>

	<div v-if="userStore.isConnected && userStore.initialized" class="relative">
		<div class="w-screen h-screen overflow-hidden bg-blue-400" />

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
const retentionStore = useRetentionStore();
const userStore = useUserStore();
const {currResponse} = storeToRefs(userStore);
const speechBubbles = ref<any>([]);
const speechBubbleLine = ref(0);
const showSpeechBubble = ref(false);
const speechBubInterval = ref<any>(null);

watch(currResponse, (text) => {
	console.log("New Response", text);
	// console.log("New Response", newVal);
	if (text && text !== "") {
		console.log("New Response iiiissssss: ", text);

        speechBubbles.value = [];

        if (text[text.length - 1] !== '.' && text[text.length - 1] !== '!' && text[text.length - 1] !== '?') {
          text += '.';
        }
        speechBubbles.value = text.match(/[^\.!\?]+[\.!\?]+/g);

        speechBubbleLine.value = 0;

        try {
          clearTimeout(speechBubInterval.value);
        } catch (err) {
          console.log('No timeout to clear.');
        }

        const runIntervals = () => {
          if (speechBubbleLine.value < speechBubbles.value.length - 1) {
            speechBubbleLine.value++;
            const nextIntervalLength = speechBubbles.value[speechBubbleLine.value].length * 90;
			toast.add({
			severity: "info",
			// summary: "Check-up time!",
			detail: JSON.stringify(speechBubbles.value[speechBubbleLine.value]),
			group: "headless-chat-messages",
			life: speechBubbles.value[speechBubbleLine.value].length * 90
		});
            speechBubInterval.value = setTimeout(runIntervals, nextIntervalLength);
          } else {
            try {
              clearTimeout(speechBubInterval.value);
            } catch (err) {
              console.log('No timeout to clear.');
            }
			showSpeechBubble.value = false;
            speechBubbleLine.value = -1;
          }
        };
        speechBubInterval.value = setTimeout(runIntervals, speechBubbles.value[0].length * 50);
		toast.add({
			severity: "info",
			// summary: "Check-up time!",
			detail: JSON.stringify(speechBubbles.value[speechBubbleLine.value]),
			group: "headless-chat-messages",
			life: speechBubbles.value[speechBubbleLine.value].length * 90
		});

		showSpeechBubble.value = true;
      
	}
	else{
		showSpeechBubble.value = false;
	}
});

const startDate = new Date("6-04-2024");
const currentDate = new Date();
const weekDifference = Math.floor((currentDate - startDate) / (1000 * 60 * 60 * 24 * 7));
retentionStore.weekNumber = weekDifference;

const homeScreenOptions = ref([
	{
		title: t(`homePage.remoteOptions.appOnly.title`),
		description: t(`homePage.remoteOptions.appOnly.description`),
		image: appRemoteImg,
		action: () => {
			// toast.add({ severity: "info", summary: "Info", detail: "This feature is not available yet." });
			//   


			console.log("ACTION 0");
			userStore.sendAction("startupMessage");
			userStore.isConnected = false;
			userStore.initialized = true;

		},
	},
	{
		title: "MARCo",
		description: t(`homePage.remoteOptions.robotOnly.description`),
		image: robotRemoteImg,
		action: () => {
			//   toast.add({ severity: "info", summary: "Info", detail: "This feature is not available yet." });
			console.log("ACTION 1");
			console.log("ACTION 0");
			userStore.sendAction("startupMessage");
			userStore.isConnected = true;
			userStore.initialized = true;
			userStore.pingBot();
		},
	},
	{
		title: t(`homePage.remoteOptions.new.title`),
		description: t(`homePage.remoteOptions.new.description`),
		image: newRobotImg,
		action: () => {
			userStore.reconnectDialog = true;
		},
	},
]);


const { data: activeScreenings, isError: isScreeningsError, error: screeningsError, isPending: screeningsPending, isSuccess: activeScreeningSuccess } = useGetActiveScreening(userStore.rawUsrData.basicInformation.userID);
watch(activeScreeningSuccess, () => {
	console.log("Active Screenings", activeScreenings);
	if (activeScreenings && activeScreenings.value.length > 0) {
		userStore.activeScreenings = activeScreenings;

		// Check the first screening and compare the lastIssueDate to today. Check the frequency and if it's time to do a new one.
		const lastIssueDate = new Date(activeScreenings.value[0].lastIssueDate);
		const frequency = activeScreenings.value[0].frequency;
		
		const frequencyInMilliseconds = {
            'Daily': 24 * 60 * 60 * 1000, // 1 day
            'Every other day': 2 * 24 * 60 * 60 * 1000, // 2 days
            'Twice Weekly': 3.5 * 24 * 60 * 60 * 1000, // 3.5 days
            'Weekly': 7 * 24 * 60 * 60 * 1000, // 1 week
            'Bi-Weekly': 14 * 24 * 60 * 60 * 1000, // 2 weeks
            'Monthly': 30 * 24 * 60 * 60 * 1000, // 1 month (approximate)
            'Quarterly': 91 * 24 * 60 * 60 * 1000, // 3 months (approximate)
            'Annually': 365 * 24 * 60 * 60 * 1000, // 1 year
            'Once': Infinity, // To handle "Once" frequency
          };

		const currDate = new Date();
		const timeDifference = currDate - lastIssueDate;
		if (timeDifference > frequencyInMilliseconds[frequency]){
		
		toast.add({
			severity: "info",
			summary: "Check-up time!",
			detail: "Tap to do a quick check-in as part of your goals.",
			group: "headless-screening-todo",
		});
	}
	
	}
});

watch(isScreeningsError, () => {
	if (isScreeningsError)
		toast.add({ severity: "error", summary: "Error", detail: screeningsError });
});

const openActiveScreening = () => {
	try {
		router.push(`/screening/${activeScreenings.value[0].screeningID}`);
	}
	catch (e) {
		console.log(e);
		toast.add({ severity: "error", summary: "Error", detail: "Trouble getting this screening :(" });
	}
};



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
