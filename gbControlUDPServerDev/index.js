var udp = require('dgram');
const fs = require('fs');

// --------------------creating a udp server --------------------

// creating a udp server
var server = udp.createSocket('udp4');

const dataPrefix1 = {
  'connect_request': Buffer.from('\x00'),
  'connection_check': Buffer.from('\x01'),
  'ack': Buffer.from('\x02'),
  'data': Buffer.from('\x03'),
  'punch_hole': Buffer.from('\x04'),
  'address': Buffer.from('\x05'),
  'client': Buffer.from('\x00'),
  'robot': Buffer.from('\x01')
};

const dataPrefix2 = {
  video: Buffer.from("\x00"),
  detections: Buffer.from("\x01"),
  json_data: Buffer.from("\x02"),
  audio: Buffer.from("\x03"),
};



// emits when any error occurs
server.on('error',function(error){
  console.log('Error: ' + error);
  server.close();
});

let appendVideo = false;
let appendVideoInterval = 0;
let videoFrame = 0;

// emits on new datagram msg
server.on('message',function(msg,info){
console.log("The info is : ",info);
  console.log('Data received from client : ' + msg.toString('utf-8'));
  console.log('Received %d bytes from %s:%d\n',msg.length, info.address, info.port);

  const dataString = msg.toString('utf-8');
  let optionalJsonData = null;
  if(dataString.includes('{')){
    const jsonStart = dataString.indexOf('{');
    optionalJsonData = JSON.parse(dataString.substring(jsonStart));
  }
//sending msg
const returnMessage = Buffer.concat([Buffer.from('<HARV7>'),dataPrefix1.data,dataPrefix2.json_data]);
const jsonData = {
    "internal_temperature": 20 + Math.random() * 90,
    "cpu_temperature": 20 + Math.random() * 90,
    "pitch":  optionalJsonData && optionalJsonData.controls ? 90 * ( optionalJsonData.controls[0] + optionalJsonData.controls[1] ) : 0,
    "motor_speeds": [optionalJsonData && optionalJsonData.controls ? 20 * ( optionalJsonData.controls[0] + optionalJsonData.controls[1] ) : 0, optionalJsonData && optionalJsonData.controls ? 20 * ( optionalJsonData.controls[0] + optionalJsonData.controls[1] ): 0],
    "transcript": "Hello, I am the transcript",
}
const returnMessageBuffer = Buffer.concat([returnMessage,Buffer.from(JSON.stringify(jsonData))]) ;
console.log('Sending msg to client',returnMessageBuffer.toString('utf-8'), info.address, 8043);
server.send(returnMessageBuffer,8043,info.address,function(error){
  if(error){
    client.close();
  }else{
    console.log('Data sent !!!');
  }

});

if (!appendVideo) {

  appendVideo = true;
  appendVideoInterval = setInterval(() => {
    videoFrame++;
    const nextVideoFrame = String(videoFrame).padStart(3, '0');
    const videoData = fs.readFileSync(`assets/ezgif-frame-${nextVideoFrame}.jpg`,{encoding: 'base64'});
    console.log('Video frame ', nextVideoFrame, ' is ', Buffer.from(videoData).length, ' bytes long');
    const videoMessage = Buffer.concat([Buffer.from('<HARV7>'),dataPrefix1.data,dataPrefix2.video,Buffer.from(videoData)]);
    // console.log('Sending video frame to client', videoMessage.toString('utf-8'), info.address, 8043);
    server.send(videoMessage,8043,info.address,function(error){
      if(error){
        client.close();
      }else{
        console.log('Data sent !!!');
      }
    });

    if (videoFrame > 99) {
      clearInterval(appendVideoInterval);
      appendVideo = false;
      videoFrame = 0;
    }
  }, 20);
}

});

//emits when socket is ready and listening for datagram msgs
server.on('listening',function(){
  var address = server.address();
  var port = address.port;
  var family = address.family;
  var ipaddr = address.address;
  server.setSendBufferSize(100000000);
  server.setRecvBufferSize(100000000);
  console.log('Server is listening at port' + port);
  console.log('Server ip :' + ipaddr);
  console.log('Server is IP4/IP6 : ' + family);
  console.log('Server accepts buffer size : ' + server.getRecvBufferSize());
  console.log('Server sends buffer size : ' + server.getSendBufferSize());
});

//emits after the socket is closed using socket.close();
server.on('close',function(){
  console.log('Socket is closed !');
});

server.bind(8043);
