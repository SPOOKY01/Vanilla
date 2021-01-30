import os

def system(*args, **kwargs): # real signature unknown
    """ Execute the command in a subshell. """
    pass
URL=input("请输入URL：")
a=eval(input("请输入循环次数："))
for i in range(a):
    cmd='you-get '+URL+str(i)
    os.system(cmd)
