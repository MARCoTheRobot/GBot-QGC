<template>
    <div class="flex flex-col items-center justify-center w-screen h-screen">
        <h2 class="text-4xl font-black text-center text-white">Select a Robot</h2>

        <div class="flex flex-row justify-between w-full h-full gap-4">

                <Button icon="pi pi-chevron-left" iconPos="right" severity="info" text :disabled="currRobot === 0" @click="currRobot--" />
                 
          
            <div class="flex flex-col items-center w-full gap-2">
                <Image :src="robots[currRobot].img" alt="robot" width="200" />
                <h3 class="text-xl font-bold">{{ robots[currRobot].name }}</h3>
                <Button label="Select" @click="router.push(robots[currRobot].route)" class="w-full" rounded/>
                
            </div>
            <Button icon="pi pi-chevron-right" iconPos="right" severity="info" text :disabled="currRobot === robots.length-1" @click="currRobot++"
            />
        </div>

    </div>
</template>

<script lang="ts" setup>
import { useRouter } from 'vue-router';
import Button from 'primevue/button';
import Image from 'primevue/image';
import { ref } from 'vue';
import HARV9Img from '@/assets/images/harv9.png';

const currRobot = ref(0);

const robots = [
    {
        name: "HARV7",
        img: HARV9Img,
        route: "/harv7"
    },
    {
        name: "HARV9",
        img: HARV9Img,
        route: "/harv9"
    }
]

const router = useRouter();
</script>