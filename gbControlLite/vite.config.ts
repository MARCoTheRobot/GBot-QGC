import { defineConfig } from "vite";
import vue from "@vitejs/plugin-vue";
// eslint-disable-next-line @typescript-eslint/ban-ts-comment
// @ts-ignore
import eslintPlugin from "vite-plugin-eslint"; // for showing the linting in console at build time as well as dev time.
import * as path from "path";
import { nodePolyfills } from 'vite-plugin-node-polyfills'
import crossOriginIsolation from 'vite-plugin-cross-origin-isolation'
 
// https://vitejs.dev/config/
export default defineConfig({
  plugins: [eslintPlugin(), vue(), nodePolyfills(), crossOriginIsolation()],
  resolve: {
    alias: [{ find: "@", replacement: path.resolve(__dirname, "src") }],
  },
  server: {
    host: true,
    port: 8080,
    headers: {
      'Cross-Origin-Embedder-Policy': 'require-corp',
      'Cross-Origin-Opener-Policy': 'same-origin',
    },
  },
  optimizeDeps: {
    exclude: ["@ffmpeg/ffmpeg", "@ffmpeg/util"],
  },
  envPrefix: ["APP_", "VUE_APP_"],
});
