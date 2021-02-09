from sense_hat import SenseHat
import time
import matplotlib.pyplot
import random

sense = SenseHat()


com=[]
tt=[]#tempature
hh=[]#humidity
pr=[]#pressure

color = [[0,0,0],
         [0,0,225],
         [0,225,0],
         [0,225,225],
         [225,0,0],
         [225,0,225],
         [225,225,0],
         [225,225,225]]
D = []
a = 0

matplotlib.pyplot.ion()

start = time.perf_counter()
while (True):
    if(time.perf_counter()-start<=30):
        com.append(round(time.perf_counter()-start,1))
        
        temp = sense.get_temperature()
        temp = round(temp,2)
        tt.append(temp)
        matplotlib.pyplot.subplot(2,2,1)
        matplotlib.pyplot.plot(com,tt,label = "Temprature")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("Temprature")
        matplotlib.pyplot.xlabel("time/s")
        matplotlib.pyplot.ylabel("Temperature/°C")
    
        humidity = sense.get_humidity()
        humidity = round(humidity,2)
        hh.append(humidity)
        matplotlib.pyplot.subplot(2,2,2)
        matplotlib.pyplot.plot(com,hh,label = "Humidity")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("Humidity")
        matplotlib.pyplot.xlabel("time/s")
        matplotlib.pyplot.ylabel("Humidity/%")
    
        pressure = sense.get_pressure()
        pressure = round(pressure,2)
        pr.append(pressure)
        matplotlib.pyplot.subplot(2,2,3)
        matplotlib.pyplot.plot(com,pr,label = "Pressure")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("Pressure")
        matplotlib.pyplot.xlabel("time/s")
        matplotlib.pyplot.ylabel("Pressure/kPa")
        
        
        matplotlib.pyplot.subplot(2,2,4)
        matplotlib.pyplot.plot(tt,hh,label = "MIX")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("MIX")
        matplotlib.pyplot.xlabel("Tempature/°C")
        matplotlib.pyplot.ylabel("Humidity/%")
        
    else:
        com.append(round(time.perf_counter()-start,1))
        del(com[0])
        temp = sense.get_temperature()
        temp = round(temp,2)
        tt.append(temp)
        del(tt[0])
        matplotlib.pyplot.subplot(2,2,1)
        matplotlib.pyplot.plot(com,tt,label = "Temprature")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("Temprature")
        matplotlib.pyplot.xlabel("time/s")
        matplotlib.pyplot.ylabel("Temperature/°C")
    
        humidity = sense.get_humidity()
        humidity = round(humidity,2)
        hh.append(humidity)
        del(hh[0])
        matplotlib.pyplot.subplot(2,2,2)
        matplotlib.pyplot.plot(com,hh,label = "Humidity")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("Humidity")
        matplotlib.pyplot.xlabel("time/s")
        matplotlib.pyplot.ylabel("Humidity/%")
    
        pressure = sense.get_pressure()
        pressure = round(pressure,2)
        pr.append(pressure)
        del(pr[0])
        matplotlib.pyplot.subplot(2,2,3)
        matplotlib.pyplot.plot(com,pr,label = "Pressure")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("Pressure")
        matplotlib.pyplot.xlabel("time/s")
        matplotlib.pyplot.ylabel("Pressure/kPa")
        
        matplotlib.pyplot.subplot(2,2,4)
        matplotlib.pyplot.plot(tt,hh,label = "MIX")
        matplotlib.pyplot.legend()
        matplotlib.pyplot.grid()
        matplotlib.pyplot.title("MIX")
        matplotlib.pyplot.xlabel("Tempature/°C")
        matplotlib.pyplot.ylabel("Humidity/%")
        
        for i in range(64):
            a = random.randint(1,7)
            D.append(color[a])
        sense.set_pixels(D)
        D = []
        
    matplotlib.pyplot.pause(0.05)
    
    matplotlib.pyplot.clf()
    

