import axios from "axios";

const token = localStorage.getItem("token");
const http = axios.create({
  baseURL: import.meta.env.APP_BASE_API,
  headers: { "Content-type": "application/json", Authorization: "Bearer " + token },
});

http.interceptors.request.use((config) => {
  import.meta.env.DEV && console.log(`[REQ] [${config.method?.toUpperCase()}] ${config.url}`, { headers: config.headers, data: config.data });
  return config;
});

// Response Interceptor
http.interceptors.response.use(
  (response) => {
    import.meta.env.DEV && console.log(`[RES] [${response.config.method?.toUpperCase()}] ${response.config.url}`, { status: response.status, response: response.data });
    return response.data;
  },
  (error) => {
    if (error.response)
      import.meta.env.DEV &&
        console.error(`[RES] [${error.response.config.method?.toUpperCase()}] ${error.response.config.url}`, { status: error.response.status, response: error.response.data });
    else console.error(`[RES] [${error.response.config.method?.toUpperCase()}] ${error.response.config.url}`, error.message);

    if (error?.response?.data) return Promise.reject(error?.response?.data);
    return Promise.reject({ message: error.message });
  },
);

export default http;
