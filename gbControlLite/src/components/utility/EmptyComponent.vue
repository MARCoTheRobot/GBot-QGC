<template>

<div class="flex flex-col items-center justify-center w-full h-full gap-4">
        <img v-if="!lottie" class="w-1/2" :src="src" alt="empty">
        <Vue3Lottie v-if="lottie" :animation-data="lottie" :loop="loopLottie" height="172" />
        <p class="mt-4 text-lg dark:text-white">{{ msg }}</p>
        <div class="flex flex-row justify-between w-full gap-6">
            <Button v-if="action1" severity="success" class="flex-grow w-full" :label="action1Label" rounded @click="action1" />
            <Button v-if="action2" severity="warning" class="flex-grow w-full" :label="action2Label" rounded @click="action2" />
        </div>
</div>

</template>


<script setup lang="ts">

import { defineProps } from 'vue';
import Button from 'primevue/button';
import { Vue3Lottie } from "vue3-lottie";
import emptyImg from '@/assets/images/marco_logo_square.webp'

const props = defineProps({
    src: {
        type: String,
        default: emptyImg,
    },
    lottie: {
        type: String,
        required: false,
    },
    loopLottie: {
        type: Boolean,
        default: false,
        required: false,
    },
    msg: {
        type: String,
        default: `Sorry! There's nothing to be found here.`,
        required: false,
    },
    action1: {
        type: Function,
        required: false,
    },
    action1Label: {
        type: String,
        default: 'Next',
        required: false,
    },
    action2: {
        type: Function,
        required: false,
    },
    action2Label: {
        type: String,
        default: 'Cancel',
        required: false,
    },
});


</script>