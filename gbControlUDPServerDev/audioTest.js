const fs = require('fs');
const path = require('path');
const express = require('express');
const cors = require('cors');

const app = express();
const port = 3000;

const allowedOrigins = [
  'capacitor://localhost',
  'ionic://localhost',
  'http://localhost',
  'http://localhost:8080',
  'http://localhost:8100',
  'http://localhost:8081',
  '*',
  'http://192.168.1.208:8080',
  'http://192.168.1.121:8080',
  'https://localhost',
  'https://patient.vwhealth.org',
  'https://kiosk.marcohealthtech.com',
  'http://kiosk.marcohealthtech.com',
  'https://marcotalkdev.uk.r.appspot.com',
  'http://10.204.56.41',
  'http://10.204.56.41:8080'

];

// Reflect the origin if it's in the allowed list or not defined (cURL, Postman, etc.)
const corsOptions = {
  origin: (origin, callback) => {
    if (allowedOrigins.includes(origin) || !origin) {
      callback(null, true);
    } else {
      callback(new Error(`Origin ${origin} not allowed by CORS`));
    }
  },
};

// Enable preflight requests for all routes
app.options('*', cors(corsOptions));


app.use(cors()); //Use CORS


let currentChunkIndex = 0;


const audioPath = path.join(__dirname, 'assets', 'audio', 'Calling.wav');

const audioBuffer = fs.readFileSync(audioPath);
console.log(audioBuffer);

// Break the buffer into chunks of 12800 bytes
const chunkSize = 12800;
const audioChunks = [];
for (let i = 0; i < audioBuffer.length; i += chunkSize) {
  audioChunks.push(audioBuffer.slice(i, i + chunkSize));
}

// Write the chunked buffer to a JSON file
// const audioChunksPath = path.join(__dirname, 'assets', 'audio', 'CallingChunks.json');
// fs.writeFileSync(audioChunksPath, JSON.stringify(audioChunks));


const audioData = new Uint8Array(16000);
for (let i = 0; i < audioData.length; i++) {
  audioData[i] = Math.floor(128 + 127 * Math.sin(i / 16000 * 2 * Math.PI * 440));
}
const audioBuffer2 = Buffer.from(audioData.buffer);

console.log(audioBuffer2);


app.get('/next-chunk', (req, res) => {
  if (currentChunkIndex >= audioChunks.length) {
    currentChunkIndex = 0; // Reset the counter if it exceeds the number of chunks
  }

  const chunk = audioChunks[currentChunkIndex];
  currentChunkIndex++;

  res.json(chunk);
});

app.listen(port, () => {
  console.log(`Server is running on http://localhost:${port}`);
});