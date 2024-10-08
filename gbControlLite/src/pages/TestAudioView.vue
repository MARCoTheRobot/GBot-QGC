<template>
    <div>
        <div>
            <canvas id="canvas" width="12800" height="300"></canvas>
        </div>
        <div class="message-container">
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
            <Button label="Send" @click="getChunk" @keyup.enter="getChunk" />
        </div>
        <Button label="Start/Stop Microphone" @click="startStopMicrophone" />
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

const CallAudio = ref(null);
const messages = ref([]);
const newMessage = ref('');
const sock = ref(null);
const serverAddress = ["192.168.1.208", 8043]
// const serverAddress = ['harv7.harv-guardbot.org', 8043]

const dataPrefix = {
    'connect_request': Buffer.from('\x00'),
    'connection_check': Buffer.from('\x01'),
    'ack': Buffer.from('\x02'),
    'data': Buffer.from('\x03'),
    'punch_hole': Buffer.from('\x04'),
    'address': Buffer.from('\x05'),
    'client': Buffer.from('\x00'),
    'robot': Buffer.from('\x01')
};

const dataPrefix3 = {
    video: Buffer.from("\x00"),
    detections: Buffer.from("\x01"),
    json_data: Buffer.from("\x02"),
    audio: Buffer.from("\x03"),
};

// let connectionStatus = false;
// let lastConnectionCheckTime = 0;
// const lastAckTime = 0;
// const connectionCheckInterval = 5;
// let sockID = 1

const lastAudioTime = ref(0);
const SAMPLE_RATE = ref(16000);
const CHUNK_SIZE = 3200;
const NUM_CHANNELS = 1;
const AUDIO_CONTEXT = new AudioContext({ sampleRate: SAMPLE_RATE.value });
const connectionPassword = ref('HARV7');
const myAudio = new Audio();
console.log("MSGAAA: callAudio ", CallAudio);


// const audioComm = new EComm(["10.204.56.41", 8044], "a" + connectionPassword.value, false);
const audioComm = new EComm(["harv7.harv-guardbot.org",8044], "a" + connectionPassword.value, false);

audioComm.initialize();

audioComm.receiveLoop((data) => {
    // console.log("Received:", data);
    audioCommData(data);
});

const newAudio = new Audio();
newAudio.src = "data:audio/wav;base64,";
/**
* @function audioCommData
* @param data
* @description - This function is called when data is received from the robot's Audio Communication
*/
const audioCommDataOLD = (data) => {
    
    console.log("Received data eeffee:", data.toString('base64'));
    // const dataPrefix2 = data.slice(0, 1);
    // data = data.slice(1);
    // console.log("Received audio data eeffee", dataPrefix2, dataPrefix["audio"]);

    // if (dataPrefix2.equals(dataPrefix["audio"])) {
    console.log("MSG123: Prefix is audio eeffee")
    console.log("MSG123: Received audio data eeffee", data);
    const audioData = new Uint8Array(data).buffer;
    // const base64String = btoa(String.fromCharCode.apply(null, audioData));
    // console.log("Base64 Audio Data:", base64String);
    
        const audioBuffer = AUDIO_CONTEXT.createBuffer(NUM_CHANNELS, data.length, SAMPLE_RATE.value);
        
            const nowBuffering = audioBuffer.getChannelData(0);
            for (let i = 0; i < data.length; i++) {
                if(data[i] === 0 && data[i - 1] !== 0) {
                    nowBuffering[i] = data[i-1] / 128.0 - 1.0;
                    data[i] = data[i-1];
                    
                }
                else{
                nowBuffering[i] = (data[i] / 128.0 - 1) * 0.2; // Convert from 8-bit PCM to float
                // nowBuffering[i] = data[i] - 1.0; // Convert from 8-bit PCM to float
                // nowBuffering[i] = (data[i * 2] | (data[i * 2 + 1] << 8)) / 32768.0;
                // Clamp values between -1 and 1 to prevent distortion
                nowBuffering[i] = Math.max(-1, Math.min(nowBuffering[i], 1));
            }
            }
        console.log("MSG124: Playing nowBuffering eeffee", nowBuffering);
        const source = AUDIO_CONTEXT.createBufferSource();
        source.buffer = audioBuffer;
        source.connect(AUDIO_CONTEXT.destination);
        source.start();

        
        // newAudio.src += base64String;
        // console.log("MSG12555: Playing newAudio eeffee", newAudio.src);
        // newAudio.play();
        const leBeouf = data;
    const canvas = document.getElementById('canvas');
            const ctx = canvas.getContext('2d');
            ctx.clearRect(0, 0, canvas.width, canvas.height);
            console.log("The data length is:", leBeouf.length);
            ctx.beginPath();
            ctx.moveTo(0, canvas.height / 2);

            for (let i = 0; i < leBeouf.length; i++) {
                const x = i;
                const y = canvas.height / 2 - leBeouf[i];
                ctx.lineTo(x, y);
            }

            ctx.stroke();


    // } 
};
// Function to convert Uint8Array to Float32Array
function convertUint8ToFloat32(uint8Array) {
    const float32Array = new Float32Array(uint8Array.length / 4); // 4 bytes per Float32
    const dataView = new DataView(uint8Array.buffer); // View the Uint8Array as a binary buffer

    // Loop through each 4-byte chunk and interpret it as a Float32
    for (let i = 0; i < float32Array.length; i++) {
        float32Array[i] = dataView.getFloat32(i * 4, true); // true for little-endian byte order
        // Amplify by 3
        float32Array[i] *= 10;
        // Cap it at -1 or 1
        float32Array[i] = Math.max(-1, Math.min(float32Array[i], 1));
    }

    return float32Array;
}

const audioCommData = async (data) => {
    // Convert the data to a base64 string
    data = data.slice(1);
    const uint8Data = new Uint8Array(data);
    console.log("DEBUG: transforming data:", uint8Data);
    const nowBuffering = convertUint8ToFloat32(uint8Data);
    console.log("DEBUG: Playing nowBuffering eeffee", nowBuffering);
    const audioBuffer = AUDIO_CONTEXT.createBuffer(1, nowBuffering.length, AUDIO_CONTEXT.sampleRate); // Mono, sample rate 16000 Hz
    // const nowBuffering = new Float32Array(data.length);
    // for (let i = 0; i < data.length; i++) {
    //     nowBuffering[i] = (data[i] / 128.0 - 1) * 0.4; // Convert from 8-bit PCM to float
    // }
    console.log("DEBUG: Playing nowBuffering eeffee", nowBuffering);
    audioBuffer.copyToChannel(nowBuffering, 0); // Copy to the audio buffer
        
    const bufferSource = AUDIO_CONTEXT.createBufferSource();
    bufferSource.buffer = audioBuffer;
    bufferSource.connect(AUDIO_CONTEXT.destination); // Connect to speakers
        
    bufferSource.start();

    const leBeouf = uint8Data;
    const canvas = document.getElementById('canvas');
            const ctx = canvas.getContext('2d');
            ctx.clearRect(0, 0, canvas.width, canvas.height);
            console.log("The data length is:", leBeouf.length);
            ctx.beginPath();
            ctx.moveTo(0, canvas.height / 2);

            for (let i = 0; i < leBeouf.length; i++) {
                const x = i;
                const y = canvas.height / 2 - leBeouf[i];
                ctx.lineTo(x, y);
            }

            ctx.stroke();
}


const context = new AudioContext();
const audioCommDataBOOOOOO = (arr) => {
    
    console.log("The arr is ", arr)
  const buf = new Float32Array(arr.length)
  for (let i = 0; i < arr.length; i++) buf[i] = (arr[i] / 128.0 - 1) * 0.4;
  console.log("buf", buf)
  const buffer = context.createBuffer(1, buf.length, AUDIO_CONTEXT.sampleRate)
  buffer.copyToChannel(buf, 0)
  const source = context.createBufferSource();
  source.buffer = buffer;
  source.connect(context.destination);
  source.start(0);

};

const SPEED_AFFECT = 6;
const MAX_VOLUME = 8;

const audioCommDataBAD = (data) => {
    // Convert the data to a base64 string
    const base64String = btoa(String.fromCharCode(...data));
    console.log("Received data:", base64String);
    myAudio.src = `data:audio/wav;base64,${base64String}`;
    myAudio.play();
}

const audioCommDataEH = (data) => {
    // Assuming `parent` is an object with a `motors` property
const motors = 0.5;
const maxMotorSpeed = Math.max(Math.abs(motors[0]), Math.abs(motors[1]));
const multi = Math.pow(1 - maxMotorSpeed, SPEED_AFFECT);

// Assuming `data` is an ArrayBuffer containing the audio data
// const audioContext = new (window.AudioContext || window.webkitAudioContext)();
const audioBuffer = AUDIO_CONTEXT.createBuffer(1, data.byteLength / 4, AUDIO_CONTEXT.sampleRate);
const arr = new Float32Array(data);
console.log("Received data:", arr);
for (let i = 0; i < arr.length; i++) {
    // arr[i] *= (multi * MAX_VOLUME + 1);
    // arr[i] = arr[i] / 128.0 - 1.0;
    arr[i] = (arr[i * 2] | (arr[i * 2 + 1] << 8)) / 32768.0;
}

console.log("Received data 111:", arr);

// Create an AudioBufferSourceNode
const source = AUDIO_CONTEXT.createBufferSource();
audioBuffer.copyToChannel(arr, 0);
source.buffer = audioBuffer;
source.connect(AUDIO_CONTEXT.destination);
source.start();
}
let validHeader = "";

function isValidWavBase64(base64String) {
    // Decode the base64 string to binary data
    const binaryString = atob(base64String);
    console.log("Binary String:", binaryString);
    // Check for the "RIFF" and "WAVE" headers
    const riffHeader = binaryString.slice(0, 4);
    const waveHeader = binaryString.slice(8, 12);
    
    return riffHeader === 'RIFF' && waveHeader === 'WAVE';
}

const audioCommData64 = (data) => {
let dataURI = "";
const base64String = btoa(String.fromCharCode(...data));
if (isValidWavBase64(base64String)) {
    dataURI = `data:audio/wav;base64,${base64String}`;
    console.log("MSG123: Playing newAudio eeffee", dataURI);
    const binaryStringA = atob(base64String);
    validHeader = btoa(binaryStringA.slice(0, 64));
    
} else {
    console.error("Invalid WAV base64 string: ", validHeader);
    const wavHeader = "UklGR";
    const correctedBase64String = validHeader + base64String;
    dataURI = `data:audio/wav;base64,${correctedBase64String}`;
    // newAudio.src = dataURI;
    // console.log("Corrected and playing newAudio:", dataURI);
    // newAudio.play();
}
// const dataURI = `data:audio/wav;base64,${base64String}`;
console.log("MSG123: Playing newAudio eeffee", dataURI);
// Split off the first 5 characters of the base64 string and see if they are UklGR
// If they are not, then we need to add the header to the base64 string
// if (base64String.slice(0, 5) !== "UklGR") {
//     console.log("MSG123: Adding header to base64 string eeffee");
//     const header = "UklGR";
//     dataURI = `data:audio/wav;base64,${header}${base64String}`;
// } 


newAudio.src = dataURI;
console.log("The src is:", newAudio.src);
newAudio.play();
}

const audioCommDataBackup = (data) => {
    const sampleRate = 16000 // samples per second
  const numChannels = 2 // mono or stereo
  const isFloat = false  // integer or floating point
  const [type, format] = isFloat ? [Float32Array, 3] : [Uint8Array, 1];
  
  const wavHeader = new Uint8Array(buildWaveHeader({
    numFrames: data.byteLength / type.BYTES_PER_ELEMENT,
    bytesPerSample: type.BYTES_PER_ELEMENT,
    sampleRate,
    numChannels,
    format
  }));

  console.log("The wavHeader is:", wavHeader);
  // create WAV file with header and downloaded PCM audio
  const wavBytes = new Uint8Array(wavHeader.length + data.byteLength)
  wavBytes.set(wavHeader, 0)
  wavBytes.set(data, wavHeader.length)
const base64String = btoa(String.fromCharCode(...wavBytes));
const dataURI = `data:audio/wav;base64,${base64String}`;
myAudio.src = dataURI;
    myAudio.play();
    const leBeouf = new Uint8Array(data);
    const canvas = document.getElementById('canvas');
            const ctx = canvas.getContext('2d');
            ctx.clearRect(0, 0, canvas.width, canvas.height);
            console.log("The data length is:", leBeouf.length);
            ctx.beginPath();
            ctx.moveTo(0, canvas.height / 2);

            for (let i = 0; i < leBeouf.length; i++) {
                const x = i;
                const y = canvas.height / 2 - leBeouf[i];
                ctx.lineTo(x, y);
            }

            ctx.stroke();

}


function buildWaveHeader(opts) {
  const numFrames =      opts.numFrames;
  const numChannels =    opts.numChannels || 2;
  const sampleRate =     opts.sampleRate || 44100;
  const bytesPerSample = opts.bytesPerSample || 2;
  const format =         opts.format

  const blockAlign = numChannels * bytesPerSample;
  const byteRate = sampleRate * blockAlign;
  const dataSize = numFrames * blockAlign;

  const buffer = new ArrayBuffer(44);
  const dv = new DataView(buffer);

  let p = 0;

  function writeString(s) {
    for (let i = 0; i < s.length; i++) {
      dv.setUint8(p + i, s.charCodeAt(i));
    }
    p += s.length;
}

  function writeUint32(d) {
    dv.setUint32(p, d, true);
    p += 4;
  }

  function writeUint16(d) {
    dv.setUint16(p, d, true);
    p += 2;
  }

  writeString('RIFF');              // ChunkID
  writeUint32(dataSize + 36);       // ChunkSize
  writeString('WAVE');              // Format
  writeString('fmt ');              // Subchunk1ID
  writeUint32(16);                  // Subchunk1Size
  writeUint16(format);              // AudioFormat
  writeUint16(numChannels);         // NumChannels
  writeUint32(sampleRate);          // SampleRate
  writeUint32(byteRate);            // ByteRate
  writeUint16(blockAlign);          // BlockAlign
  writeUint16(bytesPerSample * 8);  // BitsPerSample
  writeString('data');              // Subchunk2ID
  writeUint32(dataSize);            // Subchunk2Size

  return buffer;
}


const { mutate } = useMutation({
    mutationFn: async (text) => {
        return http({ url: "https://commandconversation-kl3exemiua-uc.a.run.app", method: "POST", data: { text: text, sessionID: "1234" } });
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

const getChunk = async () => {
    // const data = await UDP.receive();
    // console.log("Received data:", data);
    // audioCommData(data);
    console.log("MSG123: Getting next chunk eeffee");
        try {
            const response = await fetch('http://10.204.56.41:3000/next-chunk');
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            const data = await response.json();
            console.log("Received data:", data.data);
            audioCommData(Buffer.from(data.data));
            const leBeouf = Buffer.from(data);
            const canvas = document.getElementById('canvas');
            const ctx = canvas.getContext('2d');
            ctx.clearRect(0, 0, canvas.width, canvas.height);
            console.log("The data length is:", leBeouf.length);
            ctx.beginPath();
            ctx.moveTo(0, canvas.height / 2);

            for (let i = 0; i < leBeouf.length; i++) {
                const x = i;
                const y = canvas.height / 2 - leBeouf[i];
                ctx.lineTo(x, y);
            }

            ctx.stroke();
        } catch (error) {
            console.error('Failed to fetch the next audio chunk:', error);
        }
    
};

const microphoneOn = ref(false);
const startStopMicrophone = async () => {
    if (!microphoneOn.value) {
        try {
            if (navigator.mediaDevices && navigator.mediaDevices.getUserMedia) {
                const stream = await navigator.mediaDevices.getUserMedia({ audio: true });
            } else {
                console.error('getUserMedia is not supported in this browser.');
                return;
            }
            const mediaRecorder = new MediaRecorder(stream);
            mediaRecorder.ondataavailable = (event) => {
                const audioChunks = [];
                audioChunks.push(event.data);
                const audioBlob = new Blob(audioChunks, { type: 'audio/wav' });
                const audioUrl = URL.createObjectURL(audioBlob);
                const audio = new Audio(audioUrl);
                audio.play();
            };
            mediaRecorder.start();
            microphoneOn.value = true;
            console.log("Microphone started");
        } catch (error) {
            console.error('Error accessing microphone:', error);
        }
    } else {
        mediaRecorder.stop();
        microphoneOn.value = false;
        console.log("Microphone stopped");
    }
};
// const chunkInterval = setInterval(() => {
//     getChunk();
// }, 250);
const imgBuffer = ref('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');
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
