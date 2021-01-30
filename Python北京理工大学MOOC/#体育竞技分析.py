#体育竞技分析.py
from random import random

#介绍性内容，提高用户体验
def printIntro():
    print("这个程序模拟两个选手A和B的某种竞技比赛")
    print("程序运行需要A和B的能力值(以01之间的小数表示)")

#获得用户输入的三个参数
def getInputs():
    a = eval(input("请输入选手A的能力值(0-1): "))
    b = eval(input("请输入选手B的能力值(0-1): "))
    n = eval(input("模拟比赛的场次: "))
    return a , b , n

def gameOver(a, b):
    return a == 15 or b == 15

#
def printSummary(winsA, winsB):
    n = winsA + winsB
    print("竞技分析开始,共模拟{}场比赛".format(n))
    print("选手A获胜{}场比赛, 占比{:0.1%}".format(winsA, winsA/n))
    print("选手B获胜{}场比赛, 占比{:0.1%}".format(winsB, winsB/n))

#
def simOneGame(probA, probB):
    scoreA, scoreB = 0 , 0
    serving = "A"
    while not gameOver(scoreA, scoreB):
        if serving == "A":
            if random() < probA:
                scoreA = scoreA + 1
            else:
                serving = "B"
        else:
            if random() < probB:
                scoreB = scoreB +1
            else:
                serving = "A"
    return scoreA, scoreB

#
def simNGames(n, probA, probB):
    winsA, winsB = 0, 0
    for i in range(n):
        scoreA, scoreB = simOneGame(probA, probB)
        if scoreA > scoreB:
            winsA = winsA + 1
        else:
            winsB = winsB + 1
    return winsA, winsB

def main():
    printIntro()
    proA, proB, n = getInputs()
    winsA, winsB = simNGames(n,proA, proB)
    printSummary(winsA, winsB)

main()


