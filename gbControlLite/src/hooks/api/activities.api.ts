import http from "@/lib/http";
import { toUrl } from "@/lib/utils";
import { RawJournalPrompts, JournalsPrompts } from "@/types/api/journal.type";
import { AppError } from "@/types/index.type";
import { UseMutationReturnType, UseQueryReturnType, useMutation, useQuery, useQueryClient } from "@tanstack/vue-query";
import { useToast } from "primevue/usetoast";
import { db } from "@/hooks/firebase";
import { doc, getDoc, setDoc } from "firebase/firestore";
import { requestBody } from "@/data/requestbody";
import useUserStore from "@/store/user";

//TODO: ADD PARAMS THAT GETS THE USER'S PREFERRED LANGUAGE CODE AND SENDS THAT AS A lang PARAMETER TO THE API
// Endpoint: [GET] /journal-prompts
export const useGetJournalPrompts = (): UseQueryReturnType<RawJournalPrompts[], Error> => {
  const key = ["journal-prompts"];
  return useQuery({ queryKey: key, queryFn: () => http({ url: toUrl(key) }) });
};

// Get journal data from firebase
export const useGetUserActivities = () => {
  return new Promise(async (resolve, reject) => {
    const userStore = useUserStore();
    const rawUserData = userStore.rawUsrData;
    const actCollection = doc(db, `/users/${rawUserData.basicInformation.userID}/activities/daily`);

    console.log("The user ID is: ", rawUserData.basicInformation.userID);
    console.log("The actCollection is: ", actCollection);
    const actDoc = await getDoc(actCollection);
    if (actDoc.exists()) {
      const allActivities = actDoc.data();
      //   const present = new Date();
      //   const entryTitle = `d${present.getDate()}m${present.getMonth() + 1}y${present.getFullYear()}`;

      //   const dailyActivities = allDailyActivities[entryTitle];
      resolve(allActivities);
    } else {
      console.log("No daily activities found");
      reject("No activities doc activities found");
    }
  });
};

export const getAllActivites = async () => {
  return new Promise(async (resolve, reject) => {
    const actCollection = doc(db, `/public/activities`);

    const actDoc = await getDoc(actCollection);
    if (actDoc.exists()) {
      const allActivities = actDoc.data();
      //   const present = new Date();
      //   const entryTitle = `d${present.getDate()}m${present.getMonth() + 1}y${present.getFullYear()}`;
      //   const dailyActivities = allDailyActivities[entryTitle];
      resolve(allActivities.activities);
    } else {
      console.warn("The public activities list was not found");
      reject("No activities doc activities found");
    }
  });
};

export const useGetITPList = () => {
  const key = ["ITPList"];
  return useQuery({ queryKey: key, queryFn: () => http({ url: toUrl(key) }) });
};

export const useGetITPDetails = (itpID: any) => {
  const key = ["ITPList", itpID];
  console.log("The key is: ", key);
  return useQuery({
    queryKey: key,
    queryFn: () => {
      console.log("Running fetch the itp details with: ", itpID.value);
      return http({ url: toUrl(["ITPList", itpID.value]) });
    },
  });
};

export const setUserITP = () => {
  return useMutation({
    mutationFn: (itpDetails: any) =>
      http({
        url: toUrl(["v1", "ITP", itpDetails.userID, "add", itpDetails.itpID], `startDate=${new Date().toISOString().substr(0, 10)}`),
        method: "POST",
        data: { startDate: new Date().toISOString().substr(0, 10) },
      }),
    // onMutate: async () => {
    //   console.log("Setting the ITP");
    //   return;
    // },
    // onError: (error: AppError) => {
    //   console.error("Error setting the ITP: ", error);
    // }
  });
};

export const useGetUsersITPs = () => {
  const userStore = useUserStore();
    const rawUserData = userStore.rawUsrData;
  const key = ["ITP", rawUserData.basicInformation.userID];
  return useQuery({ queryKey: key, queryFn: () => http({ url: toUrl(key) }) });
};

export const useGetActiveITPDetails = (itp: any, allowFetch: any) => {
  const userStore = useUserStore();
    const rawUserData = userStore.rawUsrData;
  const key = ["ITP", rawUserData.basicInformation.userID, "ITP", itp];
  return useQuery({ queryKey: key, queryFn: () => http({ url: toUrl(["ITP", rawUserData.basicInformation.userID, "ITP", itp.value.itpID]) }), enabled: allowFetch.value });
};

export const useAppendDailyGoals = () => {
  const userStore = useUserStore();
  const key = ["dailyGoalsUpdate"];
  const rawUserData = userStore.rawUsrData;
  return useMutation({
    mutationFn: () => {
      return new Promise(async (resolve, reject) => {
        const activityDaily = doc(db, `/users/${rawUserData.basicInformation.userID}/activities/daily`);
        const present = new Date();
        const entryTitle = `d${present.getDate()}m${present.getMonth() + 1}y${present.getFullYear()}`;

        //Add the user's selected activities to the daily activities
        console.log("The daily activities are: ");
        console.log(userStore.dailyActivities);
        console.log("And the selected activities are ");
        console.log(userStore.selectedActivites);
        userStore.dailyActivities = userStore.dailyActivities.concat(userStore.selectedActivites);

        try {
          const activityDailyDoc = await getDoc(activityDaily);

          if (activityDailyDoc.exists()) {
            const actDoc = activityDailyDoc.data();
            actDoc[entryTitle] = userStore.dailyActivities;
            console.log("The actDoc is: ", actDoc);
            await setDoc(activityDaily, actDoc);
            resolve("Updated the daily goals");
          } else {
            const actDoc = {};
            actDoc[entryTitle] = userStore.dailyActivities;
            console.log("The actDoc is: ", actDoc);
            await setDoc(activityDaily, actDoc);
            resolve("Created the daily goals");
          }
        } catch (error) {
          console.log(error);
          reject("Error updating the daily goals");
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
  });
};
