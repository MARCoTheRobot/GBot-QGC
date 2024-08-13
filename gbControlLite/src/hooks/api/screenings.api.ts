// import { EntryBase } from "@/libs/constants";
import http from "@/lib/http";
import { toUrl } from "@/lib/utils";
import { WishListInfo, WishlistDTO } from "@/types/api/wishlist.type";
import { AppError } from "@/types/index.type";
import { UseMutationReturnType, UseQueryReturnType, useMutation, useQuery, useQueryClient } from "@tanstack/vue-query";
import { useToast } from "primevue/usetoast";
import { db } from "@/hooks/firebase";
import { doc, getDoc, setDoc, updateDoc } from "firebase/firestore";
import { rawUserData } from "@/data/disposable/raw-usr-data";

// Endpoint: [GET] /getFeedbackList
export const useGetScreeningQuestions = (screeningID: string): UseQueryReturnType<any, Error> => {
  const key = [`v1/get/screenings/questions/${screeningID}`];
  return useQuery({ queryKey: key, queryFn: () => http({ url: toUrl(key) }) });
};

// Endpoint: [GET] /v1/screenings/{{userID}}/all
export const useGetUserScreenings = (userID: string): UseQueryReturnType<any, Error> => {
  const key = [`v1/screenings/${userID}/all`];
  return useQuery({ queryKey: key, queryFn: () => http({ url: toUrl(key) }) });
};

export const useGetActiveScreening = (userID: string): UseQueryReturnType<any, Error> => {
  const key = [`v1/screenings/${userID}/active`];
  return useQuery({ queryKey: key, queryFn: () =>{
    return new Promise(async (resolve, reject) => {
      console.log("The user ID here is: ", userID);
      console.log("And the type is: ", typeof userID)
      const key2 = [`v1/screenings/${userID}/all`];
      const res = await http({ url: toUrl(key2) });
      if (res) {
        console.log("The response 229399239 is: ", res);
        const activeScreening = res.active;
        resolve(activeScreening);
      } else {
        reject(new Error("Could not get screenings list"));
      }
    });
  } });
};




export const useSaveScreeningResults = () => {
  return useMutation({
    mutationFn: (data: any) => {
      return new Promise(async (resolve, reject) => {
        try{
      // Save the screening results to the user file
      const userID = rawUserData.basicInformation.userID;
      const docRef = doc(db, "users", userID, 'sessionRecords', 'screenings');

      //Save the results to the user's file in firebase

        //1. Get the document of the user's screenings and update the lastIssueDate of this screening to be today
        const docSnap = await getDoc(docRef);
        const screenings = docSnap.data();
        for (let i = 0; i < screenings.screenings.length; i++) {
          if (screenings.screenings[i].screeningID === data.details.id) {
            screenings.screenings[i].lastIssueDate = new Date().toISOString().slice(0, 10);
            break;
          }
        }
        //2. Update the document
        await updateDoc(docRef, screenings);

        //3. Get the document of the user's screening results
        const ref2 = doc(
          db,
          'users',
          rawUserData.basicInformation.userID,
          'sessionRecords',
          'screenings',
          'results',
          `${data.details.id}`
        );
        const docSnap2 = await getDoc(ref2);
        let resultData;
        //Check if the document exists, if not, create it
        if (!docSnap2.exists()) {
          await setDoc(ref2, {
            results: [],
          });
          resultData = {
            results: [],
          };
        } else {
          resultData = docSnap2.data();
        }

        //4. Update the document
        const nextResult = {
          date: new Date().toISOString().slice(0, 10),
          rawResults: data.results,
          highRisk: data.highRiskResults,
        };

        resultData.results.push(nextResult);
        await updateDoc(ref2, resultData);
        resolve("Screening results saved successfully");
      }
      catch(err){
        reject(err);
      }

    });
  },
  onMutate: async () => {
    console.log("Setting the daily goals");
    return;
  },
  onError: (error: AppError) => {
    console.error("Error setting the daily goals: ", error);
    return;
  },
  })
}

export const useSaveScreeningResultsDEV = () => {
  return useMutation({
    mutationFn: (data: any) => {
      return new Promise(async (resolve, reject) => {
        setTimeout(() => {
          reject("Something went wrong...");
        },3500)
      });
    },
  });

}