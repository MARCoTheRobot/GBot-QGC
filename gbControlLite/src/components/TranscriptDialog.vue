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
                <div :class="`flex flex-row justify-${transcript.type === 'user' ? 'end' : 'start'} w-full`"
                    v-for="transcript in settings.transcript.messages" :key="transcript.id">
                    <div class="flex flex-col gap-1">

                        <p class="text-sm italic font-light rounded" v-if="transcript.type === 'status'">Status update
                        </p>
                        <p class="text-sm italic font-light rounded"
                            v-else-if="transcript.type === 'liveTranscription'">
                            Transcribing</p>
                        <p :class="messageClass(transcript)">{{ transcript.text }}</p>
                    </div>
                </div>
            </div>
        </div>
        <template #footer>
            <InputGroup>
                <InputText v-model="nextMessage" placeholder="Send a message" />
                <Button icon="pi pi-send" severity="secondary" @click="send" />
                <Button icon="pi pi-microphone" severity="secondary" @click="speechToText"/>
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
import { useMutation } from "@tanstack/vue-query";

const conversationalAPI = import.meta.env.CONV_API;

import { ref, watch } from "vue";
import useSettingsStore from "@/store/settings";
const settings = useSettingsStore();
import { storeToRefs } from "pinia";
import http from "@/lib/http";
import { SpeechRecognition } from "@capacitor-community/speech-recognition";
import useRobotStore from "@/store/robot";

const robot = useRobotStore();

const { transcript } = storeToRefs(robot);

const nextMessage = ref("");


const messageClass = (message: any) => {
    return {
        "p-4": true,
        "w-full": true,
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


/**
 * Watch the transcript object for changes -
 * If the transcript changes and the most recent message is of type liveTranscription,
 * then add the message to the last message in the transcript
 * Otherwise, create a new message in the transcript with the liveTranscription message
 */
watch(transcript, (value) =>{
    console.log("transcript", value);
    if(settings.transcript.messages.length > 0 ){
    const lastMessage = settings.transcript.messages[settings.transcript.messages.length - 1];
    if(lastMessage.type === "liveTranscription"){
        settings.transcript.messages[settings.transcript.messages.length - 1].text += value;
    }
    else{
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "liveTranscription", text: value });
    }
}
else{
    settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "liveTranscription", text: value });
}   
});



const { mutate } = useMutation({
    mutationFn: async (text: string) => {
        return  http({url:"https://us-central1-guardbot-qgc.cloudfunctions.net/commandConversation", method: "POST", data:{ text:text, sessionID: "1234" }});
    },

    onMutate: (text: string) => {
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "user", text: nextMessage.value });
        nextMessage.value = "";
    },
    onSuccess: (data) => {
        console.log("data a a a", data);
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "status", text: data.statusResponse });
        robot.useHandlePayload(data);
    },
    onError: (error) => {
        console.error("error", error);
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "status", text: error.message });
    }

}
);


const send = async () => {
    mutate(nextMessage.value);
    
    
    };

    const listeningNow = ref(false);
    const speechResult = ref<string[]>([]);

const speechToText  = async () => {
    const available = await SpeechRecognition.available();
    console.log("available", available);
    if(available){
        console.log("listeningNow", listeningNow.value);
        const hasPermission = await SpeechRecognition.requestPermissions();
        console.log("hasPermission", hasPermission);
        if(!hasPermission){
            await SpeechRecognition.requestPermissions();
        }
        if(!listeningNow.value){
            listeningNow.value = true;
            
            speechResult.value = await SpeechRecognition.start({
            language: "en-US",
            maxResults: 1,
            prompt: "Speak now",
            partialResults: true,
            popup: true
        }).then((result) => {
            console.log("result", result);
            speechResult.value = result.matches ? result.matches : [];
            nextMessage.value = speechResult.value.join(" ");
            listeningNow.value = false;
            return send();
        });
    }
    else{
        listeningNow.value = false;
        await SpeechRecognition.stop();
        nextMessage.value = speechResult.value.join(" ");
        send();
    }
    }
}

SpeechRecognition.addListener("onResult", (result) => {
    console.log("result", result);
    speechResult.value = result.value;
});



</script>