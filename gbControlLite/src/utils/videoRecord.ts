import { FFmpeg } from '@ffmpeg/ffmpeg';
import type { LogEvent } from '@ffmpeg/ffmpeg/dist/esm/types'
import { fetchFile, toBlobURL } from '@ffmpeg/util'
import { Filesystem, Directory, Encoding } from '@capacitor/filesystem';
const baseURL = 'https://unpkg.com/@ffmpeg/core-mt@0.12.6/dist/esm'

export class VideoRecorder {
    public frames: any = [];
    private ffmpeg = new FFmpeg();
    private base64ToBlob(base64: string, mimeType: string = "img/jpeg"): Blob {
        const byteString = atob(base64);
        const ab = new ArrayBuffer(byteString.length);
        const ia = new Uint8Array(ab);
        for (let i = 0; i < byteString.length; i++) {
            ia[i] = byteString.charCodeAt(i);
        }
        return new Blob([ab], {type: mimeType});
    }
    
    public addFrame(base64: string): void {
        this.frames.push(base64);
    }
    constructor() {
        console.log("VIDCHANGE STEP 0");
        // this.ffmpeg.setLogger((log) => console.log(log));
        // console.log("VIDCHANGE 2");
    }

    public async saveVideo(): Promise<void> {
        console.log("VIDCHANGE 3.5");
        await this.ffmpeg.load({
            coreURL: await toBlobURL(`${baseURL}/ffmpeg-core.js`, 'text/javascript'),
            wasmURL: await toBlobURL(`${baseURL}/ffmpeg-core.wasm`, 'application/wasm'),
            workerURL: await toBlobURL(`${baseURL}/ffmpeg-core.worker.js`, 'text/javascript')
          });
        console.log("VIDCHANGE 4");
        // Convert each base64 image to a file
        this.frames.forEach(async (base64Image, index) => {
            const blob = this.base64ToBlob(base64Image, 'image/jpeg');
            const file = new File([blob], `frame${index}.jpg`);
            this.ffmpeg.writeFile(`frame${index}.jpg`, await fetchFile(file));
        });

        console.log("VIDCHANGE 5");

        const date = new Date();
        console.log(`Video saved at ${date.toISOString()}`);
        const vidTitle = `GB-${date.getDate()}-${date.getMonth()}-${date.getFullYear()}T${date.getHours()}-${date.getMinutes()}.mp4`;
        console.log("VIDCHANGE 6 - ", vidTitle);
        // Encode the frames into an MP4 video
        await this.ffmpeg.exec(['-framerate', '10', '-i', 'frame%d.jpg', vidTitle]);
        console.log("VIDCHANGE 7");
        
        // const data = await this.ffmpeg.readFile(vidTitle);
        // const videoBlob = new Blob([data.buffer], { type: 'video/mp4' });

        // return videoBlob;
    }
}