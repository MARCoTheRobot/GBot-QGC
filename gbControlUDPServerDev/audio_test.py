import os
import sys
#sys.path.append(os.path.dirname(os.path.dirname(sys.path[0])) + '\\robot') # difficult import, will be resolved when external comm is placed parallel to this file
from external_comm import *
import threading
import tkinter as tk
from tkinter import filedialog
import pygame
import json
import base64
import cv2
from PIL import Image, ImageTk
import numpy
import time
from datetime import datetime
import pyaudio


class Audio:
    def __init__(self, parent) -> None:
        self.parent = parent
        self.last_transcript = 0
        self.last_audio = 0

        self.CHUNK = 3200
        self.FORMAT = pyaudio.paFloat32
        self.CHANNELS = 1
        self.RATE = 16000
        self.pa = pyaudio.PyAudio()

        # refers to the local speaker and mic on your computer NOT the robots hardware
        self.audio_speaker = self.pa.open(format=self.FORMAT,channels=self.CHANNELS,rate=self.RATE,output=True)

    def audio_data(self, data):
        self.last_audio = time.time()
        # if the motors on the robot are rotating then the audio should not be amplified since there is alot of background noise however if not the amplification should be done
        SPEED_AFFECT = 6
        MAX_VOLUME = 8
        motors = self.parent.motors.last_speed_value_motors
        max_motor_speed = max(abs(motors[0]), abs(motors[1]))
        multi = pow(1. - max_motor_speed, SPEED_AFFECT)
        arr = numpy.frombuffer(data, dtype=numpy.float32)
        arr = arr * (multi*MAX_VOLUME+1)
        self.audio_speaker.write(arr.astype(numpy.float32).tobytes())

    def update_audio_status(self):
        MAX_TIME_AUDIO = 1.
        # gui.audio_status.update(time.time() - self.last_audio < MAX_TIME_AUDIO)

    def transcript_received(self, data):
        self.last_transcript = time.time()
        self.update_transcript_status()
        # parse the transcript
        is_final = False
        text = ""
        for k, i in data.items():
            if k == "message_type" and i == "FinalTranscript":
                is_final = True
            if k == "text":
                text = i
        # if not is_final:
            # gui.audio_transcript_vis.update(text)

    def update_transcript_status(self):
        MAX_TIME_TRANSCRIPT = 1.
        # gui.transcript_status.update(time.time() - self.last_transcript < MAX_TIME_TRANSCRIPT)
            
    def send_audio_slave(self):
        def sending_audio():
            try:
                mic = self.pa.open(format=self.FORMAT, channels=self.CHANNELS, rate=self.RATE, input=True, frames_per_buffer=self.CHUNK)
            except OSError:
                print("No microphone found!   Connect one and try again.")
                return
            while gui.send_audio:
                data = mic.read(self.CHUNK, exception_on_overflow=False)
                arr = numpy.frombuffer(data, dtype=numpy.float32)
                self.parent.audio_comm.send_s(self.parent.data_prefix["audio"] + arr.astype(numpy.float32).tobytes())
            mic.close()
        threading.Thread(target=sending_audio, daemon=True).start()

last_transcript = 0
last_audio = 0

CHUNK = 3200
FORMAT = pyaudio.paFloat32
CHANNELS = 1
RATE = 16000
pa = pyaudio.PyAudio()
CONNECTION_PASSWORD = "HARV7"
audio_comm = E_COMM(("harv7.harv-guardbot.org",8044), "a" + CONNECTION_PASSWORD, False)
data_prefix = {'video':'\x00'.encode(),
                            'detections':'\x01'.encode(),
                            'json_data':'\x02'.encode(),
                            'audio':'\x03'.encode()}

try:
    mic = pa.open(format=FORMAT, channels=CHANNELS, rate=RATE, input=True, frames_per_buffer=CHUNK)
except OSError:
    print("No microphone found!   Connect one and try again.")
    exit()
while True:
    data = mic.read(CHUNK, exception_on_overflow=False)
    print("The length of the data is: ", len(data))
    arr = numpy.frombuffer(data, dtype=numpy.float32)
    print("The length of the array is: ", len(arr), " and also ", len(arr.astype(numpy.float32).tobytes()))
    audio_comm.send_s(data_prefix["audio"] + arr.astype(numpy.float32).tobytes())
    output = arr.astype(numpy.float32).tobytes()
    outputUint8 = numpy.frombuffer(output, dtype=numpy.uint8)
    print("sent bytes, ")
    print(outputUint8)
    with open("output_uint8.txt", "w") as f:
        f.write(" ".join(map(str, outputUint8)))
    # print("Sent the following data: ", data_prefix["audio"] + arr.astype(numpy.float32).tobytes())