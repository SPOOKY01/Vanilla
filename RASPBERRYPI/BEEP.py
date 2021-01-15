import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
while True:
    GPIO.setup(17, GPIO.OUT)
    for i in range (10):
        GPIO.output(17, GPIO.HIGH)
        time.sleep(0.05)
        GPIO.output(17, GPIO.LOW)
        time.sleep(0.05)
    GPIO.output(17, GPIO.LOW)
    time.sleep(0.6)
