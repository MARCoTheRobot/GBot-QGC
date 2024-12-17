<template>
	<div class="flex flex-col gap-2 overflow-y-auto">
		<!--Video display-->
		<div class="fixed top-0 right-0 w-[78.333%] h-screen overflow-hidden z-0">
			<canvas id="videoCanvas" class="w-full h-full" />
			<img :src="`data:image/jpeg;base64,${robot.videoBuffer}`" alt="PrimeVue logo"
				class="hidden w-screen h-screen" id="img2" />

		</div>

		<!--Quick controls dock-->
		<Dock :model="dockItems" position="bottom" class="z-1">
			<template #icon="{ item }">
				<div class="w-full" @click="item.action($event)" aria-haspopup="true" aria-controls="overlay_menu">
					<img :src="item.icon" alt="icon" class="w-full" />
				</div>
			</template>
		</Dock>
		<Menu ref="settingsMenu" id="overlay_menu" :model="menuItems" :popup="true" />


		<!--Confirm video recording popup-->
		<ConfirmPopup group="recording">
			<template #message="slotProps">
				{{ slotProps.message.message }}
			</template>
		</ConfirmPopup>

		<!-- <TranscriptDialog :open="true" /> -->
	</div>


	<Joystick id="joystick" :size="100" class="fixed bottom-4 right-4" base-color="#9FA9B7"
		stick-color="linear-gradient(135deg, #515E70 100%, #59687C 0%)" :throttle="100" @start="joystickStartEvent"
		@stop="joystickStopEvent" @move="joystickMoveEvent" />

</template>

<script setup lang="ts">
import { ref, watch, computed, onMounted } from "vue";
import { useRouter } from "vue-router";
import useSettingsStore from "@/store/settings";
const settings = useSettingsStore();
import Video3D from "@/assets/icons/dock/video-3d.png";
import Audio3D from "@/assets/icons/dock/speak-3d.png";
import Settings3D from "@/assets/icons/dock/settings-3d.png";
import Chat3D from "@/assets/icons/dock/chat-3d.png";
import ConfirmPopup from "primevue/confirmpopup";
import { useConfirm } from "primevue/useconfirm";
import { useToast } from "primevue/usetoast";
import Dock from "primevue/dock";
import Image from "primevue/image";
// import TranscriptDialog from "@/components/TranscriptDialog.vue";
import Joystick from 'vue-joystick-component'
import Menu from "primevue/menu";
import { storeToRefs } from "pinia";

import useRobotStore from "@/store/robot";
import { doc } from "firebase/firestore";
import { Filesystem, Directory, Encoding } from '@capacitor/filesystem';

const robot = useRobotStore();

const { videoBuffer } = storeToRefs(robot);

watch(videoBuffer, (newVal) => {
	const canvas = document.getElementById('videoCanvas') as HTMLCanvasElement;
	const ctx = canvas.getContext('2d');
	const img = document.getElementById('img2') as HTMLImageElement;
	img.onload = () => {
		ctx.drawImage(img, 0, 0, canvas.width, canvas.height);
		requestAnimationFrame(() => {
			img.src = `data:image/jpeg;base64,${newVal}`;
		})
	}
	// img.src = `data:image/jpeg;base64,${newVal}`;
})

const joystickStartEvent = () => {
	console.log('start')
}
const joystickStopEvent = () => {
	console.log('stop')
	robot.joystick = [0, 0];
}
const joystickMoveEvent = ({ x, y, direction, distance }) => {
	console.log(x, y, direction, distance);
	robot.joystick = [x, y];
	// robot.useSendJoystick([x,y]);
}
const confirm = useConfirm();
// import MarcoAvatar from '@/components/marco-avatar.vue';
// import { storeToRefs } from "pinia";
const toast = useToast();
const router = useRouter();

const settingsMenu = ref();

// Create the dock items for quick controls of the robot
const dockItems = ref<any>([
	{
		icon: Video3D,
		label: "Record Video",
		action: (event: any) => {
			confirm.require({
				target: event.target,
				group: "recording",
				position: "top",
				message: robot.isRecordingVideo ? "Stop recording video?" : "Start recording video?",
				icon: "pi pi-exclamation-triangle",
				accept: () => {
					// Start recording video
					robot.isRecordingVideo = !robot.isRecordingVideo;
					if (robot.isRecordingVideo) {
						startRecording(document.getElementById('videoCanvas') as HTMLCanvasElement);
					}
					else {
						stopRecording();
					}
					toast.add({ severity: "success", summary: `${robot.isRecordingVideo ? 'Started recording' : 'Stopped Recording'}`, life: 3000 });
				},
				reject: () => {
					// Cancel recording video
					toast.add({ severity: "info", summary: "Recording cancelled", life: 3000 });
				},
			});
		}
	},
	{
		icon: Chat3D,
		label: "Transcript",
		action: (event: any) => {
			settings.transcript.show = !settings.transcript.show;
			// settings.transcript.messages = [];

			const nextMessages = [
				{
					text: "Drive forward 60 feet.",
					timestamp: new Date().getTime(),
					type: "user",
				},
				{
					text: "Driving forward 60 feet.",
					timestamp: new Date().getTime(),
					type: "status",
				},
				{
					text: "Drove forward 60 feet.",
					timestamp: new Date().getTime(),
					type: "status"
				},
				{
					from: "user",
					text: "Listen and transcribe what you hear",
					timestamp: new Date().getTime(),
					type: "user"
				},
				{
					text: "Listening now...",
					timestamp: new Date().getTime(),
					type: "status"
				},
				{
					text: "Here, will you look at this, I can’t believe that there’s this much garbage around here. I swear it is...",
					timestamp: new Date().getTime(),
					type: "liveTranscription"
				},
			];

			// const addInterval = setInterval(() => {
			// 	settings.transcript.messages.push(nextMessages.shift());
			// 	if(nextMessages.length === 0){
			// 		clearInterval(addInterval);
			// 	}
			// }, 2000);
		}
	},
	{
		icon: Audio3D,
		label: "Record Audio",
		action: () => {
			startStopMicrophone();
		}
	},
	{
		icon: Settings3D,
		label: "Settings",
		action: (event) => {
			settingsMenu.value.toggle(event)
		}
	}
]);

const menuItems = [
	{
		label: "Manual Control",
		icon: "pi pi-sliders-v",
		command: () => {
			robot.state = robot.states['manual'];
			toast.add({ severity: 'info', summary: 'Set to Manual Control', life: 3000 });
		},
	},
	{
		label: "Follow Me",
		icon: "pi pi-eye",
		command: () => {
			robot.state = robot.states['yolo'];
			toast.add({ severity: 'info', summary: 'Set to Follow Me', life: 3000 });
		},
	},
	{
		label: "Audio",
		icon: "pi pi-volume-up",
		command: () => {
			robot.state = robot.states['audio'];
			toast.add({ severity: 'info', summary: 'Set to Audio Only', life: 3000 });

		},
	},
	{
		label: 'Reboot',
		icon: 'pi pi-refresh',
		command: () => {
			robot.reboot();
			toast.add({ severity: 'info', summary: 'Rebooting', life: 3000 });
		}
	},
	{
		label: 'Shutdown',
		icon: 'pi pi-power-off',
		command: () => {
			robot.shutdown();
			toast.add({ severity: 'warn', summary: 'Shutting down...', life: 3000 });

		}
	}
]

const transcriptVisible = ref<boolean>(false);


let mediaRecorder: MediaRecorder | null = null;
const recordedChunks: Blob[] = [];

const startRecording = async (canvas: HTMLCanvasElement) => {
	console.log("VIDCHANGE ABC: START RECORDING");
	const videoStream = canvas.captureStream(10); // 10 frames per second
	videoStream.addTrack(robot.audioStream.stream.getAudioTracks()[0]);

	// Request access to the user's microphone
	const audioStream = robot.audioStream;

	console.log("VIDCHANGE ABC: VIDEO STREAM IS ", videoStream);
	console.log("VIDCHANGE ABC: AUDIO STREAM IS ", audioStream);

	// Combine the video and audio streams
	const combinedStream = new MediaStream([...videoStream.getVideoTracks(), ...audioStream.stream.getAudioTracks()]);
	console.log("VIDCHANGE ABC: COMBINED STREAM IS ", combinedStream);
	// const combinedStream = new MediaStream([...videoStream.getAudioTracks()]);

	mediaRecorder = new MediaRecorder(videoStream, {
		mimeType: 'video/webm; codecs=vp9,opus'
	});

	mediaRecorder.ondataavailable = (event) => {

		console.log("VIDCHANGE ABD: MADE IT TO THE EVENT");
		console.log("VIDCHANGE: The event is ", event);
		recordedChunks.push(event.data);

	};

	mediaRecorder.onstart = () => {
		console.log("vidchange: MediaRecorder started");
	};


	mediaRecorder.onerror = (event) => {
		console.error("vidchange: MediaRecorder error:", event);
	};

	mediaRecorder.start(1100);

};

const stopRecording = () => {
	console.log("VIDCHANGE XYZ: STOP RECORDING");
	if (mediaRecorder) {
		mediaRecorder.stop();
		console.log("VIDCHANGE XXX: STOP RECORDING");
		mediaRecorder.onstop = async () => {
			console.log("VIDCHANGE: The recorded chunks are: ", recordedChunks);
			const blob = new Blob(recordedChunks, { type: 'video/webm' });
			console.log("VIDCHANGE Y2Y: STOP RECORDING, ", blob);
			//   const url = URL.createObjectURL(blob);
			const data = await blobToBase64(blob);
			console.log("VIDCHANGE YYY: STOP RECORDING DATA IS, ", data);
			const vidDateFormatted = new Date().toISOString().replace(/:/g, '-');
			// const videoElement = document.createElement('video');
			
			// videoElement.controls = true

			// TODO: UNCOMMENT ALL THIS BELOW TO SAVE THE VIDEO
			Filesystem.writeFile({
				path: `gb-recorded_video-${vidDateFormatted}.webm`,
				data: data,
				directory: Directory.Documents,
				// encoding: Encoding.UTF8
			}).then(() => {
				toast.add({ severity: 'success', summary: 'Video saved successfully', life: 3000 });
				// console.log('Video saved successfully.');
			}).catch((error) => {
				toast.add({ severity: 'error', summary: 'Error saving video', life: 3000 });
				// console.error('Error saving video:', error);
			});
			console.log("VIDCHANGE DDD: STOP RECORDING");
			//   window.URL.revokeObjectURL(url);
			console.log("VIDCHANGE POOEP: STOP RECORDING");
		};
	}
};

function blobToBase64(blob: Blob): Promise<string> {
	return new Promise((resolve, _) => {
		const reader = new FileReader();
		reader.onloadend = () => resolve(reader.result);
		reader.readAsDataURL(blob);
	});
}

const microphoneOn = ref(false);
let audioRecorder: MediaRecorder | null = null;
let audioContext: AudioContext | null = null;
let microphoneStream: MediaStream | null = null;
let scriptProcessor: ScriptProcessorNode | null = null;

const startStopMicrophoneOLD = async () => {
	let stream;
	if (!microphoneOn.value) {
		try {
			if (navigator.mediaDevices && navigator.mediaDevices.getUserMedia) {
				stream = await navigator.mediaDevices.getUserMedia({ audio: true });
				toast.add({ severity: 'success', summary: 'Microphone started', life: 3000 });
			} else {
				console.error('getUserMedia is not supported in this browser.');
				toast.add({ severity: 'error', summary: 'Microphone not supported', life: 3000 });
				return;
			}
			audioRecorder = new MediaRecorder(stream);
			audioRecorder.ondataavailable = (event) => {
				console.log("The event is ", event);

				const reader = new FileReader();
				reader.onloadend = () => {
					let arrayBuffer = reader.result as ArrayBuffer;
					console.warn("MICDAT: The array buffer is ", arrayBuffer);
					// You don't need Float32Array here if you're sending 8-bit PCM to the server
					if (arrayBuffer.byteLength % 4 !== 0) {
						const newArrayBuffer = new ArrayBuffer(Math.ceil(arrayBuffer.byteLength / 4) * 4);
						const tempView = new Uint8Array(newArrayBuffer);
						tempView.set(new Uint8Array(arrayBuffer)); // Copy data into padded buffer
						arrayBuffer = newArrayBuffer;
						}
					const float32Array = new Float32Array(arrayBuffer);
					const uint8Array = new Uint8Array(arrayBuffer);

					const convertedFloat32Array = convertUint8ToFloat32(uint8Array);
					// // Convert the data to match your 8-bit PCM format (if needed)
					// // Assuming the input is 16-bit PCM or another format
					// const convertedUint8Array = new Uint8Array(uint8Array.length / 2); // Adjust based on actual input
					// for (let i = 0; i < convertedUint8Array.length; i++) {
					// 	// Convert 16-bit PCM (if applicable) to 8-bit PCM
					// 	// For example, take every 2nd byte (simple downsampling)
					// 	convertedUint8Array[i] = uint8Array[i * 2] / 256; // Adjust as needed based on your input format
					// }

					// Send it to the UDP Server
					console.warn("MICDAT: ", float32Array);
					console.warn("MICDATA: ROBOT MIC FORMAT SELECTOR IS ", robot.micFormatSelector);
					if(robot.micFormatSelector === 0)
						robot.sendMicData(arrayBuffer);
					else if(robot.micFormatSelector === 2)
						robot.sendMicData(float32Array);
					else if(robot.micFormatSelector === 1)
						robot.sendMicData(uint8Array);
					else if(robot.micFormatSelector === 3)
						robot.sendMicData(convertedFloat32Array);
					else
						robot.sendMicData(arrayBuffer);
				};
				const dat = reader.readAsArrayBuffer(event.data);
				console.log("The data is ", dat);

				// audioChunks.value.push(event.data);

			};
			audioRecorder.start(250);
			microphoneOn.value = true;
			console.log("Microphone started");
		} catch (error) {
			console.error('Error accessing microphone:', error);
		}
	} else {
		audioRecorder.stop();
		microphoneOn.value = false;
		console.log("Microphone stopped");
		toast.add({ severity: 'info', summary: 'Microphone stopped', life: 3000 });
		// const audioBlob = new Blob(audioChunks.value, { type: 'audio/wav' });
		//         const audioUrl = URL.createObjectURL(audioBlob);
		//         const audioPlayer = document.createElement('audio');
		//         audioPlayer.controls = true;
		//         audioPlayer.src = audioUrl;
		//         document.body.appendChild(audioPlayer);
	}
};

const startStopMicrophone = async () => {
  if (!microphoneOn.value) {
    try {
      // Step 1: Request access to the user's microphone
      if (navigator.mediaDevices && navigator.mediaDevices.getUserMedia) {
        microphoneStream = await navigator.mediaDevices.getUserMedia({ audio: true });
        toast.add({ severity: 'success', summary: 'Microphone started', life: 3000 });

        // Step 2: Create an AudioContext for processing the audio
        audioContext = new AudioContext();
        const source = audioContext.createMediaStreamSource(microphoneStream);

        // Step 3: Create a ScriptProcessorNode to handle audio data in chunks
        scriptProcessor = audioContext.createScriptProcessor(robot.micBufferSelection, 1, 1); // 4096 samples, 1 input, 1 output
        
        // Step 4: Process audio data and convert it to Float32Array
        scriptProcessor.onaudioprocess = (audioEvent) => {
          const inputBuffer = audioEvent.inputBuffer;
          const channelData = inputBuffer.getChannelData(0); // Get data for channel 0 (mono)
			// Step 1: Downsample to 16kHz
			const downsampledData = downsampleBuffer(channelData, 48000, 16000);

          // Convert the channel data (which is already Float32Array)
          const audioData = new Float32Array(downsampledData);
		  const uint8Array = new Uint8Array(audioData.buffer);
		  
          // Step 5: Send the audio data to the server
		  console.warn("MICDATA: ROBOT MIC FORMAT SELECTOR IS ", robot.micFormatSelector);
		  switch(robot.micFormatSelector){
			  case 0:
				console.warn("MICDATA: SENDING ARRAY BUFFER: ", audioData.buffer);
          		robot.sendMicData(audioData.buffer);
				break;
			  case 1:
				
			  console.warn("MICDATA: SENDING Uint8: ", uint8Array);
		  		robot.sendMicData(uint8Array);
				break;
			  case 2:
				console.warn("MICDATA: SENDING Float32: ", audioData);
		  		robot.sendMicData(audioData);
				break;
			  case 3:
				const convertedFloat32Array = convertUint8ToFloat32(uint8Array);
				console.warn("MICDATA: SENDING CONVERTED Float32: ", convertedFloat32Array);
		  		robot.sendMicData(convertedFloat32Array);
				break;
			  case 4:
				const convertedFloat32Array2 = new Float32Array(audioData.buffer);
				console.warn("MICDATA: SENDING CONVERTED Float32: ", convertedFloat32Array2);
		  		robot.sendMicData(convertedFloat32Array2);
				break;
			default:
				robot.sendMicData(audioData);
		  }

        };

        // Connect the script processor to the audio source and context
        source.connect(scriptProcessor);
        scriptProcessor.connect(audioContext.destination); // Output to speakers if needed

        microphoneOn.value = true;
      } else {
        console.error('getUserMedia is not supported in this browser.');
        toast.add({ severity: 'error', summary: 'Microphone not supported', life: 3000 });
        return;
      }
    } catch (err) {
      console.error(err);
      toast.add({ severity: 'error', summary: 'Error accessing microphone', life: 3000 });
    }
  } else {
    // Stop microphone and audio processing
    if (audioContext && scriptProcessor) {
      scriptProcessor.disconnect();
      audioContext.close();
      microphoneOn.value = false;
      toast.add({ severity: 'success', summary: 'Microphone stopped', life: 3000 });
    }
  }
};


// Function to downsample buffer
const downsampleBuffer = (buffer: Float32Array, inSampleRate: number, outSampleRate: number): Float32Array => {
  if (outSampleRate === inSampleRate) {
    return buffer; // No resampling needed if rates match
  }
  
  const sampleRatio = inSampleRate / outSampleRate;
  const newLength = Math.round(buffer.length / sampleRatio);
  const result = new Float32Array(newLength);

  let offsetResult = 0;
  let offsetBuffer = 0;

  while (offsetResult < result.length) {
    const nextOffsetBuffer = Math.round((offsetResult + 1) * sampleRatio);
    let accum = 0, count = 0;

    for (let i = offsetBuffer; i < nextOffsetBuffer && i < buffer.length; i++) {
      accum += buffer[i];
      count++;
    }

    result[offsetResult] = accum / count; // Average the samples for simple downsampling
    offsetResult++;
    offsetBuffer = nextOffsetBuffer;
  }

  return result;
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

onMounted(() => {
	// Once the home screen mounts, ping the robot
	// userStore.pingBot();
	// robot.camComm.initialize();
})



</script>

<style>
.box {
	--border-angle: 0turn;
	--main-bg: conic-gradient(from var(--border-angle), rgb(17, 41, 51), rgb(17, 34, 34) 5%, #112 60%, rgb(17, 49, 51) 95%);
	border: solid 5px transparent;
	border-radius: 2em;
	--gradient-border: conic-gradient(from var(--border-angle), transparent 25%, #08f, rgb(199, 212, 194) 99%, transparent);
	background:
		var(--main-bg) padding-box,
		var(--gradient-border) border-box,
		var(--main-bg) border-box;
	background-position: center center;
	-webkit-animation: bg-spin 3s linear infinite;
	animation: bg-spin 3s linear infinite;
}

@-webkit-keyframes bg-spin {
	to {
		--border-angle: 1turn;
	}
}

@keyframes bg-spin {
	to {
		--border-angle: 1turn;
	}
}

@property --border-angle {
	syntax: "<angle>";
	inherits: true;
	initial-value: 0turn;
}

#joystick .joystick__stick {
	background: linear-gradient(135deg, #515E70 100%, #59687C 0%);
	box-shadow: 1px 1px 2px 0px rgba(122, 142, 169, 0.30) inset, -1px -1px 2px 0px rgba(48, 56, 67, 0.50) inset, -9px 9px 18px 0px rgba(48, 56, 67, 0.20), 9px -9px 18px 0px rgba(48, 56, 67, 0.20), -9px -9px 18px 0px rgba(122, 142, 169, 0.90), 9px 9px 23px 0px rgba(48, 56, 67, 0.90);
}
</style>
