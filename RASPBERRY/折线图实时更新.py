import matplotlib.pyplot as plt
import math
import time

plt.ion()
plt.figure(1)
tt = []
rt = []
t = 0


while True:
    
    if(t<=10):
        
        tt.append(t)
        print(tt)
        rt.append(math.sin(t))
        print(rt)
        plt.plot(tt,rt,c='r',ls='-', marker='o', mec='b',mfc='w')
    else:
        tt.append(t)
        print(tt)
        rt.append(math.sin(t))
        print(rt)
        
        del(tt[0])
        del(rt[0])
        
        plt.plot(tt,rt,c='r',ls='-', marker='o', mec='b',mfc='w')

    t = t + 0.1
    plt.pause(0.01)
    plt.clf()

