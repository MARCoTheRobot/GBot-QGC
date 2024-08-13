import http from "@/lib/http";
import { toUrl } from "@/lib/utils";
import { RawJournalPrompts, JournalsPrompts } from "@/types/api/journal.type";
import { AppError } from "@/types/index.type";
import { UseMutationReturnType, UseQueryReturnType, useMutation, useQuery, useQueryClient } from "@tanstack/vue-query";
import { db } from "@/hooks/firebase";
import { doc, getDoc, setDoc } from "firebase/firestore";
// import { rawUserData } from "@/data/disposable/raw-usr-data";
import { requestBody } from "@/data/requestbody";
import { useToast } from "primevue/usetoast";
import useUserStore from "@/store/user";

//TODO: ADD PARAMS THAT GETS THE USER'S PREFERRED LANGUAGE CODE AND SENDS THAT AS A lang PARAMETER TO THE API
// Endpoint: [GET] /journal-prompts
export const useGetJournalPrompts = (): UseQueryReturnType<RawJournalPrompts[], Error> => {
  const key = ["journal-prompts"];
  return useQuery({ queryKey: key, queryFn: () => http({ url: toUrl(key) }) });
};

// Get journal data from firebase
export const useGetPreviousJournals = () => {
  return new Promise(async (resolve, reject) => {
    const userStore = useUserStore();
    const rawUserData = userStore.rawUsrData;
    const journalCollection = doc(db, `/users/${rawUserData.basicInformation.userID}/journals/regularEntries`);

    const previousJournals = [];

    const jDoc = await getDoc(journalCollection);
    if (jDoc.exists()) {
      const journals = jDoc.data();
      for (const entryDate in journals) {
        const formattedDate =
          entryDate.substr(entryDate.indexOf("m") + 1, entryDate.indexOf("y") - (entryDate.indexOf("m") + 1)) +
          "/" +
          entryDate.substr(entryDate.indexOf("d") + 1, entryDate.indexOf("m") - (entryDate.indexOf("d") + 1)) +
          "/" +
          entryDate.substr(entryDate.indexOf("y") + 1);
        previousJournals.push({
          date: formattedDate,
          results: journals[entryDate],
        });
      }
      //Loop over this.previousOpenTalks and sort by date
      previousJournals.sort(function (a, b) {
        const aDate = new Date(a.date);
        const bDate = new Date(b.date);
        return bDate - aDate;
      });

      //TODO: Also get the open talks and friend talks from firebase
      resolve(previousJournals);
    } else {
      reject("No previous journals found");
    }
  });
};

export const useAnalyzeJournal = () => {
  const userStore = useUserStore();
    const rawUserData = userStore.rawUsrData;
  return useMutation({
    mutationFn: (journalEntry: string, userLabels: string[]) => {
      console.log("The user labels are: ", userLabels);
      const journalJSON = JSON.parse(JSON.stringify(requestBody));
      journalJSON.journalAnalysis.isTrue = true;
      journalJSON.journalAnalysis.content = journalEntry;
      journalJSON.journalAnalysis.userLabels = userLabels ? userLabels : [];
      return http({ url: toUrl(["clicked"]), method: "POST", data: journalJSON });
    },
    onSuccess: async (data) => {
      
      console.log("Made it to the success function!");
      console.log("The data is: ", data);
      console.log("Specifically, the response text is: ", data.responseText);
      // Add MARCo's response to the chat store
      userStore.appendMARCoMessage(data.responseText);

      // Allow journal store to save the resulting data
      const present = new Date();
      const entryTitle = `d${present.getDate()}m${present.getMonth() + 1}y${present.getFullYear()}`;
      const journalCollection = doc(db, `/users/${rawUserData.basicInformation.userID}/journals/regularEntries`);

      console.log("Going to append the journal entry to the user's journal collection: ", entryTitle);

      const jDoc = await getDoc(journalCollection);

      if (jDoc.exists()) {
        console.log("The journal doc already exists, appending to it");
        const journals = jDoc.data();
        journals[entryTitle] = data.journalEntry;
        console.log("This entry is: ", data.journalEntry);
        console.log("The journals object is: ", journals);
        await setDoc(journalCollection, journals);
        return;
      } else {
        console.log("The journal doc does not exist, creating it");
        const journals = {};
        journals[entryTitle] = data.journalEntry;
        console.log("The journals object is: ", journals);
        await setDoc(journalCollection, journals);
        return;
      }
    },
    onError: (error: AppError) => {
      const toast = useToast();
      toast.add({ severity: "error", summary: "Error", detail: error.message });
    },
  });
};
