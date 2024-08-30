import { defineConfig } from "vite";
import vue from "@vitejs/plugin-vue";
// eslint-disable-next-line @typescript-eslint/ban-ts-comment
// @ts-ignore
import eslintPlugin from "vite-plugin-eslint"; // for showing the linting in console at build time as well as dev time.
import * as path from "path";

// https://vitejs.dev/config/
export default defineConfig({
  plugins: [eslintPlugin(), vue()],
  resolve: {
    alias: [{ find: "@", replacement: path.resolve(__dirname, "src") }],
  },
  server: {
    host: true,
    port: 8080,
  },
  envPrefix: ["APP_", "VUE_APP_"],
});
