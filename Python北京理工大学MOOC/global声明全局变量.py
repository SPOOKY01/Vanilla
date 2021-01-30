#global声明全局变量
n , s = 10 , 100
def fact(n):
    global s
    for i in range(1,n+1):
        s = s * i
    return s#此处s指全局变量
print(fact(n),s)#此处全局变量被函数改写。
