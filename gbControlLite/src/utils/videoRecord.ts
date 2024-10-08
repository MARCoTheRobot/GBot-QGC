import { FFmpeg } from '@ffmpeg/ffmpeg';
import type { LogEvent } from '@ffmpeg/ffmpeg/dist/esm/types'
import { fetchFile, toBlobURL } from '@ffmpeg/util'
import { Filesystem, Directory, Encoding } from '@capacitor/filesystem';
const baseURL = 'https://unpkg.com/@ffmpeg/core-mt@0.12.6/dist/esm'

export class VideoRecorder {
    public frames: any = [];
    public numFrames = 0;
    private ffmpeg = new FFmpeg();
    public vidpath = "";
    private base64ToBlob(base64: string, mimeType: string = "img/jpeg"): Blob {
        const byteString = atob(base64);
        const ab = new ArrayBuffer(byteString.length);
        const ia = new Uint8Array(ab);
        for (let i = 0; i < byteString.length; i++) {
            ia[i] = byteString.charCodeAt(i);
        }
        return new Blob([ab], {type: mimeType});
    }
    
    public async addFrame(base64: string): Promise<void> {
        this.numFrames++;
        // this.frames.push(base64);
        // console.log("VIDCHANGE FRAMES: ", this.frames);
        const path = `${this.vidpath}/frame-${this.numFrames}.jpg`;
        await Filesystem.writeFile({
            path: path,
            data: `data:image/jpg;base64,${base64.toString()}`,
            directory: Directory.Documents,
            // encoding: Encoding.UTF8
        });
        console.log("VIDCHANGE 12.5");
    }

    constructor() {
        console.log("VIDCHANGE STEP 0");
        // this.ffmpeg.setLogger((log) => console.log(log));
        // console.log("VIDCHANGE 2");
    }

    public async saveVideoOLD(): Promise<void> {
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
    public async startRecording(): Promise<void> {
        this.numFrames = 0;
        console.log("VIDCHANGE 9");
        // As a test, just use capacitor filesystem to save the images as jpgs
        const date = new Date();
        const vidTitle = `GB-${date.getDate()}-${date.getMonth()}-${date.getFullYear()}T${date.getHours()}-${date.getMinutes()}.mp4`;
        console.log("VIDCHANGE 6 - ", vidTitle);
        const vidPath = `guardbot/videos/${vidTitle}`;
        this.vidpath = vidPath;
        console.log("VIDCHANGE 10");
        try{
        await Filesystem.mkdir({
            path: vidPath,
            directory: Directory.Documents,
            recursive: true
    });
} catch (e) {
    console.log("Directory already exists");
}
    }

    public async saveVideo(): Promise<void> {
        
    // console.log("VIDCHANGE 11");
    //     this.frames.forEach(async (base64Image, index) => {
    //         console.log("VIDCHANGE 12.25: The base64 image is: ", base64Image);
    //         const blob = this.base64ToBlob(base64Image, 'image/jpeg');
    //         const file = new File([blob], `frame${index}.jpg`);
            
    //         console.log("VIDCHANGE 12");
           
    //         console.log("VIDCHANGE 12.26: The path is: ", path);
    //         console.log("VIDCHANGE 12.27: The directory is: ", Directory.Documents);
    //         console.log("VIDCHANGE 12.28: The blob is: ", blob);

           
    //     });
    //     console.log("VIDCHANGE 13");
    console.log("VIDCHANGE 13: PREPARING TO LOAD");
    await this.ffmpeg.load({
        coreURL: await toBlobURL(`${baseURL}/ffmpeg-core.js`, 'text/javascript'),
        wasmURL: await toBlobURL(`${baseURL}/ffmpeg-core.wasm`, 'application/wasm'),
        workerURL: await toBlobURL(`${baseURL}/ffmpeg-core.worker.js`, 'text/javascript')
      });
    console.log("VIDCHANGE 13.5: LOADED");
    await this.ffmpeg.exec(['-framerate', '10', '-i', `${this.vidpath}/frame-%d.jpg`, `${this.vidpath}/video.mp4`]);
    console.log("VIDCHANGE 14");
    }
    
}