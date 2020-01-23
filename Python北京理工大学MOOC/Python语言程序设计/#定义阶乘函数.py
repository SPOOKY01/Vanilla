#定义阶乘函数.py
def fact(n,m=4):
    s = 1
    for i in range(1,n+1):
        s=s*i
    return s//m
