<template>
	<div class="flex flex-col h-svh">
		<div class="p-9">
			<img class="mx-auto" src="@/assets/marco/customization/1.png" alt="">
		</div>
		<div class=" bg-zinc-500">
			<div class="divide-y divide-zinc-400">
				<div class="flex gap-4 p-4 overflow-auto select-none no-scrollbar">
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/2.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/3.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/4.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/5.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/6.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/7.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/8.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/9.png" alt="">
					</div>
				</div>
				<div class="flex gap-4 p-4 overflow-auto select-none no-scrollbar">
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/12.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/12.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/12.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/12.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/12.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/12.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/12.png" alt="">
					</div>
					<div class="flex items-center justify-center shrink-0 size-10">
						<img src="@/assets/marco/customization/12.png" alt="">
					</div>
				</div>
				<div class="px-4 py-8">
					<p class="text-sm text-center text-white ">Customize MARCo</p>
				</div>
				<div class="p-4">
					<div class="flex gap-2 mb-4">
						<MultiSelect v-model="selectedAnimals" :options="animalList" option-label="name" placeholder="Voice Profile"
							class="w-full !bg-transparent !text-white" />
						<Button class="!p-1 size-[42px] flex-shrink-0 !text-white" text>
							<IconDeviceFloppy class="text-inherit" stroke="2" size="30" />
						</Button>
					</div>
					<p class="text-sm text-center text-white">Test Voice</p>
				</div>
				<div class="p-4">
					<p class="mb-4 text-sm text-white">Response Length</p>
					<Slider v-model="value" class="w-full" />
				</div>
				<div class="flex items-center justify-between p-4">
					<p class="text-2xl text-white">MARCo</p>
					<img src="@/assets/marco/customization/11.png" alt="">
				</div>
			</div>
		</div>
	</div>
</template>

<script setup lang="ts">
import { IconChevronLeft, IconDeviceFloppy, IconPencil, IconRestore, IconTrashX } from '@tabler/icons-vue';
import Button from 'primevue/button';
import Dropdown from 'primevue/dropdown';
import MultiSelect from 'primevue/multiselect';
import Slider from 'primevue/slider';
import TabPanel from 'primevue/tabpanel';
import TabView from 'primevue/tabview';
import { ref } from 'vue';

const value = ref(0);

const selectedAnimals = ref()
const animalList = ref([
	{ name: 'Cats', value: 'cat' },
	{ name: 'Dogs', value: 'dog' },
	{ name: 'Birds', value: 'bird' },
	{ name: 'Monkeys', value: 'monkey' },
	{ name: 'Foxes', value: 'fox' },
	{ name: 'Horses', value: 'horse', },
	{ name: 'Pandas', value: 'panda', },
	{ name: 'Sloths', value: 'sloth', },
	{ name: 'Rabbits', value: 'rabbit', },
	{ name: 'Lizards', value: 'lizard', },
	{ name: 'Snakes', value: 'snake', },
])

const selectedHobbies = ref()
const hobbiesList = ref([
	{ name: 'Playing music', value: 'music' },
	{ name: 'Makeup', value: 'makeup' },
	{ name: 'Art', value: 'general art' },
	{ name: 'Drawing', value: 'drawing' },
	{ name: 'Painting', value: 'painting' },
	{ name: 'Theater', value: 'theater', },
	{ name: 'Gaming', value: 'gaming', },
	{ name: 'Magic/Magic Tricks', value: 'magic', },
	{ name: 'Cooking', value: 'cooking', },
	{ name: 'Photography', value: 'photography', },
	{ name: 'Reading', value: 'reading', },
	{ name: 'Writing', value: 'writing', },
	{ name: 'Playing/Watching Sports', value: 'sports', },

])
const selectedFaith = ref()
const faithList = ref([
	{ name: 'Christianity', value: 'christianity' },
	{ name: 'Judaism', value: 'judaism' },
	{ name: 'Islam', value: 'islam' },
	{ name: 'Hinduism', value: 'hinduism' },
	{ name: 'Buddhism', value: 'buddhism' },
	{ name: 'Spiritual/New Religion', value: 'spiritual', },
	{ name: 'Sikh', value: 'sikh', },
	{ name: 'Taoism', value: 'taoism', },
	{ name: 'Atheism', value: 'atheism', },
])

</script>

<style></style>