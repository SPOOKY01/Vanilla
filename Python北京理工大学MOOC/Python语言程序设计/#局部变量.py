n, s = 10, 100
def fact(n):
    s=1#s为局部变量
    for i in range(1,n+1):
        s=s*i
    return s
print(fact(n),s)
