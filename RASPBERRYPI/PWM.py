import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)
GPIO.setup(22, GPIO.OUT)

p = GPIO.PWM(22,500)
p.start(0)

while 1:
    for i in range(1,100,1):
        p.ChangeDutyCycle(i)
        time.sleep(0.04)
GPIO.cleanup()
