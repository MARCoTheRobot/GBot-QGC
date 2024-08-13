import useUserStore from "@/store/user";
const sfxAudio = new Audio();
const bkgAudio = new Audio();
const marcoAudio = new Audio();

marcoAudio.addEventListener("ended", () => {
  const avatar = useUserStore();
    avatar.headState = "bobrotate";
    if (avatar.marcoEmotion == "happy") {
			avatar.mouthState = "smile";
		} else if (avatar.marcoEmotion == "sad") {
			avatar.mouthState = "frown";
		} else if (avatar.marcoEmotion == "neutral") {
			avatar.mouthState = "neutral";
		} else {
			avatar.mouthState = "smile";
		}
  });

export function playMARCoAudio(dataURI: string) {
  try {
    marcoAudio.pause();
  } catch (e) {
    console.error("Error pausing MARCo audio: ", e);
  }
  marcoAudio.src = dataURI;
  marcoAudio.play();
}

export function playSFXByURL(url: string) {
  sfxAudio.src = url;
  sfxAudio.play();
}

export function stopSFX() {
  sfxAudio.pause();
}

export function startBackgroundMusic(url: string) {
  bkgAudio.src = url;
  bkgAudio.loop = true;
  bkgAudio.play();
}

export function stopBackgroundMusic() {
  bkgAudio.pause();
}

const playSFX = (url: string) => {
  try{
  sfxAudio.src = url;
  sfxAudio.play();
} catch (e) {
  console.error("Error playing SFX: ", e);
}
};

// SFX HELPER FUNCTIONS
export function playErrorSFX() {
  playSFX("assets/audio/sfx/ui-marimba-error-1.wav");
}

export function playCoinSFX() {
  playSFX("assets/audio/sfx/coin-1.mp3");
}

// export function playBLEConnectedSFX() {
//   playSFX("assets/audio/sfx/ble-connected.mp3");
// }

export function playBLESendSFX() {
  playSFX("assets/audio/sfx/marco-sender.mp3");
}

export function playBLEReceiveSFX() {
  playSFX("assets/audio/sfx/marco-receiver.mp3");
}
