#encoding:utf-8
import requests
api = "https://sc.ftqq.com/SCU121416Tdb36388de6409da34231fd26f7001dbe5f99882b20a49.send?text=喵喵喵~"
title = "喵喵喵"
content = """
    喵喵喵
"""
data = {
   "text":title,
   "desp":content
}
req = requests.post(api,data = data)
