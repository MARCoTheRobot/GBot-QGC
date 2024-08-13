import { SettingsType } from "@/types/store/settings.type";
import { defineStore } from "pinia";
import { reactive, watch } from "vue";

const settingTemplate: SettingsType = {
  user: { lang: "en", firstTime: true },
  app: { theme: "dark" },
  avatar: {
    body: { name: "default", type: "svg" },
    head: { name: "default", type: "svg" },
    eye: { name: "0", type: "svg" },
    skinTone: { name: "#B3B3B3", type: "color" },
    hairColor: { name: "#8d5524", type: "color" },
    irisColor: { name: "#19e0ff", type: "color" },
  },
};

export const settingsTemplate = settingTemplate;

const useSettingsStore = defineStore("settings", () => {
  const s = JSON.parse(localStorage.getItem("settings") as any);
  const defaultSettings: SettingsType = settingTemplate;
  if (!s) localStorage.setItem("settings", JSON.stringify(defaultSettings));
  const settings = reactive<SettingsType>(s || defaultSettings);
  window.document.documentElement.classList.add(settings.app.theme);

  watch(settings, (val, oldVal) => {
    console.log("Settings changed");
    console.log(JSON.parse(JSON.stringify(val)), JSON.parse(JSON.stringify(settings)));
    localStorage.setItem("settings", JSON.stringify(val));

    let _theme = val.app.theme;
    const root = window.document.documentElement;
    root.classList.remove("light", "dark");
    if (_theme === "system") {
      _theme = window.matchMedia("(prefers-color-scheme: dark)").matches ? "dark" : "light";
    }
    root.classList.add(_theme);
  });

  return settings;
});
export default useSettingsStore;
