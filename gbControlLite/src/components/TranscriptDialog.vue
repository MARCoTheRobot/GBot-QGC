<template>
    <Dialog :visible="settings.transcript.show" :modal="false" :draggable="true" position="topleft" class="dark">
        <template #header>
            <div class="flex-row justify-between">
                <span>
                <Dropdown v-model="mode" :options="modes" option-label="label" option-value="value" placeholder="Switch Transcript Mode"/>
                <!-- <button @click="visible = false">Close</button> -->
                 
                </span>
            </div>
        </template>

        <template #closeicon>
            <button @click="settings.transcript.show = false">X</button>
        </template>

        <div class="flex flex-col flex-grow gap-4 overflow-y-auto max-h-96">
            <div v-if="settings.transcript.messages.length === 0" class="text-center">
                <Image :src="Transcript3D" alt="transcript" width="250" />
                <p class="text-sm italic font-light">{{mode === 'chat' ? 'Send a first message to the robot!':'Waiting for first transcript message'}}</p>
            </div>
            <div v-else class="flex flex-col gap-4">
                <div v-for="transcript in settings.transcript.messages"
                    :key="transcript.id" :class="`flex flex-row justify-${transcript.type === 'user' ? 'end' : 'start'} w-full`">
                    <div class="flex flex-col gap-1">

                        <p v-if="transcript.type === 'status' && mode === 'chat'" class="text-sm italic font-light rounded">Status update
                        </p>
                        <p v-else-if="transcript.type === 'liveTranscription' && mode !== 'chat'"
                            class="text-sm italic font-light rounded">
                            Transcribing</p>
                        <p v-if="showMessage(transcript.type)" :class="messageClass(transcript)">{{ transcript.text }}</p>
                    </div>
                </div>
            </div>
        </div>
        <template #footer>
            <InputGroup v-if="mode === 'chat'">
                <InputText v-model="nextMessage" placeholder="Send a message" @keyup.enter="send" />
                <Button icon="pi pi-send" severity="secondary" @click="send" />
                <Button icon="pi pi-microphone" severity="secondary" @click="speechToText" />
                <Button icon="pi pi-play-circle" severity="secondary" @click="playSpeech" />
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
import Dropdown from "primevue/dropdown";
import { useMutation } from "@tanstack/vue-query";

const conversationalAPI = import.meta.env.CONV_API;

import { ref, watch, computed } from "vue";
import useSettingsStore from "@/store/settings";
const settings = useSettingsStore();
import { storeToRefs } from "pinia";
import http from "@/lib/http";
import { SpeechRecognition } from "@capacitor-community/speech-recognition";
import useRobotStore from "@/store/robot";

const robot = useRobotStore();

const { transcript, transientTranscript } = storeToRefs(robot);

const nextMessage = ref("");


const mode = ref('chat');
const modes = ref([
    { label: 'Chat with HARV', value: 'chat' },
    { label: 'Live Transcript', value: 'live' }
]);

// const switchMode = () => {
//     mode.value = mode.value === 'chat' ? 'live' : 'chat';
//     // settings.transcript.messages = [];
//     nextMessage.value = "";
// };

// const boxHeader = computed(() => {
//     return mode.value === 'chat' ? 'Chat with HARV' : 'Live Transcript';
// });

const showMessage = (messageMode: string) => {
    switch(messageMode){
        case "user":
            return mode.value === 'chat'
            break;
        case "status":
            return mode.value === 'chat'
            break;
        case "liveTranscription":
            return mode.value !== 'chat'
            break;
        case "finishedTranscription":
            return mode.value !== 'chat'
            break;
    }
};


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
        "bg-gradient-to-r from-purple-800 to-blue-800": message.type === "finishedTranscription",


    };
};


/**
 * Watch the transient transcript object for changes -
 * If the transcript changes and the most recent message is of type liveTranscription,
 * then add the message to the last message in the transcript
 * Otherwise, create a new message in the transcript with the liveTranscription message
 */
watch(transientTranscript, (value) =>{
    console.log("transcript", value);
    if(settings.transcript.messages.length > 0 ){
    const lastMessage = settings.transcript.messages[settings.transcript.messages.length - 1];
    if(lastMessage.type === "liveTranscription"){
        settings.transcript.messages[settings.transcript.messages.length - 1].text = value;
    }
    else{
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "liveTranscription", text: value });
    }
}
else{
    settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "liveTranscription", text: value });
}   
});

/**
 * Once a transcript is finalized, push a new final message to the transcript box
 */
watch(transcript, (value) => {
    console.log("transcript", value);
    if(settings.transcript.messages.length > 0 ){
    const lastMessage = settings.transcript.messages[settings.transcript.messages.length - 1];
    if(lastMessage.type === "liveTranscription"){
        settings.transcript.messages[settings.transcript.messages.length - 1].text = value;
        settings.transcript.messages[settings.transcript.messages.length - 1].type = "finishedTranscription";
    }
    else{
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "finishedTranscription", text: value });
    }
}
else{
    settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "finishedTranscription", text: value });
}   
});



const { mutate } = useMutation({
    mutationFn: async (text: string) => {
        return  http({url:"https://commandconversation-kl3exemiua-uc.a.run.app", method: "POST", data:{ text:text, sessionID: "1234" }});
    },

    onMutate: (text: string) => {
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "user", text: nextMessage.value });
        nextMessage.value = "";
    },
    onSuccess: (data) => {
        console.log("data a a a", data);
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "status", text: data.statusResponse });
        robot.useAudioCommand(data.statusResponse);
        robot.useHandlePayload(data);
    },
    onError: (error) => {
        console.error("error", error);
        settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "status", text: error.message });
        robot.useAudioCommand(`Sorry, I had an issue with that. Here's why: ${error.message}`);
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

const playSpeech = async () => {
    robot.useAudioCommand(nextMessage.value);
    nextMessage.value = "";
}



</script>