#Fourier Transform
import math
import time
import matplotlib.pyplot
#def fourier_sin(w,n,j,i)
#占空比，频率（角频率，角速度），直流分量大小
E=12
w=30
x=[]
y=[]
a=0

#计算经过叠加后的因变量的值
for i in range(100000):
    x.append(i/(20000*math.pi))
    for j in range(1,100000):#叠加的阶数,奇数次谐波=(2*j-1)
        a=a+math.sin((2*j-1)*w*x[i])/(2*j-1)
        
    y.append(a)
    a=0
matplotlib.pyplot.plot(x,y)
matplotlib.pyplot.show()
