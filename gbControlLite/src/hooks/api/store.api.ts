import http from "@/lib/http";
import { toUrl } from "@/lib/utils";
import { UseMutationReturnType, UseQueryReturnType, useMutation, useQuery, useQueryClient } from "@tanstack/vue-query";
import { useToast } from "primevue/usetoast";
import { requestBody } from "@/data/requestbody";

import { db } from "@/hooks/firebase";
import { doc, getDoc, setDoc } from "firebase/firestore";


export const useGetStoreItems = (itemID: string) => {
    const key = [`v1/store/${itemID}`];
    return useQuery({ queryKey: key, queryFn: () => {
        return new Promise(async (resolve, reject) => {
            const itemMap = {
                "marcos": "/public/marconlineStore/marcos/FhUfPmJacY6JOTxgKcXn",
                "headAccessories":'/public/marconlineStore/accessories/headAccessories',
                "backgrounds": "/public/marconlineStore/backgrounds/Jy8HDWJkpuXv8i6iG2Jx",
                "audioFiles": "/public/marconlineStore/audio/audioPaths",

            };
            const itemPath = itemMap[itemID];
            const actCollection = doc(db, itemPath);
            const actDoc = await getDoc(actCollection);
            if (actDoc.exists()) {
                const allItems = actDoc.data();
                console.log("The items are: ", allItems);
                
                resolve(allItems[itemID]);

            } else {
                console.warn("The public activities list was not found");
                reject("No activities doc activities found");
            }
        });
    } });
}

export const useMakePurchase = (item: any, amount: number) => {
    return useMutation({
        mutationFn: (purchaseData: any) => {
            return http({ url: toUrl(["v1", "store", "purchase"]), method: "POST", data: purchaseData });
        },
        onSuccess: (data) => {
            console.log("The purchase was successful: ", data);
        },
    });
}