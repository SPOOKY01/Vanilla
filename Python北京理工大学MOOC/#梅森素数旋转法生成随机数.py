#梅森素数旋转法生成随机数.py
import random
for i in range(100):
    random.seed(i)
    for y in range(100):
        print(random.random())
