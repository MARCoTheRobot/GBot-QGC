<template>
	<div class="h-svh">
		<div class="flex items-center justify-center h-full">
			<div id="avatar-container" class="" />
		</div>
		<div class="absolute bottom-0 left-0 w-full overflow-hidden rounded-t-xl bg-surface-200">
			<div v-if="current == 'options'" class="flex items-center justify-center flex-1 gap-4 px-4 py-8"
				data-label="main menu">
				<div v-for="(option, index) in avatarOptions.options" :key="index"
					class="flex items-center justify-center w-16 p-2 bg-green-500 cursor-pointer aspect-square rounded-xl"
					@click="current = option.key">
					<img :src="option.src" :alt="option.name">
				</div>
			</div>
			<div v-else-if="current == 'skinTone'" class="flex-1 px-4 py-8" data-label="head-menu">
				<Button class="!pr-2 !py-0 !pl-0 items-center mb-4" @click="current = 'options'">
					<IconChevronLeft class="text-white" stroke="2" size="24" />
					<span>Back</span>
				</Button>
				<div class="flex items-center justify-center gap-4 ">
					<div class="flex items-center justify-center w-16 p-2 bg-green-500 cursor-pointer aspect-square rounded-xl ">
						<img src="/assets/marco-customization/head/0.png" alt="">
					</div>
					<div class="flex items-center justify-center w-16 p-2 cursor-pointer aspect-square bg-cyan-500 rounded-xl ">
						<img src="/assets/marco-customization/head/1.png" alt="">
					</div>
					<div class="flex items-center justify-center w-16 p-2 bg-blue-500 cursor-pointer aspect-square rounded-xl ">
						<img src="/assets/marco-customization/head/2.png" alt="">
					</div>
				</div>
			</div>
			<div v-else-if="current == 'voice'" class="flex-1 px-4 py-8" data-label="head-menu">
				<Button class="!pr-2 !py-0 !pl-0 items-center mb-4" @click="current = 'options'">
					<IconChevronLeft class="text-white" stroke="2" size="24" />
					<span>Back</span>
				</Button>
				<div class="flex items-center justify-center gap-4 ">
					<div class="flex items-center justify-center w-16 p-2 bg-green-500 cursor-pointer aspect-square rounded-xl ">
						<img src="/assets/marco-customization/head/0.png" alt="">
					</div>
					<div class="flex items-center justify-center w-16 p-2 cursor-pointer aspect-square bg-cyan-500 rounded-xl ">
						<img src="/assets/marco-customization/head/1.png" alt="">
					</div>
					<div class="flex items-center justify-center w-16 p-2 bg-blue-500 cursor-pointer aspect-square rounded-xl ">
						<img src="/assets/marco-customization/head/2.png" alt="">
					</div>
				</div>
			</div>
			<div v-else class="flex-1 px-4 py-8" data-label="head-menu">
				<Button class="!pr-2 !py-0 !pl-0 items-center mb-4" @click="current = 'options'">
					<IconChevronLeft class="text-white" stroke="2" size="24" />
					<span>Back</span>
				</Button>
				<div class="flex items-center justify-center gap-4 ">
					<!-- @vue-ignore -->
					<div v-for="(item, j) in avatarOptions[current]" :key="j"
						class="flex items-center justify-center w-16 p-2 bg-green-500 cursor-pointer aspect-square rounded-xl"
						@click="handleAvatarChange(current, item.value)">
						<!-- @vue-ignore -->
						<img :src="`/assets/marco-customization/${current}/${item.value}.png`" alt="">
					</div>
				</div>
			</div>

		</div>
	</div>
</template>

<script setup lang="ts">
import useSettingsStore from '@/store/settings';
import { AvatarOptionsType } from '@/types/avatar.type';
import { IconChevronLeft } from '@tabler/icons-vue';
import Button from 'primevue/button';
import { ref } from 'vue';
const current = ref<keyof AvatarOptionsType>("options");
const settings = useSettingsStore()

const avatarOptions: AvatarOptionsType = {
	avatar: [
		{
			name: "DefaultVwFriend2",
			voice: "en-US-Standard-D",
			src: "/assets/marco-customization/avatars/DefaultVwFriend2.svg",
			audioSample: "/assets/marco-customization/audio/vw-assistant-1.mp3",
		},
		{
			name: "DefaultVwFriend3",
			voice: "en-US-Standard-E",
			src: "/assets/marco-customization/avatars/DefaultVwFriend3.svg",
			audioSample: "/assets/marco-customization/audio/vw-assistant-2.mp3",
		},
		{
			name: "DefaultVwFriend4",
			voice: "en-US-Standard-H",
			src: "/assets/marco-customization/avatars/DefaultVwFriend4.svg",
			audioSample: "/assets/marco-customization/audio/vw-assistant-3.mp3",
		},
		// Add more avatars as needed
	],
	options: [
		{
			name: "Body",
			src: "/assets/marco-customization/1.png",
			key: "body"
		},
		{
			name: "Eyes",
			src: "/assets/marco-customization/2.png",
			key: "eye"
		},
		{
			name: "Hair Style",
			src: "/assets/marco-customization/3.png",
			key: "head"
		},
		{
			name: "Colors",
			src: "/assets/marco-customization/4.png",
			key: "skinTone"
		},
		{
			name: "Voice",
			src: "/assets/marco-customization/5.png",
			key: "voice"
		},
	],
	body: [
		{
			label: "Jacket - 1",
			value: "0",
		},
		{
			label: "Coat - 1",
			value: "1",
		},
		{
			label: "Coat - 2",
			value: "2",
		},
	],
	head: [
		{
			label: "Head - 1",
			value: "0",
		},
		{
			label: "Head - 2",
			value: "1",
		},
		{
			label: "Head - 3",
			value: "2",
		},
	],
	eye: [
		{
			label: "Eyes - 1",
			value: "0",
		},
		{
			label: "Eyes - 2",
			value: "1",
		},
	],
	skinTone: ["#ffdbac", "#f1c27d", "#e0ac69", "#c68642", "#8d5524", "#613318"],
	voice: [
		{
			label: "Male Voice - 1",
			value: "en-US-Standard-D",
			audioSample: "/assets/marco-customization/audio/vw-assistant-1.mp3",
		},
		{
			label: "Female Voice - 1",
			value: "en-US-Standard-E",
			audioSample: "/assets/marco-customization/audio/vw-assistant-2.mp3",
		},
		{
			label: "Female Voice - 2",
			value: "en-US-Standard-H",
			audioSample: "/assets/marco-customization/audio/vw-assistant-3.mp3",
		},
	],
}
const mobileDisplay = ref(false);

const loadAvatar = async () => {
	const res = await fetch(`/assets/marco-customization/base.svg`)
	let avatarSVG = await res.text();
	for (const key in settings.avatar) {
		if (!Object.hasOwnProperty.call(settings.avatar, key)) continue
		// @ts-ignore
		const element = settings.avatar[key];

		let textElement = element.name;
		if (element.type === "svg") {
			const res = await fetch(`/assets/marco-customization/${key}/${element.name}.svg`);
			textElement = await res.text();
		}
		avatarSVG = avatarSVG.replace(new RegExp(`%${key.toUpperCase()}%`, "g"), textElement);
	}
	const element = document.getElementById("avatar-container")
	if (element)
		element.innerHTML = avatarSVG;
}

const handleAvatarChange = (key: keyof AvatarOptionsType, value: string) => {
	// @ts-ignore
	settings.avatar[key].name = value;
	loadAvatar()
}

loadAvatar()

</script>

<style>
.a {
	display: flex;
	justify-content: top;
	align-items: center;
	height: 100%;
	position: relative;
	flex-direction: column;
}

.slider {
	width: 300svw;
	transition: transform 0.3s;
}



.mobile {
	height: 50vh;
	position: relative;
	background-repeat: no-repeat;
	background-size: cover;
	background-position: bottom center;
}

.not-mobile {
	width: 200%;
	height: 50vh;
	margin-left: -50%;
	padding-top: 10%;
	background-repeat: no-repeat;
	background-size: cover;
	background-position: bottom center;
}
</style>