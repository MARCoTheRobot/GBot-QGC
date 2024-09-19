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
const SAMPLE_RATE = 16000;
window.AudioContext = window.AudioContext || window.webkitAudioContext;

const context = new AudioContext({sampleRate: SAMPLE_RATE});

function playSound(arr) {
    console.log("The arr is ", arr)
  const buf = new Float32Array(arr.length)
  for (let i = 0; i < arr.length; i++) buf[i] = arr[i] / 128.0 - 1.0
  console.log("buf", buf)
  const buffer = context.createBuffer(1, buf.length, context.sampleRate)
  buffer.copyToChannel(buf, 0)
  const source = context.createBufferSource();
  source.buffer = buffer;
  source.connect(context.destination);
  source.start(0);
  const canvas = document.getElementById('canvas');
            const ctx = canvas.getContext('2d');
            ctx.clearRect(0, 0, canvas.width, canvas.height);
            console.log("The data length is:", buf.length);
            ctx.beginPath();
            ctx.moveTo(0, canvas.height / 2);

            for (let i = 0; i < buf.length; i++) {
                const x = i;
                const y = canvas.height / 2 - buf[i];
                ctx.lineTo(x, y);
            }

            ctx.stroke();
}

function sineWaveAt(sampleNumber, tone) {
  const sampleFreq = context.sampleRate / tone
//   return Math.sin(sampleNumber / (sampleFreq / (Math.PI * 2)))
    return Math.floor(128 + 127 * Math.sin(sampleNumber * 2 * Math.PI / sampleFreq));
}

const arr = new Uint8Array(12800);
// const arr = [];
 const volume = .1,
  seconds = 1,
  tone = 444

for (let i = 0; i < context.sampleRate * seconds; i++) {
  arr[i] = sineWaveAt(i, tone) * volume
}

console.log("The arr is ", arr)

const playAudio = () => {
playSound(arr)
}

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
