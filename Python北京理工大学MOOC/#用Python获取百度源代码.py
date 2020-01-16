#用Python获取百度源代码
import urllib.request;
res = urllib.request.urlopen('http://www.baidu.com/');
print(res.status)
print(res.getheaders())
