#CalpiV1.py
#蒙特卡罗方法
from time import perf_counter
import math
start = perf_counter()
pii = 0
N = 10000000000
for k in range(N):
    pii += 1/pow(16,k)*(4/(8*k+1)-2/(8*k+4)-1/(8*k+5)-1/(8*k+6))
    print("圆周率的值为：{}".format(pii))
    print("运行时间为：{:.5f}s".format(perf_counter()-start))
    print("绝对误差为：{}".format(abs(math.pi-pii)))
    print("相对误差为：{}".format(abs((math.pi-pii))/math.pi))
