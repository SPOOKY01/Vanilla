def zheng(n):
    li=[]
    for i in range(1,n,1):
        if (n%i==0):#整数可以继续执行
            li.append(i)
    print(li)
