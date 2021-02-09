from sense_hat import SenseHat
import time
import matplotlib.pyplot

sense = SenseHat()


com=[]
rr=[]
pp=[]
yy=[]

matplotlib.pyplot.ion()

start = time.perf_counter()
sense.set_imu_config(False , True , False)#只启用陀螺仪

while (True):
    if(time.perf_counter()-start<=5000):
        com.append(round(time.perf_counter()-start,2))
        
        
        roll , pitch , yaw = sense.get_orientation().values()#获取当前俯仰轴，滚转轴，偏航轴的角度信息
        
        roll = round(roll , 2)
        rr.append(roll)
        pitch = round(pitch , 2)
        pp.append(pitch)
        yaw = round(yaw , 2)
        yy.append(yaw)
        
        matplotlib.pyplot.plot(com,rr,label = "Roll")
        matplotlib.pyplot.plot(com,pp,label = "Pitch")
        matplotlib.pyplot.plot(com,yy,label = "Yaw")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("Gyroscope")
        matplotlib.pyplot.xlabel("time/s")
        matplotlib.pyplot.ylabel("Theta/Angle")
    
       
        
    else:
        com.append(round(time.perf_counter()-start,2))
        del(com[0])
        
        sense.set_imu_config(False , True , False)#只启用陀螺仪
        roll , pitch , yaw = sense.get_orientation().values()#获取当前俯仰轴，滚转轴，偏航轴的角度信息
        
        roll = round(roll , 2)
        rr.append(roll)
        del(rr[0])
        
        pitch = round(pitch , 2)
        pp.append(pitch)
        del(pp[0])
        
        yaw = round(yaw , 2)
        yy.append(yaw)
        del(yy[0])
        
        matplotlib.pyplot.plot(com,rr,label = "Roll")
        matplotlib.pyplot.plot(com,pp,label = "Pitch")
        matplotlib.pyplot.plot(com,yy,label = "Yaw")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("Gyroscope")
        matplotlib.pyplot.xlabel("time/s")
        matplotlib.pyplot.ylabel("Theta/Angle")
        
    matplotlib.pyplot.pause(0.05)
    
    matplotlib.pyplot.clf()

    
