from sense_hat import SenseHat
import time
import random
sense = SenseHat()
color=[[0,0,0],
       [0,0,255],
       [0,255,0],
       [0,255,255],
       [255,0,0],
       [255,0,255],
       [255,255,0],
       [255,255,255]]
D=[]
while True:
    time.sleep(1)
    
    temp = sense.get_temperature()
    temp1 = round(temp , 2)  
    temp = sense.get_temperature_from_humidity()
    temp2 = round(temp , 2) 
    temp = sense.get_temperature_from_pressure()
    temp3 = round(temp , 2) 
    #temp = 1.8 * round(temp, 1)  + 32
    print("Temperature C = {} ;\nTemperature C from Humidity = {} ;\nTemperature C from pressure = {}".format(temp1 , temp2 , temp3))
    humidity = sense.get_humidity()
    humidity = round(humidity , 2)
    pressure = sense.get_pressure()
    pressure = round(pressure , 2)
    print("Humidity = {} ; pressure = {}".format(humidity , pressure))    
    
    
    sense.set_imu_config(True , False , False)#只启用指南针
    north = sense.get_compass()#从磁力计获取以度为单位的北方向
    print("North = {}".format(round(north,3)))
    print("North = {}".format(round(sense.compass,3)))
    
    #raw = sense.get_compass_raw()#获取原始的x，y和z轴磁力计数据。
    #print("x: {x}, y: {y}, z: {z}".format(**raw))
    #print(sense.compass_raw)
    
    
    sense.set_imu_config(False , True , False)#只启用陀螺仪
    roll , pitch , yaw = sense.get_orientation().values()#获取当前俯仰轴，滚转轴，偏航轴的角度信息
    roll = round(roll , 2)
    pitch = round(pitch , 2)
    yaw = round(yaw , 2)
    print("Pitch Axis = {} , Roll Axis = {} , Yaw Axis = {}".format(pitch,roll,yaw))
    
    orientation = sense.get_orientation()#获取当前俯仰轴，滚转轴，偏航轴的角度信息。
    print("pitch = {}, roll  = {}, yell = {}".format(round(orientation["pitch"],2),round(orientation["roll"],2),round(orientation["yaw"],2)))
    
    orientation = sense.get_orientation_radians()#获取当前俯仰轴，滚转轴，偏航轴的弧度信息。
    print("pitch = {}, roll  = {}, yell = {}".format(round(orientation["pitch"],2),round(orientation["roll"],2),round(orientation["yaw"],2)))
    
    #gyro_only = sense.get_gyroscope()#仅从陀螺仪获取当前方向
    #print("p: {pitch}, r: {roll}, y: {yaw}".format(**gyro_only))
    #print(sense.gyro)
    #print(sense.gyroscope)
    
    #raw = sense.get_gyroscope_raw()#获取原始的x，y和z轴陀螺仪数据
    #print("x: {x}, y: {y}, z: {z}".format(**raw))
    #print(sense.gyro_raw)
    #print(sense.gyroscope_raw)
    
    sense.set_imu_config(False , False , True)#只启用加速度计
    accel_only = sense.get_accelerometer()#禁用磁力计和陀螺仪，然后仅从加速度计获取当前方向
    print("pitch = {pitch}, roll = {roll}, yaw = {yaw}".format(**accel_only))
    #print(sense.accel)
    #print(sense.accelerometer)
    
    acceleration = sense.get_accelerometer_raw()#获取原始的x，y和z轴加速度计数据
    x=round(acceleration['x'], 3)
    y=round(acceleration['y'], 3)
    z=round(acceleration['z'], 3)
    print("x = {}, y = {}, z = {}".format(x , y , z))

    
    for i in range(64):
        a = random.randint(1,8)
        D.append(color[a-1])
    sense.set_pixels(D)
    D=[]
