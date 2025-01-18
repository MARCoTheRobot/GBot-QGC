import http from "@/lib/http";
import { toUrl } from "@/lib/utils";
import { requestBody } from "@/data/requestbody";


export const genSpeech = async (text: string, voiceProfile: string = 'en-US-Standard-D') => {

    // const key = ["generateSpeech"];
    const request = JSON.parse(JSON.stringify(requestBody));
    request.voiceProfile = voiceProfile;
    request.text = text;
    const res = await http({
        url: "https://generatespeech-kl3exemiua-uc.a.run.app", // NOTE: This is only for now to generate the speech TODO: uncomment for production
        // url: 'http://127.0.0.1:5001/guardbot-qgc/us-central1/generateSpeech',
        method: "POST",
        data: request,
    });
    
    return res;

};
