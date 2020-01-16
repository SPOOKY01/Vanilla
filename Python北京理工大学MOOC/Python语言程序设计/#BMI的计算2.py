#CalBMIv2.py
BMI的计算
height, weight = eval(input("请输入身高（meter)和体重\（kg）[逗号隔开]: "))
bmi = weight/pow(height , 2)
print("BMI指数为:{:.2f}".format(bmi))
who = ""
if bmi < 18.5:
    who = "偏瘦"
if 18.5 <= bmi < 24:
    who = "正常"
elif 24 <= bmi < 28:
    who = "偏胖"
else :
    who = "肥胖"
print("BMI指数为：国内'{0}'".format(who))
