
  cordova.define('cordova/plugin_list', function(require, exports, module) {
    module.exports = [
      {
          "id": "cordova-plugin-calendar.Calendar",
          "file": "plugins/cordova-plugin-calendar/www/Calendar.js",
          "pluginId": "cordova-plugin-calendar",
        "clobbers": [
          "Calendar"
        ]
        },
      {
          "id": "cordova-plugin-inappbrowser.inappbrowser",
          "file": "plugins/cordova-plugin-inappbrowser/www/inappbrowser.js",
          "pluginId": "cordova-plugin-inappbrowser",
        "clobbers": [
          "cordova.InAppBrowser.open"
        ]
        },
      {
          "id": "cordova-plugin-purchase.InAppPurchase",
          "file": "plugins/cordova-plugin-purchase/www/store-ios.js",
          "pluginId": "cordova-plugin-purchase",
        "clobbers": [
          "store"
        ]
        },
      {
          "id": "cordova-plugin-speechrecognition.SpeechRecognition",
          "file": "plugins/cordova-plugin-speechrecognition/www/speechRecognition.js",
          "pluginId": "cordova-plugin-speechrecognition",
        "merges": [
          "window.plugins.speechRecognition"
        ]
        }
    ];
    module.exports.metadata =
    // TOP OF METADATA
    {
      "cordova-plugin-calendar": "5.1.5",
      "cordova-plugin-inappbrowser": "5.0.0",
      "cordova-plugin-purchase": "10.5.4",
      "cordova-plugin-speechrecognition": "1.1.2"
    };
    // BOTTOM OF METADATA
    });
    