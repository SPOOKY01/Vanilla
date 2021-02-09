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
'''
import RPi.GPIO as GPIO  #导入gpio口驱动模块
import time              #导入时间模块
pwm_pin = 18             #定义pwm输出引脚
 
GPIO.setmode(GPIO.BCM)   #定义树莓派gpio引脚以BCM方式编号
GPIO.setup(pwm_pin,GPIO.OUT)  #使能gpio口为输出
pwm = GPIO.PWM(pwm_pin,333)   #定义pwm输出频率
while True: 
    for i in range(47,80):       #for循环调整脉宽
	    print("ok")               #输出提示
	    pwm.start(i)              #启动pwm
	    time.sleep(0.05)           #延时
'''
