#1_8排列，不重复.py
import string
num_list = [1,2,3]
length = len(num_list)
var = tuple([string.ascii_lowercase[i] for i in range(length)])#生成字母代表的变量序列
temp = "["+' , ' .join(var)+"]"
result = eval("["+temp+' '.join(['for %s in num_list '%i for i in ' '.join(var)])+'if len(set(%s))==3'%temp+"]")

print(result)
'''eval()将字符串当作有效的Python表达式来执行，测试框架中拼接指令的时候用的很多'''
