<template>
    <div>
        <div class="message-container">
            <div>
                <canvas id="canvas" width="12800" height="300"></canvas>
            </div>
            <div class="flex flex-row w-full">
                <div class="flex flex-col w-1/2">
                    <div v-for="message in messages" :key="message.id" class=" message">
                        {{ message.text }}
                    </div>
                </div>
                <div class="w-1/2">
                    <Image :src="`data:image/jpeg;base64,${imgBuffer}/wpxa3YH//Z`" alt="PrimeVue logo" class="z-10" />
                </div>
            </div>

        </div>
        <div class="input-container">
            <InputText v-model="SAMPLE_RATE" placeholder="Type your message" />
            <!-- <Button label="Send" @click="sendMessage" @keyup.enter="sendMessage" /> -->
        </div>
        <div class="input-container">
            <InputText v-model="nextMessage" placeholder="Type your chat" />
            <Button label="Send" @click="playAudio" />
        </div>

        <Button label="Start/Stop Microphone" @click="startStopMicrophone" />
        <Button label="Start/Stop Video" @click="handleVideoSelect" />
        <div>
            {{ audioChunks }}
        </div>
    </div>
</template>

<script setup>
import InputText from 'primevue/inputtext';
import Button from 'primevue/button';
import { ref } from 'vue';
// import { CallAudio } from '@/assets/audio/CallingChunks';
import Image from 'primevue/image';
import { Buffer } from 'buffer';
import { UDP } from '@nws/capacitor-udp'
import { EComm } from '@/utils/externalComm';
import { useMutation } from '@tanstack/vue-query';
import http from '@/lib/http';
import { toUrl } from '@/lib/utils';
import { arrayBufferToAudioBuffer } from 'arraybuffer-to-audiobuffer';
import { Filesystem, Directory, Encoding } from '@capacitor/filesystem';

const audioChunks = ref([]);
const microphoneOn = ref(false);
let mediaRecorder;
const startStopMicrophone = async () => {
    let stream;
    if (!microphoneOn.value) {
        try {
            if (navigator.mediaDevices && navigator.mediaDevices.getUserMedia) {
                stream = await navigator.mediaDevices.getUserMedia({ audio: true });
            } else {
                console.error('getUserMedia is not supported in this browser.');
                return;
            }
            mediaRecorder = new MediaRecorder(stream);
            mediaRecorder.ondataavailable = (event) => {
                console.log("The event is ", event);

                const reader = new FileReader();
                reader.onloadend = () => {
                    const arrayBuffer = reader.result;
                    const uint8Array = new Uint8Array(arrayBuffer);
                    console.log("Uint8Array: ", uint8Array);
                };
                const dat = reader.readAsArrayBuffer(event.data);
                console.log("The data is ", dat);
                
                audioChunks.value.push(event.data);
               
            };
            mediaRecorder.start(1005);
            microphoneOn.value = true;
            console.log("Microphone started");
        } catch (error) {
            console.error('Error accessing microphone:', error);
        }
    } else {
        mediaRecorder.stop();
        microphoneOn.value = false;
        console.log("Microphone stopped");
        const audioBlob = new Blob(audioChunks.value, { type: 'audio/wav' });
                const audioUrl = URL.createObjectURL(audioBlob);
                const audioPlayer = document.createElement('audio');
                audioPlayer.controls = true;
                audioPlayer.src = audioUrl;
                document.body.appendChild(audioPlayer);
    }
};


import { onMounted } from 'vue';

const generateNoisePattern = () => {
    const canvas = document.getElementById('canvas');
    const ctx = canvas.getContext('2d');
    const width = canvas.width;
    const height = canvas.height;

    const drawNoise = () => {
        const imageData = ctx.createImageData(width, height);
        const buffer32 = new Uint32Array(imageData.data.buffer);
        const len = buffer32.length;

        for (let i = 0; i < len; i++) {
            buffer32[i] = (255 << 24) | (Math.random() * 255 << 16) | (Math.random() * 255 << 8) | Math.random() * 255;
        }

        ctx.putImageData(imageData, 0, 0);
    };

    setInterval(drawNoise, 1000 / 10);
};


let mediaRecorder2 = null;
const recordedChunks = [];

const startRecording = (canvas) => {
	console.log("VIDCHANGE ABC: START RECORDING");
  const stream = canvas.captureStream(10); // 10 frames per second
  mediaRecorder2 = new MediaRecorder(stream, { mimeType: 'video/webm; codecs=vp9' });

  mediaRecorder2.ondataavailable = (event) => {
 
		console.log("VIDCHANGE ABD: MADE IT TO THE EVENT");
      recordedChunks.push(event.data);
  
  };

  mediaRecorder2.onstart = () => {
      console.log("vidchange: MediaRecorder started");
    };


    mediaRecorder2.onerror = (event) => {
      console.error("vidchange: MediaRecorder error:", event);
    };
	
  mediaRecorder2.start(1100);

};

const stopRecording = () => {
	console.log("VIDCHANGE XYZ: STOP RECORDING");
  if (mediaRecorder2) {
    mediaRecorder2.stop();
	console.log("VIDCHANGE XXX: STOP RECORDING");
    mediaRecorder2.onstop = async () => {
		 console.log("VIDCHANGE: The recorded chunks are: ", recordedChunks);
      const blob = new Blob(recordedChunks, { type: 'video/webm' });
	  console.log("VIDCHANGE Y2Y: STOP RECORDING, ", blob);
      const url = URL.createObjectURL(blob);
	  console.log("VIDCHANGE YYY: STOP RECORDING, ", url);
      const data = await blobToBase64(blob);
    const videoElement = document.createElement('video');
    videoElement.controls = true;
    videoElement.src = data;
    document.body.appendChild(videoElement);
    Filesystem.writeFile({
        path: 'recorded_video.webm',
        data: data,
        directory: Directory.Documents,
        // encoding: Encoding.UTF8
    }).then(() => {
        console.log('Video saved successfully.');
    }).catch((error) => {
        console.error('Error saving video:', error);
    });
    };
  }
};

function blobToBase64(blob) {
  return new Promise((resolve, _) => {
    const reader = new FileReader();
    reader.onloadend = () => resolve(reader.result);
    reader.readAsDataURL(blob);
  });
}

const handleVideoSelect = () => {
    const canvas = document.getElementById('canvas');
    if (canvas) {
        if (mediaRecorder2) {
            stopRecording();
            mediaRecorder2 = null;
        } else {
            startRecording(canvas);
        }
    }
};

onMounted(() => {
    generateNoisePattern();
});
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
</style>
