#最小二乘拟合直线，允许改变拟合点以及拟合直线x的范围 
import numpy as np
import matplotlib.pyplot as plt
from scipy import optimize

def f_1(x, A, B):
  return A * x + B

plt.figure()
# 拟合点，根据自己的需要来输入，对应列表长度的
x0 = [0.5, 1.0, 1.5, 2.0, 2.2, 2.4, 2.6, 2.8, 3.0]
y0 = [0.0, 1.3862943611198906, 2.70805020110221, 4.204692619390966, 4.727387818712341, 5.198497031265826, 5.720311776607412, 6.579251212010101, 7.549609165154532]

plt.scatter(x0[:], y0[:], 3, "red")

# 直线拟合与绘制
A1, B1 = optimize.curve_fit(f_1, x0, y0)[0]
x1 = np.arange(0,3.5, 0.0001)#这个是选择步长的步骤，也就是拟合出来的直线应该画多长
y1 = A1 * x1 + B1
plt.plot(x1, y1, "blue")
print("y={}*x+{}".format(A1,B1))

plt.title("")
plt.xlabel('t')
plt.ylabel('Mt/g')
plt.show()
