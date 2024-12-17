// import DgramAsPromised from "dgram-as-promised"
import { Buffer } from 'buffer';
import { UDP } from '@nws/capacitor-udp'

export class EComm {
    private serverAddress: [string, number];
    private connectId: Buffer;
    private isRobot: boolean;
    private sock: any;
    private id: string;
    private sockID: number;
    private bufferSize: number;
    private latencyMillis: number;
    private lastReceiveTime: number;
    private connectionStatus: boolean;
    private dataPrefix: { [key: string]: Buffer };

    constructor(targetAddress: [string, number], id: string, isRobot: boolean) {
        this.serverAddress = targetAddress;
        this.connectId = Buffer.from(`<${id}>`);
        // this.isRobot = isRobot;
        this.isRobot = false; // This is the client app
        this.sockID = 1; // Initialize to 1
        this.id = id;
        
        // UDP.joinGroup({socketId: this.sockID, address: this.serverAddress[0]});
        // this.sock.setTimeout(100); // timeout after 0.1 seconds
        this.bufferSize = 65536;
        this.latencyMillis = 0;
        this.lastReceiveTime = 0;
        this.connectionStatus = false;
        this.dataPrefix = {
            'connect_request': Buffer.from('\x00'),
            'connection_check': Buffer.from('\x01'),
            'ack': Buffer.from('\x02'),
            'data': Buffer.from('\x03'),
            'punch_hole': Buffer.from('\x04'),
            'address': Buffer.from('\x05'),
            'client': Buffer.from('\x00'),
            'robot': Buffer.from('\x01')
        };
    }

    private _send(data: Buffer, address: [string, number]): number {
        // console.log("Sending data 123:", data);
        if (data.length > this.bufferSize || address.length === 0) {
            console.warn("Data too large or incorrect address");
            return 0; // data too large, doesn't fit in packet
        }
        try {
            const prefix = this.isRobot ? Buffer.concat([this.dataPrefix["robot"], this.dataPrefix["client"]]) : Buffer.concat([this.dataPrefix["client"], this.dataPrefix["robot"]]);
            // this.sock.send(Buffer.concat([prefix, data]), address[1], address[0]);
            const concatenatedBuffer = Buffer.concat([prefix, data]);
            // console.log("the concatenated buffer:", concatenatedBuffer);
            const bufferString = concatenatedBuffer.toString('base64');
            // console.log("Sending data 123:", bufferString);
            UDP.send({socketId: this.sockID, address: address[0], port: address[1], buffer: bufferString});
        } catch (error) {
            if (error.code === 'EAI_AGAIN') {
                console.error("incorrect address");
            }
            return 0;
        }
        return 1;
    }

    public send(data: Buffer): number {
        // console.log("Sending data BBBB:", data);
        // console.log('Returning data to string BBBB:', data.toString());
        return this._send(Buffer.concat([this.connectId, data]), this.serverAddress);
    }

    public sendS(data: Buffer): number {
        
        this.send(Buffer.concat([this.dataPrefix['data'], data]));
        return 1;
    }

    public receiveLoop(recvFunction: (data: Buffer) => void): void {
        // console.log("Starting receive loop");
        let lastConnectionCheckTime = 0;
        const connectionCheckInterval = 0.5;
        let lastAckTime = 0;
        const maxAckTime = 1;
        UDP.addListener('receive', (data:any) => {
            // console.log("Received data, data:", data);
            const data1 = Buffer.from(data.buffer, 'base64');
            const rinfo = {address: this.serverAddress[0], port: this.serverAddress[1]};
            if ((rinfo.address === this.serverAddress[0] && rinfo.port === this.serverAddress[1])) {
                // console.log("Made it to decode data");
                const decodeData = data1.slice(0, this.connectId.length).toString();
                // console.log("Decoded data:", decodeData);
                if (this.connectId.equals(data1.slice(decodeData.indexOf('<'), decodeData.indexOf('>') + 1)) || true) {
                    // console.log("Made it to step 2");

                    let data2 = data1.slice(decodeData.indexOf('>') + 1);
                    const dataTarget = data2.slice(0, 1);
                    data2 = data2.slice(1);

                    // console.log("Data target:", dataTarget, "Data Prefix:", this.dataPrefix['data']);

                    if (dataTarget.equals(this.dataPrefix['data'])) {
                        recvFunction(data2);
                        this.lastReceiveTime = Date.now();
                    } else if (dataTarget.equals(this.dataPrefix['connection_check'])) {
                        this.send(Buffer.concat([this.dataPrefix['ack'], data1]));
                    } else if (dataTarget.equals(this.dataPrefix['ack'])) {
                        lastAckTime = Date.now() / 1000;
                        try {
                            this.latencyMillis = (Date.now() / 1000 - parseFloat(data.toString())) * 1000;
                        } catch (error) {
                            // could not convert float (data)
                        }
                    }
                }
            }
        });

        UDP.addListener('receiveError', (error: any) => {
            console.error("Error receiving data: ", error);
        });

        setInterval(() => {
            if (Date.now() / 1000 - lastConnectionCheckTime > connectionCheckInterval) {
                this.send(Buffer.concat([this.dataPrefix['connection_check'], Buffer.from(Date.now().toString())]));
                lastConnectionCheckTime = Date.now() / 1000;
            }
            this.connectionStatus = Date.now() / 1000 - lastAckTime < maxAckTime;

            
        }, 500);
    }

    public async initialize(): Promise<number> {
        this.sock = UDP.create({properties: {name: this.id, bufferSize:65536}});
        // console.log("The address port is:", this.serverAddress[1]);
        await UDP.bind({socketId: this.sockID, port: this.serverAddress[1]});
        
        // console.log("Initializing");
        return 1;
    }
}