s = input('s字符串是:')
length = 0
maxs = ''
for x in s.split():
    if len(x) > length:
        length = len(x)
        maxs = x
print(maxs)
