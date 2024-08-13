import { initializeApp } from "firebase/app"; //Import the Firebase library

import { getDatabase, ref, set, onValue } from "firebase/database"; //Import the Firebase Realtime Database library
import { getFirestore, doc, getDoc, setDoc } from "firebase/firestore"; //Import the Firebase Firestore library
import { getAuth, initializeAuth, indexedDBLocalPersistence, signInWithEmailAndPassword, signOut, createUserWithEmailAndPassword } from "firebase/auth"; //Import the Firebase Authentication library
import { useMutation, useQuery } from "@tanstack/vue-query";
import { useRoute, useRouter } from "vue-router";
import { useToast } from "primevue/usetoast";

const firebaseConfig = {
  apiKey: import.meta.env.APP_FIREBASE_API_KEY,
  authDomain: "guardbot-qgc.firebaseapp.com",
  projectId: import.meta.env.APP_FIREBASE_PROJECT_ID,
  storageBucket: "guardbot-qgc.appspot.com",
  messagingSenderId: "754549314512",
  appId: import.meta.env.APP_FIREBASE_APP_ID,
  measurementId: "G-6Y0ZGX0VF4"
};

console.log("Firebase config: ", firebaseConfig);


// Initialize Firebase
const firebaseApp = initializeApp(firebaseConfig);
export const db = getFirestore(firebaseApp);
export const rt = getDatabase(firebaseApp); //Realtime database
export const auth = getAuth(firebaseApp);

//   if (Capacitor.isNativePlatform()) {
//     auth = initializeAuth(firebaseApp, { persistence: indexedDBLocalPersistence });
//   } else {
//     auth = getAuth(firebaseApp);
//   }

export const useAuthenticateUser = () => {
  const authMutation = useMutation({
    mutationFn:
      async (authObj: any) => {
        const mode = authObj.mode || 0;
        switch (mode) {
          case 0:
            console.log("Signing in with an auth object of: ", authObj);
            return await signInWithEmailAndPassword(auth, authObj.email, authObj.password);
          case 1:
            console.log("Signing up...");
            return await createUserWithEmailAndPassword(auth, authObj.email, authObj.password);
          default:
            return null;
        }
      }
  });
  return authMutation
}


export const useLogoutUser = async () => {
  return new Promise((resolve, reject) => {
    signOut(auth).then(() => {
      console.log("Signed out");
      resolve(true);
    }).catch((error) => {
      console.log("Error signing out: ", error);
      reject(false);
    });
  });
}