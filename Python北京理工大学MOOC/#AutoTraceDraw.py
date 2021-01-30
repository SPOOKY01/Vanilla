#AutoTraceDraw.py
import turtle
turtle.title('自动绘制轨迹')
turtle.setup(800,600,0,0)
turtle.pencolor("red")
turtle.pensize(5)

#数据读取
datals = []
f = open("data.txt")
for line in f:
    line =line.replace("\n", "")
    datals.append(list(map(eval, line.split(","))))
f.close()
#自动绘制
for i in range(len(datals)):
    turtle.pencolor(datals[i][3], datals[i][4], datals[i][5])
    turtle.fd(datals[i][0])
    if datals[i][1]:
        turtle.right(datals[i][2])
    else:
        turtle.left(datals[i][2])
