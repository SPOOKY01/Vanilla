#CalHamletV1.py
def getText():#获得干净的文本
    txt = open("hamlet.txt", "r").read()
    txt = txt.lower()
    for ch in'!"#$%&()*+,-./:;<=>?@[\\]^_{|}~':#将特殊符号全部替换成空格
        txt = txt.replace(ch,  " ")
    return txt

hamletTxt = getText()
words = hamletTxt.split()
counts = {}
for word in words:
    counts[word] = counts.get(word,0)+1
items = list(counts.items())
items.sort(key=lambda x:x[1], reverse=True)#列表类型的sort方法
for i in range(10):
    word, count = items[i]
    print("{0:<10}{1:>5}".format(word, count))
    
