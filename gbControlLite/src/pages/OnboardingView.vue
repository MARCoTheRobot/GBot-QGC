<template>
    <div class="relative w-screen h-screen overflow-hidden bg-gradient-to-tr from-blue-900 to-blue-500">
        <!-- chat bubble -->
        <Toast position="top-center" group="headless-chat-messages">
            <template #container="{ message, closeCallback }">
                <div class="inline-flex items-start justify-start w-full p-4 rounded-lg bg-gradient-to-l from-blue-900/80 to-sky-600/60 backdrop-blur-sm"
                    @click="closeCallback">
                    <!-- <img :src="testSVG" alt="test" class="w-12 h-12" /> -->
                    <div class="flex-col ml-4">
                        <p class="text-lg text-white" v-html="message.detail" />
                    </div>


                </div>
            </template>
        </Toast>

        <!--MARCo Avatar-->
        <MarcoAvatar />

        <!--STEP 1 - Agree to terms and conditions-->
        <ConfirmDialog group="terms-and-conditions">
            <template #message="slotProps">
                <div class="flex flex-col items-center justify-center min-w-12">
                    <Vue3Lottie :animation-data="TermsAndConditionsLottie" class="w-1/2 h-1/2" />
                    <h1 class="text-2xl font-bold text-white">{{ slotProps.message.header }}</h1>
                    <p class="text-white">{{ slotProps.message.message }}</p>
                </div>

            </template>
        </ConfirmDialog>

        <!--STEP 2 - Add Emergency Contacts -->
        <Sidebar v-model:visible="showAddEmergencyContacts" position="bottom" :dismissable="false">
            <template #container="{ closeCallback }">
                <div class="flex flex-col items-start w-full gap-2 p-6">
                    <h2 class="text-2xl font-bold ">Add Emergency Contacts</h2>

                    <p>Here you can add your emergency contacts.</p>
                    <InputGroup>
                        <InputGroupAddon>
                            <i class="fi fi-us" />
                        </InputGroupAddon>

                        <InputText v-model="nextContact" placeholder="Enter phone number" type="tel"
                            @keyup.enter="addContact" />

                        <Button :label="t(`util.add`).toLocaleUpperCase()" icon="pi pi-plus" @click="addContact" />
                    </InputGroup>

                    <div class="w-full mt-4">
                        <h2 class="text-xl font-bold">Emergency Contacts</h2>
                        <ul class="w-full px-6 mt-2 space-y-2">
                            <li v-for="(contact, index) in contacts" :key="index"
                                class="flex items-center justify-between w-full p-3 rounded-md bg-slate-700">
                                <span class="font-bold">{{ contact.phoneNumber }}</span>
                                <Button text severity="warning" icon="pi pi-trash" @click="deleteContact(index)" />
                            </li>
                        </ul>
                    </div>


                    <div class="flex justify-end w-full gap-2">
                        <Button :label="t(`util.continue`).toLocaleUpperCase()" icon="pi pi-arrow-right"
                            class="w-full rounded-full" rounded :disabled="contacts.length < 1" icon-pos="right" @click="saveEmergencyContacts" />
                    </div>
                </div>
            </template>
        </Sidebar>



        <!--STEP 3 - Add own phone number?-->
        <Sidebar v-model:visible="showAddOwnPhoneNumber" position="bottom" :dismissable="false">
            <template #container="{ closeCallback }">
                <div class="flex flex-col items-start w-full gap-2 p-6">
                    <h2 class="text-2xl font-bold ">Add Phone Number</h2>

                    <p>Here you can add your own phone number.</p>
                    <InputGroup>
                        <InputGroupAddon>
                            <i class="fi fi-us" />
                        </InputGroupAddon>

                        <InputText v-model="ownPhoneNumber" placeholder="Enter phone number" type="tel"
                            @keyup.enter="addContact" />

                        <Button :label="t(`util.add`).toLocaleUpperCase()" icon="pi pi-plus" @click="addContact" />
                    </InputGroup>

                


                    <div class="flex justify-end w-full gap-2">
                        <Button :label="t(`util.continue`).toLocaleUpperCase()" icon="pi pi-arrow-right"
                            class="w-full rounded-full" rounded :disabled="contacts.length < 1" icon-pos="right" @click="saveOwnPhoneNumber" />
                    </div>
                </div>
            </template>
        </Sidebar>

        <!--STEP 4 - TODO: Customize MARCo-->


    </div>
</template>

<script setup lang="ts">
import Toast from 'primevue/toast';
import { ref, computed, watch } from 'vue';
import { useToast } from 'primevue/usetoast';
import MarcoAvatar from '@/components/marco-avatar.vue';
import { storeToRefs } from 'pinia';
import useUserStore from '@/store/user';
import ConfirmDialog from 'primevue/confirmdialog';
import { Vue3Lottie } from "vue3-lottie";
import TermsAndConditionsLottie from '@/assets/lotties/terms-and-conditions-check.json';
import { useConfirm } from 'primevue/useconfirm';
import Sidebar from 'primevue/sidebar';
import InputText from 'primevue/inputtext';
import InputGroup from 'primevue/inputgroup';
import Button from 'primevue/button';
import InputGroupAddon from 'primevue/inputgroupaddon';
import { useI18n } from 'vue-i18n';
const { t } = useI18n();
import "/node_modules/flag-icons/css/flag-icons.min.css";
import { useRouter } from 'vue-router';
const router = useRouter();

const toast = useToast();
const confirm = useConfirm();
const userStore = useUserStore();

const { currResponse } = storeToRefs(userStore);
const speechBubbles = ref<any>([]);
const speechBubbleLine = ref(0);
const showSpeechBubble = ref(false);
const speechBubInterval = ref<any>(null);

const showAddEmergencyContacts = ref(false);
const showAddOwnPhoneNumber = ref(false);
const ownPhoneNumber = ref<any>(null);

const contacts = ref<any>([]);
const nextContact = ref<any>(null);

const addContact = () => {
    contacts.value.push({ phoneNumber: nextContact.value });
    nextContact.value = null;
};

const deleteContact = (index: number) => {
    contacts.value.splice(index, 1);
};

watch(currResponse, (text) => {
    console.log("New Response", text);
    // console.log("New Response", newVal);
    if (text && text !== "") {
        console.log("New Response iiiissssss: ", text);

        speechBubbles.value = [];

        if (text[text.length - 1] !== '.' && text[text.length - 1] !== '!' && text[text.length - 1] !== '?') {
            text += '.';
        }
        speechBubbles.value = text.match(/[^\.!\?]+[\.!\?]+/g);

        speechBubbleLine.value = 0;

        try {
            clearTimeout(speechBubInterval.value);

        } catch (err) {
            console.log('No timeout to clear.');
        }

        const runIntervals = () => {
            if (speechBubbleLine.value < speechBubbles.value.length - 1) {
                speechBubbleLine.value++;
                const nextIntervalLength = speechBubbles.value[speechBubbleLine.value].length * 70;
                toast.add({
                    severity: "info",
                    // summary: "Check-up time!",
                    detail: JSON.stringify(speechBubbles.value[speechBubbleLine.value]),
                    group: "headless-chat-messages",
                    life: speechBubbles.value[speechBubbleLine.value].length * 90
                });
                speechBubInterval.value = setTimeout(runIntervals, nextIntervalLength);
            } else {
                try {
                    clearTimeout(speechBubInterval.value);
                    // TODO: Move towards the next step in the process
                    nextActionState.value++;
                    nextAction();

                } catch (err) {
                    console.log('No timeout to clear.');
                }
                showSpeechBubble.value = false;
                speechBubbleLine.value = -1;
            }
        };
        speechBubInterval.value = setTimeout(runIntervals, speechBubbles.value[0].length * 50);
        toast.add({
            severity: "info",
            // summary: "Check-up time!",
            detail: JSON.stringify(speechBubbles.value[speechBubbleLine.value]),
            group: "headless-chat-messages",
            life: speechBubbles.value[speechBubbleLine.value].length * 90
        });

        showSpeechBubble.value = true;

    }
    else {
        showSpeechBubble.value = false;
    }
});

const nextActionState = ref<any>(-1);
const nextAction = () => {
    switch (nextActionState.value) {
        case 0:
            confirm.require({
                group: "terms-and-conditions",
                header: "Terms and Conditions",
                message: "Please read and agree to the terms and conditions before proceeding.",
                accept: () => {
                    console.log("Accepted");
                    userStore.appendMARCoMessage(["Great! Let's move on to the next step.","Now, I'm just a robot, which means that I make mistakes and aren't equipped to handle emergencies. Please make sure to add your emergency contacts."]);
                },
                reject: () => {
                    console.log("Rejected");
                }
            })

            break;
        case 1:
            showAddEmergencyContacts.value = true;
            
            break;
        case 2:
            // Add own phone number
            showAddOwnPhoneNumber.value = true;
            break;
        case 3:
            // TODO: Customize MARCo
            // For now, we'll just redirect to home
          
            router.push("/");
            break;
        default:
            router.push("/");
            break;
    }
};

const saveEmergencyContacts = () => {
    userStore.appendMARCoMessage(["Superb!","Now, in case I need to get in touch with you about anything, what's a good number I can text you at?"]);
    showAddEmergencyContacts.value = false;

};

const saveOwnPhoneNumber = () => {
    userStore.appendMARCoMessage(["Awesome! I think we're just about ready to get started!"]);
    showAddOwnPhoneNumber.value = false;
};

setTimeout(() => {
    userStore.appendMARCoMessage(["Hey there! I'm MARCo: your Mental-Health Assisting Robot Companion.","I am SO excited to be your friend, coach, and counselor for all your mental health needs.", "But before we get into the super fun stuff, I first need you to accept my terms and conditions."]);

}, 1000);





</script>