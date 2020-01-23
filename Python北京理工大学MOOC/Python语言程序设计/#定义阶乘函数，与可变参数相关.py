#定义阶乘函数，与可变参数相关.py
def fact(n, *b):#b是可变参数
    s=1
    for i in range(1,n+1):
        s=s*i
    for item in b :
        '''b为组合数据类型，它包含一个数或多个数。
        我们每一次将他们其中一个数取出来，并且与s相乘，
        最后把s值返回出来。'''
        s=s*item
    return s
