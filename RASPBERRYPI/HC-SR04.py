from time import sleep
from gpiozero import DistanceSensor

dis = DistanceSensor(14, 15)    #定义超声波的引脚
while True:
    print('', dis.distance, 'm')
    sleep(0.01)

from gpiozero import DistanceSensor , LED
from signal import pause

sensor = DistanceSensor(14, 15, max_distance=1, threshold_distance=0.1)  # 设置超声波引脚和检测最大距离、最小距离
led = LED(13)  # 设置LED引脚

sensor.when_in_range = led.on  # 当障碍物进入检测范围时，LED点亮
sensor.when_out_of_range = led.off  # 当障碍物不在检测范围时，LED熄灭


#HC-SR04(PIN=4)
#VCC-2
#TRIG-10
#ECHC-8
#GND-6
