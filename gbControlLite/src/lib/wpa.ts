/**
 * A utility object for manipulating and working with WPA configuration files.
 *
 * @namespace
 * @const WPA_CONF
 */
const WPA_CONF = {
  /**
   * Cleans the input file by removing comment lines and empty lines.
   *
   * @memberof WPA_CONF
   * @function
   * @param {string} file - The input configuration file content.
   * @returns {string} The cleaned configuration file content.
   */
  clean: (file: string): string => {
    return file
      .split("\n")
      .filter((line) => !line.trim().startsWith("#"))
      .filter((item) => item.trim() !== "")
      .join("\n");
  },

  /**
   * Parses the input configuration string to extract network configurations and remaining content.
   *
   * @memberof WPA_CONF
   * @function
   * @param {string} configString - The input configuration string.
   * @returns {Array} An array containing extracted network configurations and remaining content.
   */
  parse: (configString: string): [{ [key: string]: { value: string; quoted: boolean } }[], string] => {
    const networks: { [key: string]: { value: string; quoted: boolean } }[] = [];
    const networkPattern = /network={([\s\S]*?)}/g;
    const rest = configString
      .replace(networkPattern, "")
      .split("\n")
      .filter((item) => item.trim() !== "")
      .join("\n");
    const fieldPattern = "=";
    let match;
    while ((match = networkPattern.exec(configString))) {
      const items = match[1].split("\n");
      const networkConfig: { [key: string]: { value: string; quoted: boolean } } = {};
      for (const item of items) {
        const separatorIndex = item.indexOf(fieldPattern);
        // eslint-disable-next-line prefer-const
        let [key, value] = [item.substring(0, separatorIndex).trim(), `${item.substring(separatorIndex + 1)}`];
        if (key && value) {
          if (value.includes('"')) {
            value = value.replace(/"/g, "");
            networkConfig[key] = { value, quoted: true };
          } else {
            networkConfig[key] = { value, quoted: false };
          }
        }
      }
      networks.push(networkConfig);
    }

    return [networks, rest];
  },

  /**
   * Converts an array of network configurations and remaining content back to a configuration string.
   *
   * @memberof WPA_CONF
   * @function
   * @param {Array} config - An array of network configurations.
   * @param {string} rest - The remaining content not part of any network configuration.
   * @returns {string} The reconstructed configuration string.
   */
  string: ([config, rest]: [{ [key: string]: { value: string; quoted: boolean } }[], string]): string => {
    let string = "";
    for (const network of config) {
      string += "network={\n";
      for (const key in network) {
        if (network[key].quoted) {
          string += `  ${key}="${network[key].value}"\n`;
        } else {
          string += `  ${key}=${network[key].value}\n`;
        }
      }
      string += "}\n";
    }
    string = rest + "\n" + string;
    return string;
  },

  /**
   * Converts an array of network configurations and remaining content back to a configuration string.
   *
   * @memberof WPA_CONF
   * @function
   * @param {Object} network - An object of network configurations.
   * @returns {string} The reconstructed configuration string.
   */
  rawString: (network: { [key: string]: { value: string; quoted: boolean } }): string => {
    let string = "";
    for (const key in network) {
      if (network[key].quoted) {
        string += `  ${key}="${network[key].value}"\n`;
      } else {
        string += `  ${key}=${network[key].value}\n`;
      }
    }
    string = "\n" + string;
    return string;
  },

  /**
   * Converts an array of network configurations and remaining content back to a configuration string.
   *
   * @memberof WPA_CONF
   * @function
   * @param {Object} network - An string of network configurations.
   * @returns {Object} The reconstructed configuration string.
   */
  rawParse: (network: string): { [key: string]: { value: string; quoted: boolean } } => {
    network = network
      .split("\n")
      .filter((item) => item.trim() !== "")
      .map((item) => item.trim())
      .join("\n");
    const fieldPattern = "=";
    const items = network.split("\n");
    console.log(items);
    const networkConfig: { [key: string]: { value: string; quoted: boolean } } = {};
    for (const item of items) {
      const separatorIndex = item.indexOf(fieldPattern);
      // eslint-disable-next-line prefer-const
      let [key, value] = [item.substring(0, separatorIndex).trim(), `${item.substring(separatorIndex + 1)}`];
      if (key && value) {
        if (value.includes('"')) {
          value = value.replace(/"/g, "");
          networkConfig[key] = { value, quoted: true };
        } else {
          networkConfig[key] = { value, quoted: false };
        }
      }
    }
    return networkConfig;
  },
};

export default WPA_CONF;
