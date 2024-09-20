import socket
import time
import threading
import os


# will send packets with added layers of directional transmitting
# a packet will have a file based layer and a function based layer
# the packet has the file layer wrapped around the base layer, aswell as the base layer wrapping the core data
# all transmission layers are a single byte long

class E_COMM:
    def __init__(self, target_address:tuple,id:str, is_robot:bool) -> None:
        self.server_address = target_address
        self.connect_id = ("<" + id + ">").encode()

        self.is_robot = is_robot

        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        #self.sock.bind(("localhost", port))
        self.sock.settimeout(0.1) # timeout after 0.1 seconds
        self.buffer_size = 65536

        self.latency_millis = 0.
        self.last_receive_time = 0.
        self.connection_status = False

        self.data_prefix = {'connect_request':'\x00'.encode(), 
                            'connection_check':'\x01'.encode(), 
                            'ack':'\x02'.encode(), 
                            'data':'\x03'.encode(), 
                            'punch_hole':'\x04'.encode(), 
                            'address':'\x05'.encode(),
                            "client":"\x00".encode(),
                            "robot":"\x01".encode()
                        }


    def _send(self, data:bytes, address:tuple):    
        if len(data) > self.buffer_size or address == (): 
            return 0 # data too large, doesnt fit in packet
        try:
            #print(data, address)
            self.sock.sendto(
                (self.data_prefix["client"] + self.data_prefix["robot"]) if self.is_robot else (self.data_prefix["robot"] + self.data_prefix["client"])
                 + data, address)
        except socket.gaierror: # means that there is no correct address to send to 
            print("incorrect address")
            return 0
        except socket.timeout:
            return 0
        #except:
         #   print("unknown error")
          #  pass
            # os._exit(1)
        return 1
    
    def send(self, data:bytes): # will send data to connected client
        return self._send(self.connect_id + data, self.server_address)
    
    def send_s(self, data:bytes):
        self.send(self.data_prefix['data'] + data)
        return 1
    
    def receive_loop(self, recv_function): # will run forever and requires a function to be passed that handles data throughput 
        # DO NOT PASS A BLOCKING FUNCTION, will not allow for functional communication
        # every time interval send a "connection check" 
        # make sure that a response is received every time interval + extra time
        last_connection_check_time = 0.
        connection_check_interval = 0.5

        last_ack_time = 0
        max_ack_time = 1.

        while True:

            if time.time() - last_connection_check_time > connection_check_interval:
                self.send(self.data_prefix['connection_check'] + str(time.time()).encode())
                last_connection_check_time = time.time()
            self.connection_status = time.time() - last_ack_time < max_ack_time

            try:
                data, address = self.sock.recvfrom(self.buffer_size)
            except socket.timeout:
                continue # nothing to be done just wait for next loop
            except ConnectionResetError:
                continue
            
            
            data_target = None


            if address == self.server_address:
                try:
                    decode_data = data[:len(self.connect_id)].decode()
                except: 
                    continue
                if self.connect_id == data[decode_data.find('<'):decode_data.find('>')+1]:
                    data = data[decode_data.find('>')+1:]
                    data_target = data[:1]
                    data = data[1:]
                else: continue
                # first layer of prefix is unwrapped here
                #print("received data: ", data)
                if data_target == self.data_prefix['data']:
                        recv_function(data) # run recv function with specified data
                        self.last_receive_time = time.time()
                        continue
                
                # connection dependent on received data
                if data_target == self.data_prefix['connection_check']:
                    self.send(self.data_prefix['ack'] + data)
                if data_target == self.data_prefix['ack']:
                    last_ack_time = time.time()
                    try:
                        self.latency_millis = (time.time() - float(data)) * 1000
                    except ValueError:
                        # could not convert float (data)
                        pass
