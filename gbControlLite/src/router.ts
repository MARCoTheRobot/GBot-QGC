// router.ts
import { RouteRecordRaw, createRouter, createWebHistory } from "vue-router";

import HomeView from "@/pages/HomeView.vue";
import RootLayout from "@/layouts/RootLayout.vue";
import InitialScreen from "@/components/InitialScreen.vue";
import SettingsView from "@/pages/settings/SettingsView.vue";
import ProfileView from "@/pages/settings/ProfileView.vue";
import ActivityView from "@/pages/activity/ActivityView.vue";
import PreferenceView from "@/pages/settings/PreferenceView.vue";
import MarcoSettingsView from "@/pages/settings/MarcoSettingsView.vue";
import LinkedAccountView from "@/pages/settings/LinkedAccountView.vue";
import AboutView from "@/pages/settings/AboutView.vue";
import WishlistView from "@/pages/wishlist/WishlistView.vue";
import HomeLayout from "@/layouts/HomeLayout.vue";
import SignInView from "@/pages/auth/SignInView.vue";
import SignUpView from "@/pages/auth/SignUpView.vue";
import ActivityLayout from "@/pages/activity/ActivityLayout.vue";
import Activity2View from "@/pages/activity/Activity2View.vue";
import JournalsView from "@/pages/journal/JournalsView.vue";
import Activity3View from "@/pages/activity/Activity3View.vue";
import Activity4View from "@/pages/activity/Activity4View.vue";
import MediaPlayer from "@/pages/MediaPlayer.vue";
import ScreeningView from "@/pages/ScreeningView.vue";
import StoreLayout from "@/pages/store/StoreLayout.vue";
import StoreView from "@/pages/store/StoreView.vue";
import FacesView from "@/pages/store/FacesView.vue";
import ChatView from "@/pages/ChatView.vue";
import MarcoCustomizationView from "@/pages/settings/MarcoCustomizationView.vue";

import TestView from "@/pages/TestView.vue"
import OnboardingView from "@/pages/OnboardingView.vue";
import MarcoCustomizationView2 from "./pages/settings/MarcoCustomizationView2.vue";

// const routes: RouteRecordRaw[] = [
//   {
//     path: "/",
//     component: RootLayout,
//     children: [
//       {
//         path: "",
//         children: [
//           { path: "/login", name: "login", component: SignInView },
//           { path: "/sign-up", name: "sign-up", component: SignUpView }
//         ],
//       },
//       {
//         path: "/",
//         component: HomeLayout,
//         children: [
//           { path: "", name: "Home", component: HomeView, meta: { showChatBar: true, transition: "slide-right" } },
//           { path: "/first-time", name: "first-time", component: InitialScreen },
//           { path: "profile", name: "profile", component: ProfileView, meta: { transition: "slide-right" } },
//           { path: "preference", name: "preference", component: PreferenceView, meta: { transition: "slide-right" } },
//           { path: "marco-settings", name: "marco-settings", component: MarcoSettingsView, meta: { transition: "slide-right" } },
//           { path: "linked-account", name: "linked-account", component: LinkedAccountView, meta: { transition: "slide-right" } },
//           { path: "about", name: "about", component: AboutView, meta: { transition: "screen-slide" } },
//           { path: "wishlist", name: "wishlist", component: WishlistView, meta: { transition: "screen-slide", showChatBar: true } },
//           { path: "/journal", name: "journal", component: JournalsView, meta: { transition: "screen-slide", useTranscript: true } },
//           { path: "/chat", name: "Chat", component: ChatView, meta: { transition: "screen-slide", showChatBar: true } },
//           { path: "marco-customization", name: "marco-customization", component: MarcoCustomizationView },
//           {
//             path: "/store",
//             name: "store",
//             component: StoreLayout,
//             children: [
//               { path: "", name: "store", component: StoreView },
//               { path: "marcos", name: "store-marcos", component: FacesView },
//               { path: "backgrounds", name: "store-backgrounds", component: FacesView},
//               { path: "headAccessories", name: "store-headAccessories", component: FacesView},
//               { path: "audioFiles", name: "store-audioFiles", component: FacesView }
//             ],
//             meta: { transition: "screen-slide" },
//           },
//           {
//             path: "settings",
//             children: [
//               { path: "", name: "setting", component: SettingsView },
//               { path: "profile", name: "setting-profile", component: ProfileView },
//               { path: "preference", name: "setting-preference", component: PreferenceView },
//               {
//                 path: "marco",
//                 children: [
//                   { path: "settings", name: "setting-marco", component: MarcoSettingsView },
//                   { path: "customization", name: "setting-marco-customization", component: MarcoCustomizationView },
//                   { path: "customization2", name: "setting-marco-customization2", component: MarcoCustomizationView2 },
//                 ],
//               },
//               { path: "linked-account", name: "setting-linked-account", component: LinkedAccountView },
//               { path: "about", name: "setting-about", component: AboutView },
//             ],
//           },
//           {
//             path: "onboarding", name: "onboarding", component: OnboardingView, meta: { transition: "slide-right" }
//           },
//           { path: "wishlist", name: "wishlist", component: WishlistView },
//           {
//             path: "activity",
//             component: ActivityLayout,
//             children: [
//               { path: "", name: "activity", component: ActivityView, meta: { transition: "screen-slide" } },
//               { path: "2", name: "activity-2", component: Activity2View, meta: { transition: "screen-slide" } },
//               { path: "3", name: "activity-3", component: Activity3View, meta: { transition: "screen-slide" } },
//               { path: "4", name: "activity-4", component: Activity4View, meta: { transition: "screen-slide" } },
//             ],
//           },
//           {
//             path: "/media-player",
//             name: "Media Player",
//             component: MediaPlayer,
//             meta: { transition: "screen-slide", showChatBar: true },
//           },
//           {
//             path: "/screening/:id",
//             name: "Screening",
//             component: ScreeningView,
//             meta: { transition: "screen-slide", useTranscript: true },
//           },
//           {
//             path: "/test",
//             name: "Test",
//             component: TestView,
//           }
//         ],
//         meta: { transition: "slide-right" },
//       },
//     ],
//   },
// ];

const routes: RouteRecordRaw[] = [
  {
        path: "/",
        component: RootLayout,
        children: [
          {
            path: "",
            children: [
              {
                 path: "", name: "home", component: HomeView,
              }
            ]
          }
        ]
      }
];

const router = createRouter({
  history: createWebHistory(),
  routes,
});

export default router;
