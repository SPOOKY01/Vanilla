#n!的计算，函数递归思想
print("输入：fact(n),n是正整数")
def fact(n):
    if n == 0 :
        return 1
    else :
        return n*fact(n-1)
