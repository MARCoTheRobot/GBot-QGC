<template>
    <div>
        <div class="message-container">
            <div v-for="message in messages" :key="message.id" class="message">
                {{ message.text }}
            </div>
        </div>
        <div class="input-container">
            <InputText v-model="newMessage" placeholder="Type your message" />
            <Button @click="sendMessage" label="Send" />
        </div>
    </div>
</template>

<script setup>
import  InputText  from 'primevue/inputtext';
import Button from 'primevue/button';
import { ref } from 'vue';

import { Buffer } from 'buffer';
import { UDP } from '@nws/capacitor-udp'

const messages = ref([]);
const newMessage = ref('');
const sock = ref(null);
const serverAddress = ["192.168.1.208",8043]
const sockID = 1

const sendMessage = () => {
    // Send the message using UDP
    // Add your UDP logic here
    const message = Buffer.from(newMessage.value);
    UDP.send({socketId: sockID, address: serverAddress[0], port: serverAddress[1], buffer: message.toString('base64')}).then(() => {
        console.log('Message sent');
    }).catch((e) => {
        console.error(e);
    });


    // Add the sent message to the messages array
    messages.value.push({
        id: Date.now(),
        text: newMessage.value,
    });

    // Clear the input field
    newMessage.value = '';
};

const initialize = async () => {
    try{
        await UDP.closeAllSockets();
        sock.value = await UDP.create({properties: {name: "vHARV7", bufferSize:65536}});
        console.log("The socket is:", sock.value);
        await UDP.bind({socketId: sock.value.socketId, port: serverAddress[1]});
        // UDP.joinGroup({socketId: sock.value.socketId, address: serverAddress[0]});
        UDP.addListener('receive', (data) => {
            console.log(data);
            messages.value.push({
                id: Date.now(),
                text: Buffer.from(data.buffer, 'base64').toString(),
            });
        });

}
catch(e){
    console.error(e);
}
}

initialize();
</script>

<style scoped>
.message-container {
    margin-bottom: 10px;
}

.message {
    background-color: #f2f2f2;
    padding: 10px;
    margin-bottom: 5px;
}

.input-container {
    display: flex;
    align-items: center;
}
</style>
