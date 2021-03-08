import math
import matplotlib.pyplot


x = [0,10,20,30,40,50,60,70,80,90]
y1 = []
for i in x:
    y1.append(100*math.cos(i*math.pi/180))
y2 = [100,96.98,88.30,75.00,58.68,41.32,25,11.70,3.02,0]

matplotlib.pyplot.plot(x, y1, label = 'Theoretical value')
matplotlib.pyplot.plot(x, y2, label = 'Experimental value')
matplotlib.pyplot.plot(x, y1, 'ro')
matplotlib.pyplot.plot(x, y2, 'rp')
matplotlib.pyplot.xlabel('theta/°')
matplotlib.pyplot.ylabel('I/uA')
matplotlib.pyplot.title('TEST')
matplotlib.pyplot.legend(loc = 0)
matplotlib.pyplot.grid(True)
matplotlib.pyplot.show()
