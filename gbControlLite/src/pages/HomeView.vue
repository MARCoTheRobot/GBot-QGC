<template>
	<div class="flex flex-col gap-2 overflow-y-auto">
		<!--Video display-->
		<div class="fixed top-0 right-0 w-[78.333%] h-screen overflow-hidden z-0">
			<img :src="`data:image/jpeg;base64,${robot.videoBuffer}`" alt="PrimeVue logo" class="w-screen h-screen" />

		</div>
		
		<!--Quick controls dock-->
		<Dock :model="dockItems" position="bottom" class="z-1">
			<template #icon="{ item }">
				<div class="w-full" @click="item.action($event)" aria-haspopup="true" aria-controls="overlay_menu">
				<img :src="item.icon" alt="icon" class="w-full" />
				</div>
			</template>
		</Dock>
		<Menu ref="settingsMenu" id="overlay_menu" :model="menuItems" :popup="true" />


		<!--Confirm video recording popup-->
		<ConfirmPopup group="recording">
			<template #message="slotProps">
				{{ slotProps.message.message }}
			</template>
		</ConfirmPopup>

		<!-- <TranscriptDialog :open="true" /> -->
	</div>

	
	<Joystick
	id="joystick"
    :size="100"
	class="fixed bottom-0 right-0"
    base-color="#9FA9B7"
    stick-color="linear-gradient(135deg, #515E70 100%, #59687C 0%)"
    :throttle="100"
    @start="joystickStartEvent"
    @stop="joystickStopEvent"
    @move="joystickMoveEvent"
  />

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
import Image from "primevue/image";
// import TranscriptDialog from "@/components/TranscriptDialog.vue";
import Joystick from 'vue-joystick-component'
import Menu from "primevue/menu";

import useRobotStore from "@/store/robot";

const robot = useRobotStore();

const joystickStartEvent = () => {
	console.log('start')
}
const joystickStopEvent = () => {
	console.log('stop')
}
const joystickMoveEvent = ({x, y, direction, distance}) => {
	console.log(x, y, direction, distance);
	robot.joystick = [x, y];
	// robot.useSendJoystick([x,y]);
}
const confirm = useConfirm();
// import MarcoAvatar from '@/components/marco-avatar.vue';
import { storeToRefs } from "pinia";
const toast = useToast();
const router = useRouter();

const settingsMenu = ref();

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

			// const addInterval = setInterval(() => {
			// 	settings.transcript.messages.push(nextMessages.shift());
			// 	if(nextMessages.length === 0){
			// 		clearInterval(addInterval);
			// 	}
			// }, 2000);
		}
	},
	{
		icon: Audio3D,
		label: "Record Audio",
	},
	{
		icon: Settings3D,
		label: "Settings",
		action: (event) =>{
			settingsMenu.value.toggle(event)
		}
	}
]);

const menuItems = [
	{
		label: "Manual Control",
		icon: "pi pi-sliders-v",
		command: () => {
			robot.state = robot.states['manual'];
		},
	},
	{
		label: "Audio",
		icon: "pi pi-volume",
		command: () => {
			robot.state = robot.states['audio'];
		},
	},
	{
		label:'Reboot',
		icon:'pi pi-refresh',
		command: () => {
			robot.reboot();
			toast.add({severity:'info', summary:'Rebooting', life:3000});
		}
	},
	{
		label:'Shutdown',
		icon:'pi pi-power-off',
		command: () => {
			robot.shutdown();
			toast.add({severity:'warn', summary:'Shutting down...', life:3000});

		}
	}
]

const transcriptVisible = ref<boolean>(false);



onMounted(() => {
	// Once the home screen mounts, ping the robot
	// userStore.pingBot();
	// robot.camComm.initialize();
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

#joystick .joystick__stick{
background: linear-gradient(135deg, #515E70 100%, #59687C 0%);
box-shadow: 1px 1px 2px 0px rgba(122, 142, 169, 0.30) inset, -1px -1px 2px 0px rgba(48, 56, 67, 0.50) inset, -9px 9px 18px 0px rgba(48, 56, 67, 0.20), 9px -9px 18px 0px rgba(48, 56, 67, 0.20), -9px -9px 18px 0px rgba(122, 142, 169, 0.90), 9px 9px 23px 0px rgba(48, 56, 67, 0.90);
}
</style>
