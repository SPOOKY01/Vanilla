import cv2

#调用笔记本内置摄像头，所以参数为0，如果有其他的摄像头可以调整参数为1，2
cap=cv2.VideoCapture(0)
i=0
while True:
    #从摄像头读取图片
    sucess,img=cap.read()
    #转为灰度图片
    gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    #显示摄像头，背景是灰度。
    cv2.imshow("img",gray)
    #保持画面的持续。
    k=cv2.waitKey(1)
    i=i+1
    print(i)
