#pow(a,b)最接近某一个整数。题目中给出的一个数值3269869426
a=[[0,0]]
for i in range(1000):
        for j in range(1000):
                a.append([i,j])
                
b=[]
for i in range(1000000):
        if pow(a[i][0],a[i][1])<3300000000:
                if pow(a[i][0],a[i][1])>3100000000:
                        b.append(pow(a[i][0],a[i][1]))
                        print(pow(a[i][0],a[i][1]),a[i])
print(b)
c=[]
for i in range(len(b)):
        c.append(b[i]-3269869426)
print(c)
