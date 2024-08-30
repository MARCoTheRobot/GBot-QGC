import { createApp } from "vue";
import PrimeVue from "primevue/config";
import "@/css/app.css";
// @ts-ignore
// import wind from "@/presets/wind";
// @ts-ignore
import lara from "@/presets/lara";
import App from "./App.vue";
import router from "./router";
import { VueQueryPlugin } from "@tanstack/vue-query";
import ToastService from "primevue/toastservice";
import { createI18n } from "vue-i18n";
import english from "./lib/locales/english";
import filipino from "./lib/locales/filipino";
import { createPinia } from "pinia";
import { I18nLangType, I18nMessageType } from "./types/lang.type";
import Vue3Lottie from "vue3-lottie";
import ConfirmationService from "primevue/confirmationservice";

import RouterPrefetch from "vue-router-prefetch";
// @ts-ignore
import { store } from "./krata/store";
import VueClickAway from "vue3-click-away";
import VueLazyLoad from 'vue3-lazyload'
import Toast from "vue-toastification";
import "vue-toastification/dist/index.css";
import './registerServiceWorker'


import "primeicons/primeicons.css";
import Ripple from "primevue/ripple";


const app = createApp(App);

app.use(VueQueryPlugin);
app.use(router);
app.use(Vue3Lottie, { name: "Vue3Lottie" });
// store setup
const pinia = createPinia();
app.use(pinia);

// i18n config
const i18n = createI18n<[I18nMessageType], I18nLangType>({
  legacy: false,
  locale: "en",
  fallbackLocale: "en",
  messages: {
    en: english,
    fili: filipino,
  },
});
app.use(i18n);

// primevue config
app.use(PrimeVue, {
  unstyled: true,
  pt: lara,
  ripple: true,
});

app.directive("ripple", Ripple);

app.use(ToastService);
app.use(ConfirmationService);

app.use(RouterPrefetch);
app.use(store);
app.use(VueClickAway);
app.use(VueLazyLoad);
app.use(Toast, {});

app.mount("#app");
