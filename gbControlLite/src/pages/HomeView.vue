<template>
	<div class="flex flex-col gap-2 overflow-y-auto">
		<!--Video display-->
		<div class="fixed top-0 right-0 w-[83.333%] h-screen overflow-hidden z-0">
			<video class="w-screen h-screen" autoplay muted loop>
				<source src="/assets/vid/gbot-camera-view.mp4" type="video/mp4" />
				Your browser does not support the video tag.
			</video>
		</div>
		
		<!--Quick controls dock-->
		<Dock :model="dockItems" position="bottom" class="z-1">
			<template #icon="{ item }">
				<div class="w-full" @click="item.action($event)">
				<img :src="item.icon" alt="icon" class="w-full" />
				</div>
			</template>
		</Dock>

		<!--Confirm video recording popup-->
		<ConfirmPopup group="recording">
			<template #message="slotProps">
				{{ slotProps.message.message }}
			</template>
		</ConfirmPopup>

		<!-- <TranscriptDialog :open="true" /> -->
	</div>

</template>

<script setup lang="ts">
import { ref, watch, computed, onMounted } from "vue";
import { useRouter } from "vue-router";
import useSettingsStore from "@/store/settings";
const settings = useSettingsStore();
import Video3D from "@/assets/icons/dock/video-3d.png";
import Audio3D from "@/assets/icons/dock/audio-3d.png";
import Settings3D from "@/assets/icons/dock/settings-3d.png";
import Chat3D from "@/assets/icons/dock/chat-3d.png";
import ConfirmPopup from "primevue/confirmpopup";
import { useConfirm } from "primevue/useconfirm";
import { useToast } from "primevue/usetoast";
import Dock from "primevue/dock";
import TranscriptDialog from "@/components/TranscriptDialog.vue";
const confirm = useConfirm();
// import MarcoAvatar from '@/components/marco-avatar.vue';
import { storeToRefs } from "pinia";
const toast = useToast();
const router = useRouter();

// Create the dock items for quick controls of the robot
const dockItems = ref<any>([
	{
		icon: Video3D,
		label: "Record Video",
		action: (event: any) =>{
			confirm.require({
				target: event.target,
				group: "recording",
				position: "top",
				message: "Start recording video?",
				icon: "pi pi-exclamation-triangle",
				accept: () => {
					// Start recording video
					toast.add({ severity: "success", summary: "Recording started", life: 3000 });
				},
				reject: () => {
					// Cancel recording video
					toast.add({ severity: "info", summary: "Recording cancelled", life: 3000 });
				},
			});
		}
	},
	{
		icon: Chat3D,
		label: "Transcript",
		action: (event: any) =>{
			settings.transcript.show = !settings.transcript.show;
			settings.transcript.messages = [];

			const nextMessages = [ 
			{
      text: "Drive forward 60 feet.",
      timestamp: new Date().getTime(),
      type: "user",
    },
    {
      text: "Driving forward 60 feet.",
      timestamp: new Date().getTime(),
      type: "status",
    },
    {
      text: "Drove forward 60 feet.",
      timestamp: new Date().getTime(),
      type: "status"
    },
    {
      from: "user",
      text: "Listen and transcribe what you hear",
      timestamp: new Date().getTime(),
      type: "user"
    },
    {
      text: "Listening now...",
      timestamp: new Date().getTime(),
      type: "status"
    },
    {
      text: "Here, will you look at this, I can’t believe that there’s this much garbage around here. I swear it is...",
      timestamp: new Date().getTime(),
      type: "liveTranscription"
    },
			];

			const addInterval = setInterval(() => {
				settings.transcript.messages.push(nextMessages.shift());
				if(nextMessages.length === 0){
					clearInterval(addInterval);
				}
			}, 2000);
		}
	},
	{
		icon: Audio3D,
		label: "Record Audio",
	},
	{
		icon: Settings3D,
		label: "Settings",
	}
]);

const transcriptVisible = ref<boolean>(false);



onMounted(() => {
	// Once the home screen mounts, ping the robot
	// userStore.pingBot();
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
