import { Preferences } from '@capacitor/preferences'; //Import the preferences plugin to manage local storage
import { Device } from "@capacitor/device";
import { BleClient, numbersToDataView, ScanMode } from "@capacitor-community/bluetooth-le";
import { UseMutationReturnType, UseQueryReturnType, useMutation, useQuery, useQueryClient } from "@tanstack/vue-query";

const bleEncoder = new TextEncoder();
const MARCO_ERROR_CODE = numbersToDataView(bleEncoder.encode('E'));
const MARCO_LISTEN_CODE = numbersToDataView(bleEncoder.encode('L'));
const MARCO_DONE_LISTENING_CODE = numbersToDataView(bleEncoder.encode('D'));
const MARCO_START_TALKING_CODE = numbersToDataView(bleEncoder.encode('T'));
const MARCO_STOP_TALKING_CODE = numbersToDataView(bleEncoder.encode('t'));
const MARCO_PWR_OFF = numbersToDataView(bleEncoder.encode('F'));
const MARCO_PWR_ON = numbersToDataView(bleEncoder.encode('N'));
const MARCO_SMILE_CODE = numbersToDataView(bleEncoder.encode('S'));
const MARCO_FROWN_CODE = numbersToDataView(bleEncoder.encode('f'));
const MARCO_NEUTRAL_CODE = numbersToDataView(bleEncoder.encode('n'));
const MARCO_MOUTH_OPEN_CODE = numbersToDataView(bleEncoder.encode('o'));
const MARCO_START_SERVOS_CODE = numbersToDataView(bleEncoder.encode('M'));
const MARCO_KILL_SERVOS_CODE = numbersToDataView(bleEncoder.encode('k'));
const MARCO_RECEIVED_EVENTS = {
			B: {
				name: 'MARCO_BUTTON_PRESSED',
				action: async function () {
					console.log('Button pressed');
					// EventBus.$emit('button-pressed');
				},
			},
			b: {
				name: 'MARCO_BUTTON_RELEASED',
				action: async function () {
					console.log('Button released');
					// EventBus.$emit('button-released');
				},
			},
		};

export const useLaunchScan = () => {
    const key = ['ble/scan'];
    return useQue
}