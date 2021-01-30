#TEST.py
#题目的意思是，一共有若干个不同的数字，将他们排列起来，求出最大的那个
import time
t1=time.perf_counter()
list1=[]
list2=[]
list3=[]
list4=[]
#输入这些数字
a=eval(input("请输入你要输入多少个数字："))
for i in range(a):
    list1.append(input())
print(list1)
t2=time.perf_counter()
print("第一阶段输入数字用时{}".format(t2-t1))
for i in range(a):
    list3.append(i)
def permute(nums):
    from functools import reduce
    result = [list(i) for i in reduce(lambda x,y:[str(a)+str(b) for a in x for b in y if str(b) not in str(a) ],[nums]*len(nums))]
    return result
list2=permute(list3)
t3=time.perf_counter()
print("第二阶段用时{}".format(t3-t2))
b=1
for i in range(a):
    b=b*(i+1)

for i in range(b):
    c=''
    for j in range(a):
        c=c+list1[eval(list2[i][j])]
    list4.append(c)
t4=time.perf_counter()
print("第三阶段用时{}".format(t4-t3))
d=eval(list4[0])
for i in range(b):
    if(int(d)<=int(list4[i])):
        d=list4[i]
print("max={}".format(d))
t5=time.perf_counter()
print("第四阶段用时{}".format(t5-t4))
