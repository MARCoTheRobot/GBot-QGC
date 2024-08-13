import http from "@/lib/http";
import { toUrl } from "@/lib/utils";
import { UseMutationReturnType, UseQueryReturnType, useMutation, useQuery, useQueryClient } from "@tanstack/vue-query";
import { useToast } from "primevue/usetoast";
import { requestBody } from "@/data/requestbody";
import { playMARCoAudio } from "@/lib/audio";
import { getDoc, doc } from "firebase/firestore";
import { auth, db } from "@/hooks/firebase";
import useUserStore from "@/store/user";
// Endpoint: Send Text Message
export const useSendMessage = () => {
  const userStore = useUserStore();
  return useMutation({
    mutationFn: (msg: any) => {
      console.log("Made it to the message mutation function");
      const data = JSON.parse(JSON.stringify(requestBody));
      if(msg.text){
        data.dialogText = msg.text;
    }
    if(msg.action){
      data.onboardResponse = msg.action;
    }
    console.log("The raw user data is:", userStore.rawUsrData);
    data.currentUser = JSON.parse(JSON.stringify(userStore.rawUsrData));
      console.log("We be sending:", data);
      return http({ url: toUrl(["clicked"]), method: "POST", data: data });
    },
  });
};

export const useMARCoTalk = () => {
  const userStore = useUserStore();
  return useMutation({
    mutationFn: (responseText) => {
      console.log("Made it to the MARCo Talk mutation function");
      const data = JSON.parse(JSON.stringify(requestBody));
      data.speak = responseText;
      data.speechVoice = userStore.rawUsrData.userPersonality.userGeneral.preferredVoice;
      console.log("We be sending:", data);
      return http({ url: toUrl(["clicked"]), method: "POST", data: data });
    },
    onSuccess: (data) => {
      const audioDatURI = "data:audio/wav;base64," + data.base64Audio;
      console.log("Emotion is:", userStore.marcoEmotion);
      const emotionMapping = {
          "happy": "smile",
          "sad": "frown",
          "neutral": "neutral"
      };
      userStore.mouthState = `${userStore.marcoEmotion ? emotionMapping[userStore.marcoEmotion]:'smile'}Talk`;
      userStore.headState = "rest";
      playMARCoAudio(audioDatURI);
    },
  });
};


export const useCreateUser = () => {

}

