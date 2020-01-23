#斐波那契数列
print("采用函数递归思想，越往后运行会越慢！")
import time
start = time.perf_counter()
def f(n):
    if n == 1 or n == 2 :
        return 1
    else:
        return f(n-1) + f(n-2)
for i in range(1000):
    a=f(i+1)
    end = time.perf_counter()
    print("第{}个斐波那契额数列的值是:{}".format(i+1,a))
    print(end-start)
