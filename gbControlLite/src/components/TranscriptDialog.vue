<template>
    <Dialog :visible="settings.transcript.show" :modal="false" :draggable="true" position="topleft" class="dark">
        <template #header>
            <div class="flex-row justify-between">
                <h2>Transcript</h2>
                <!-- <button @click="visible = false">Close</button> -->
            </div>
        </template>

        <template #closeicon>
            <button @click="settings.transcript.show = false">X</button>
        </template>

        <div class="flex flex-col flex-grow gap-4 overflow-y-auto max-h-96">
            <div v-if="settings.transcript.messages.length === 0" class="text-center">
                <Image :src="Transcript3D" alt="transcript" />
                <p class="text-sm italic font-light">Send a first message to the robot!</p>
            </div>
            <div v-else>
            <div :class="`flex flex-row justify-${transcript.type === 'user' ? 'end':'start'} w-full`" v-for="transcript in settings.transcript.messages" :key="transcript.id">
                <div class="flex flex-col gap-1">
                    
                <p class="text-sm italic font-light rounded" v-if="transcript.type === 'status'">Status update</p> 
                <p class="text-sm italic font-light rounded" v-else-if="transcript.type === 'liveTranscription'">Transcribing</p>
                <p :class="messageClass(transcript)">{{ transcript.text }}</p>
                </div>
            </div>
        </div>
        </div>
        <template #footer>
            <InputGroup>
                <InputText placeholder="Keyword" />
                <Button icon="pi pi-send" severity="secondary" />
                <Button icon="pi pi-microphone" severity="secondary" />
            </InputGroup>
        </template>

    </Dialog>



</template>

<script setup lang="ts">
import Dialog from "primevue/dialog";
import InputGroup from "primevue/inputgroup";
// import InputGroupAddon from "primevue/inputgroupaddon";
import InputText from "primevue/inputtext";
import Button from "primevue/button";
import Image from "primevue/image";
import Transcript3D from "@/assets/icons/transcription-3d.png";

import { ref, computed } from "vue";
import useSettingsStore from "@/store/settings";
const settings = useSettingsStore();
import { storeToRefs } from "pinia";

const { transcript } = storeToRefs(settings);

const transcripts = ref([
    { id: 1, speaker: "Marco", text: "Hello, I am Marco." },
    { id: 2, speaker: "Alice", text: "Hello, I am Alice." },
    { id: 3, speaker: "Bob", text: "Hello, I am Bob." }
]);

const messageClass = (message: any) => {
    return {
        "p-4": true,
        "rounded-lg": true,
        "align-self-end": message.type === "user",
        "align-self-start": message.type === "status",
        "bg-blue-700": message.type === "user",
        "bg-blue-100": message.type === "status",
        "text-white": message.type === "user",
        "text-blue-900": message.type === "status",
        "bg-gradient-to-r from-purple-400 to-blue-700": message.type === "liveTranscription",

    };
};

console.log("transcript", transcript);

</script>