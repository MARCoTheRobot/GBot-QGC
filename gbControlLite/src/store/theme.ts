import { defineStore } from "pinia";
import { ref, watch } from "vue";

const useThemeStore = defineStore("theme", () => {
  const theme = ref<"dark" | "light" | "system">((localStorage.getItem("marco-theme") as "dark" | "light" | "system") || "system");
  watch(theme, (val) => {
    let _theme = val;
    const root = window.document.documentElement;
    root.classList.remove("light", "dark");
    localStorage.setItem("marco-theme", _theme);
    if (_theme === "system") {
      _theme = window.matchMedia("(prefers-color-scheme: dark)").matches ? "dark" : "light";
    }
    root.classList.add(_theme);
  });
  return theme;
});
export default useThemeStore;
