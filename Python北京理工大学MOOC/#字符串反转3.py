#字符串反转3.py
book = 'Python程序设计'
lenbook = len(book) - 1
result = ''
for index,value in enumerate(book):
 result += book[lenbook - index]
print(result)
