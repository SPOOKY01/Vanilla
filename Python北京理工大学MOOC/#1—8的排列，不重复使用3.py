#1-8
num_list = [1,2,3,4,5,6]
def permute(nums):
    from functools import reduce
    result = [list(i) for i in reduce(lambda x,y:[str(a)+str(b) for a in x for b in y if str(b) not in str(a) ],[nums]*len(nums))]
    return result
print(permute(num_list))
'''先执行[nums]*len(nums)生成一个二维列表，也就是[[1,2,3,4,5,6,7,8],[1,2,3,4,5,6,7,8],[1,2,3,4,5,6,7,8],
[1,2,3,4,5,6,7,8],[1,2,3,4,5,6,7,8],[1,2,3,4,5,6,7,8],[1,2,3,4,5,6,7,8],[1,2,3,4,5,6,7,8]];
借助reduce累计运算功能将数字转换成字符串拼接到一起，如果新取出的数和之前的不重复就继续拼接；
也就是执行[str(a)+str(b) for a in x for b in y if str(b) not in str(a)],生成的是列表
最后由于生成的是字符串，转为列表'''
