
1. @tanstack/vue-query -> this is an newtork request binder for vue having caching Sure, I can help make this document more readable and easy to understand. Here's an improved version:

1. **@tanstack/vue-query**
   - This is a network request binder for Vue.js, which provides caching, loading, and advanced error handling features.
   - Each API endpoint is written as a separate hook.
   - Since we are using NestJS, there is a routing divider for each module. For example, all API endpoints for authentication are under `/auth/[restRoute]`.
   - There is an `EntryBase` object that contains all the dividers and is used in individual hook files.
   - The hook files are located in `@/hooks/api` and are written in an abstract pattern, making it easier to replace this library with a better one in the future.
   - All the API types (the data received from the server) are written in `@/types/api`.

2. **Pinia**
   - Pinia is a fancy and more advanced way to manage the Vue store.
   - All stores are written in the folder `@/store`

3. **vue-i18n**
   - This library provides multi-language support for Vue.js applications.
   - The language files are located in `@/libs/locales`.
   - There is a TypeScript setup with it, ensuring that all languages are in sync.
   - There is a custom hook called `useLang` that returns an instance of `useI18n` with type safety and this also written in an abstract pattern.



Sure, here's a document describing the directory structure:

```
project-root/
├── src/
│   ├── components/
│   │   └── ... # Reusable Vue components
│   ├── hooks/
│   │   ├── api/
│   │   │   └── ... # API hooks using @tanstack/vue-query
│   │   └── ... # Other custom hooks
│   ├── libs/
│   │   └── locales/
│   │       └── ... # Language files for vue-i18n
│   ├── pages/
│   │   └── ... # Vue pages/views
│   ├── router/
│   │   └── ... # Vue router configuration
│   ├── services/
│   │   └── ... # Services for API calls, data manipulation, etc.
│   ├── store/
│   │   └── ... # Pinia store modules
│   ├── types/
│   │   ├── api/
│   │   │   └── ... # Types for API responses
│   │   └── ... # Other types
│   ├── utils/
│   │   └── ... # Utility functions
│   ├── App.vue
│   ├── main.js
│   └── ...
├── tests/
│   └── ... # Unit and integration tests
├── .gitignore
├── package.json
├── README.md
└── ...
```

Here's a breakdown of the directories:

- `src/` - The main source code directory
  - `components/` - Reusable Vue components
  - `hooks/` - Custom hooks, including API hooks for `@tanstack/vue-query`
  - `libs/` - Third-party libraries and their configurations
    - `locales/` - Language files for `vue-i18n`
  - `pages/` - Vue pages/views
  - `router/` - Vue router configuration
  - `services/` - Services for API calls, data manipulation, etc.
  - `store/` - Pinia store modules
  - `types/` - TypeScript type definitions
    - `api/` - Types for API responses
  - `utils/` - Utility functions
  - `App.vue` - The root Vue component
  - `main.js` - The entry point of the Vue application
- `tests/` - Unit and integration tests
- Other common files like `.gitignore`, `package.json`, `README.md`, etc.
