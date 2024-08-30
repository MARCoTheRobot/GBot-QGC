// Create an empty modules object to store all the imported modules
const modules = {};

// Import all `.js` files in the current directory (excluding index.js)
const importModules = import.meta.glob("./**/*.js", { eager: true });

// Iterate through each imported module
for (const path in importModules) {
  // Exclude the index.js file and files that are not in the immediate directory
  if (
    path === "./index.js" ||
    (path.split("/").length > 2 && !path.includes("index.js"))
  )
    continue;

  // Extract the module name from the path and store it in the modules object
  const moduleName = path.split("/")[1].replace(/(\.\/|\.js)/g, "");
  modules[moduleName] = importModules[path].default;
}

// Export the modules object as the default export
export default modules;
