# encoding:utf-8
import requests
api = "https://sc.ftqq.com/SCU121416Tdb36388de6409da34231fd26f7001dbe5f99882b20a49.send?text=warning!!!"
title = "There is a gas leak at home. Please solve the problem immediately"
content = "The gas alarm has been triggered, the exhaust fan has been turned on, and the solenoid valve has been closed. Please contact your family immediately."
data = {
   "text":title,
   "desp":content
}
req = requests.post(api,data = data)
