<template>
    <div class="flex w-screen h-screen welcome-screen">
        <div class="flex flex-col justify-center w-1/3 h-full gap-2 px-8 align-middle">
            <h2 class="text-4xl font-black text-left text-white">Welcome to GuardBot</h2>
            <Button label="Get Started" rounded icon="pi pi-arrow-right" iconPos="right" severity="info" @click="$router.push('/home')"/>

        </div>
    </div>
</template>

<script setup>
import InputText from 'primevue/inputtext';
import Button from 'primevue/button';
import { ref } from 'vue';
import dgram from 'node:dgram';
import Image from 'primevue/image';
import { Buffer } from 'buffer';
import { UDP } from '@nws/capacitor-udp'
import { EComm } from '@/utils/externalComm';
import { useMutation } from '@tanstack/vue-query';
import http from '@/lib/http';
import { toUrl } from '@/lib/utils';

const messages = ref([]);
const newMessage = ref('');
const sock = ref(null);
const serverAddress = ["192.168.1.208", 8043]
// const serverAddress = ['harv7.harv-guardbot.org', 8043]
let sockID = 1

const dataPrefix = {
    'video': Buffer.from('\x00'),
    'detections': Buffer.from('\x01'),
    'json_data': Buffer.from('\x02'),
    'audio': Buffer.from('\x03')
};

const sendMessage = () => {
    // Send the message using UDP
    // Add your UDP logic here
    const message = Buffer.from(newMessage.value);
    UDP.send({ socketId: sockID, address: serverAddress[0], port: serverAddress[1], buffer: message.toString('base64') }).then(() => {
        console.log('Message sent');
    }).catch((e) => {
        console.error(e);
    });


    // Add the sent message to the messages array
    messages.value.push({
        id: Date.now(),
        text: newMessage.value,
    });

    // Clear the input field
    newMessage.value = '';
};

const dataPrefix3 = {
  video: Buffer.from("\x00"),
  detections: Buffer.from("\x01"),
  json_data: Buffer.from("\x02"),
  audio: Buffer.from("\x03"),
};

const initialize = async () => {
    try {
        await UDP.closeAllSockets();
        sock.value = await UDP.create({ properties: { name: "vHARV7", bufferSize: 655536 } });
        console.log("The socket is:", sock.value);
        await UDP.bind({ socketId: sock.value.socketId, port: 8043 });
        sockID = sock.value.socketId;
        // UDP.joinGroup({socketId: sock.value.socketId, address: serverAddress[0]});
        UDP.addListener('receive', (data) => {
            console.log('The received data was: ', data);
            const receivedString = Buffer.from(data.buffer, 'base64').toString();
            // console.log("The received string was:", receivedString);
            const data1 = receivedString.slice(receivedString.indexOf('>') + 2);
            const dataPrefix2 = data1.slice(0, 1);
            console.log("The data prefix was:", dataPrefix2, ' and the video data prefix is: ', dataPrefix3['video']);
            const finalData = data1.slice(1);
            if (dataPrefix2 === dataPrefix3['video'].toString()) {
                console.log("It's video data");
                imgBuffer.value = `${finalData}`;
                // console.log("The final data was:", finalData);
                return;
            }
            else{
            messages.value.push({
                id: Date.now(),
                text: Buffer.from(data.buffer, 'base64').toString(),
            });
        }
        });

        UDP.addListener('receiveError', (data) => {
            console.warn("The warning was:", data);
        });


    }
    catch (e) {
        console.error(e);
    }
}

const lastAudio = ref(0);
const audioContext = new AudioContext({ sampleRate: 44100 });
const audioBufferSource = audioContext.createBufferSource();
const firstAudioMsg = ref("");

const Sound = (function () {
    const df = document.createDocumentFragment();
    
    return function Sound(src) {
        if(firstAudioMsg.value === ""){
            firstAudioMsg.value = "data:audio/wav;base64," + src;
        }
        console.log("The source is:", src);
        const snd = new Audio();
        snd.src = firstAudioMsg.value + src;
        df.appendChild(snd); // keep in fragment until finished playing
        snd.addEventListener('ended', function () {df.removeChild(snd);});
        snd.play();
        return snd;
    }
}());



// const initialize = async () => {
//     try {
//         await UDP.closeAllSockets();
//         sock.value = await UDP.create({ properties: { name: "aHARV7", bufferSize: 99999 } });
//         console.log("The socket is:", sock.value);
//         await UDP.bind({ socketId: sock.value.socketId, port: 8044 });

//         UDP.addListener('receive', (data) => {
//             console.log("The data is:", data);  
//             const receivedString = Buffer.from(data.buffer, 'base64').toString();
//             // console.log("Received data:", receivedString);
//             const data1 = receivedString.slice(receivedString.indexOf('>') + 1);
//             // console.log("Received data 123:", data1);
//             const dataPrefix2 = data1.slice(0, 1);
//             const data2 = data1.slice(1);
//             // console.log(audioBufferSource);
//             // recvFunction(Buffer.from(data1, 'utf-8'));
//             if (dataPrefix2 === dataPrefix['audio'] || true) {
//                 // console.log("It's audio data");
//                 const audioData = data2;
//                 const snd = Sound(audioData);
                
//                 // const binaryString = atob(audioData);
//                 // const len = binaryString.length;
//                 // const bytes = new Uint8Array(len);
//                 // for (let i = 0; i < len; i++) {
//                 //     bytes[i] = binaryString.charCodeAt(i);
//                 // }

//                 // // Convert binary buffer to Float32Array
//                 // const float32Array = new Float32Array(bytes.buffer);
//                 // // console.log("The Float32Array was:", float32Array);
//                 // // Create an AudioBuffer
//                 // const audioBuffer = audioContext.createBuffer(1, float32Array.length, audioContext.sampleRate);
//                 // audioBuffer.copyToChannel(float32Array, 0);

//                 // // Create a buffer source
//                 // const bufferSource = audioContext.createBufferSource();
//                 // bufferSource.buffer = audioBuffer;
//                 // bufferSource.connect(audioContext.destination);
//                 // bufferSource.start();

//                 // audioContext.decodeAudioData(data2, (buffer) => {
//                 //     audioBufferSource.buffer = buffer;
//                 //     audioBufferSource.connect(audioContext.destination);
//                 //     audioBufferSource.start();
//                 // });
//             }
//             else {
//                 messages.value.push({
//                     id: Date.now(),
//                     text: Buffer.from(data.buffer, 'base64').toString(),
//                 });
//             }

//         })
//     }
//     catch (e) {
//         console.error(e);
//     }
// }

initialize();


const { mutate } = useMutation({
    mutationFn: async (text) => {
        return  http({url:"https://commandconversation-kl3exemiua-uc.a.run.app", method: "POST", data:{ text:text, sessionID: "1234" }});
    },

    onMutate: (text) => {
        // settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "user", text: nextMessage.value });
        nextMessage.value = "";
    },
    onSuccess: (data) => {
        console.log("data a a a", data);
        // settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "status", text: data.statusResponse });
        
    },
    onError: (error) => {
        console.error("error", error);
        // settings.transcript.messages.push({ id: settings.transcript.messages.length + 1, type: "status", text: error.message });
    }

}
);

const nextMessage = ref("");
const sendChat = async () => {
    mutate(nextMessage.value);
    
    
    };
</script>

<style scoped>
.message-container {
    margin-bottom: 10px;
}

.message {
    background-color: #f2f2f2;
    padding: 10px;
    margin-bottom: 5px;
}

.input-container {
    display: flex;
    align-items: center;
}

.welcome-screen {
    background-image: url('images/gbot-cad-2.png');
    background-size: cover;
    background-position: center;
}
</style>
