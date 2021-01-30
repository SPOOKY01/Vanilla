from tkinter import *
import urllib.request
import os
import re


# #####下载保存模块######
def url_open(url):
    req = urllib.request.Request(url)
    req.add_header('User-Agent',
                   'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36')
    resp = urllib.request.urlopen(req)
    html = resp.read().decode('utf-8')
    return html


# #####根据得到的html文本查找网页中存在的图片####
def get_imgs(html):
    p = r'<img class="BDE_Image" src="([^"]+\.jpg)"'
    imglist = re.findall(p, html)

    for each in imglist:
        filename = each.split('/')[-1]
        urllib.request.urlretrieve(each, filename, None)


def download():
    url = e1.get()
    folder = e2.get()
    print(url)
    print(folder)
    os.mkdir(folder)  # 创建文件夹
    os.chdir(folder)  # 切换到文件夹目录
    get_imgs(url_open(url))

# #######GUI界面############
root = Tk()
root.title('贴吧图片下载器')
Label(root, text='贴吧链接：').grid(row=0, column=0)
Label(root, text='下载目录：').grid(row=1, column=0)

e1 = Entry(root)
e2 = Entry(root)

e1.grid(row=0, column=1, padx=10, pady=5)
e2.grid(row=1, column=1, padx=10, pady=5)

Button(root, text='下载', width=10, command=download) \
    .grid(row=2, column=0, sticky=W, padx=10, pady=5)
Button(root, text='退出', width=10, command=root.quit) \
    .grid(row=2, column=1, sticky=E, padx=10, pady=5)

mainloop()
