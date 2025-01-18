/**
 * Import function triggers from their respective submodules:
 *
 * const {onCall} = require("firebase-functions/v2/https");
 * const {onDocumentWritten} = require("firebase-functions/v2/firestore");
 *
 * See a full list of supported triggers at https://firebase.google.com/docs/functions
 */

const {onRequest} = require("firebase-functions/v2/https");
const logger = require("firebase-functions/logger");
const {defineString} = require("firebase-functions/params");


const API_KEY = defineString("API_KEY");

// Create and deploy your first functions
// https://firebase.google.com/docs/functions/get-started

// exports.helloWorld = onRequest((request, response) => {
//   logger.info("Hello logs!", {structuredData: true});
//   response.send("Hello from Firebase!");
// });

exports.commandConversation = onRequest({
  cors: ["*", "http://localhost", "192.168.1.208", "http://localhost:8080", "192.168.1.208:8080"],
}, async (req, res) => {
  // eslint-disable-next-line
  logger.info("Command Conversation: " + JSON.stringify(req.body), {structuredData: true});
  logger.info("The API Key is: " + API_KEY, {structuredData: true});
  const {v4} = require("uuid");
  // The body of the request contains a text input
  // That we will send to the chatbot and generate a response
  const text = req.body.text;
  const sessionID = req.body.sessionID ? req.body.sessionID : v4();

  // Imports the Google Cloud Some API library
  const {SessionsClient} = require("@google-cloud/dialogflow-cx");

  const client = new SessionsClient({
    apiEndpoint: "us-east1-dialogflow.googleapis.com",
    key: API_KEY,
  });
  // eslint-disable-next-line no-unused-vars
  const util = require("util");
  // eslint-disable-next-line no-unused-vars
  const {struct} = require("pb-util");
  // Assumes uuid module has been installed from npm,
  // npm i uuid:

  const projectId = "guardbot-qgc";
  const location = "us-east1";
  const agentId = "9cbb9de1-6770-4776-8eaf-b55994aa675c";

  // Configure the session
  const sessionPath = client.projectLocationAgentSessionPath(
      projectId,
      location,
      agentId,
      sessionID,
  );

  // The text query request.
  const request = {
    session: sessionPath,
    queryInput: {
      text: {
        text: text,
      },
      languageCode: "en",
    },
  };

  // Send request and log result
  const [dialogflowCXResponse] = await client.detectIntent(request);
  console.log("Detected intent");
  for (const message of dialogflowCXResponse.queryResult.responseMessages) {
    if (message.text) {
      console.log(`Agent Response: ${message.text.text}`);
    }
  }

  const returnMe = {};
  const messages = dialogflowCXResponse.queryResult.responseMessages;
  for (const message of messages) {
    if (message.text) {
      returnMe.statusResponse = message.text.text.join(" ");
    }
    if (message.payload) {
      returnMe.payload = struct.decode(message.payload);
    }
  }

  const parameters = dialogflowCXResponse.queryResult.parameters;
  if (parameters) {
    returnMe.params = struct.decode(parameters);
  }

  res.send(returnMe);
});

exports.generateSpeech = onRequest({
  cors: ["*", "http://localhost", "192.168.1.208", "http://localhost:8080", "192.168.1.208:8080", "http://192.168.1.208:8080", "http://192.168.1.208"],
}, async (req, res) => {
  const text = req.body.text;
  const voiceProfile = req.body.voiceProfile;
  const textToSpeech = require("@google-cloud/text-to-speech");


  const client = new textToSpeech.TextToSpeechClient({
    key: API_KEY,
  });

  const request = {
    input: {text: text},
    voice: {
      languageCode: "en-US",
      name: voiceProfile,
    },
    audioConfig: {
      audioEncoding: "PCM",
    },
  };

  const [response] = await client.synthesizeSpeech(request);
  res.set("Content-Type", "audio/wav");
  res.send({data: Buffer.from(response.audioContent, "base64")});
});

