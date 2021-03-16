from __future__ import division
import cv2
import numpy as np

# global
# HSV 色值：
GREEN = [40, 65, 13, 80, 255, 255]  # Green
YELLOW = [20, 103, 80, 40, 255, 255]  # Yellow
BLUE = [94, 81, 82, 126, 255, 255]  # Blue
RED = [0, 144, 0, 20, 255, 255]   # Red

# default value: Blue 蓝色
lowHue = BLUE[0]
lowSat = BLUE[1]
lowVal = BLUE[2]
highHue = BLUE[3]
highSat = BLUE[4]
highVal = BLUE[5]


# 排列：green, yellow, blue, red
defaultColor = [0, 0, 1, 0]  # 蓝色
color = "BLUE"  # 现在的颜色
blueColor = (255, 0, 0)  # 蓝色
greenColor = (0, 255, 0)  # 绿色
redColor = (0, 0, 255)  # 红色


# 图像色调和追踪
def frame_mask_contour(image):
    frameHSV = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

    colorLow = np.array([lowHue, lowSat, lowVal])
    colorHigh = np.array([highHue, highSat, highVal])

    mask = cv2.inRange(frameHSV, colorLow, colorHigh)

    # get contours
    contours, hierarchy = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)
    contour_sizes = [(cv2.contourArea(contour), contour) for contour in contours]

    count = len(contour_sizes)
    
    found = False
    i=0
    if count > 0:
        
        for cnt in contours:
            area = cv2.contourArea(cnt)
            if area > 4000:
                x, y, w, h = cv2.boundingRect(cnt)
                i=i+1
                print(i)
                cv2.rectangle(image, (x, y), (x + w, y + h), greenColor, 2)
                print(x,y,w,h)
                found = True
                if i == 1 :
                    square = "x={} , y={} , x+w={} , y+h={}".format(x,y,x+w,y+h)
                    area = "S = {}".format(w*h)
                    cv2.putText(image, square,(50,100),cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
                    cv2.putText(image, area,(50,150),cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
                elif i == 2:
                    square = "x={} , y={} , x+w={} , y+h={}".format(x,y,x+w,y+h)
                    area = "S = {}".format(w*h)
                    cv2.putText(image, square,(50,200),cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
                    cv2.putText(image, area,(50,250),cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
                elif i == 3:
                    square = "x={} , y={} , x+w={} , y+h={}".format(x,y,x+w,y+h)
                    area = "S = {}".format(w*h)
                    cv2.putText(image, square,(50,300),cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
                    cv2.putText(image, area,(50,350),cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
                elif i == 4:
                    square = "x={} , y={} , x+w={} , y+h={}".format(x,y,x+w,y+h)
                    area = "S = {}".format(w*h)
                    cv2.putText(image, square,(50,400),cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
                    cv2.putText(image, area,(50,450),cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
                else:
                    continue
    if found:
        text = f'Found {color} object'
        print(text)
        cv2.putText(image, text, (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)
    else:
        text = "Not Found!"
        print("Not Found! 没有找到！")
        cv2.putText(image, text, (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)

    return mask, image


# 绿色控制
def greenCtrl(val):
    global defaultColor, color
    color = 'GREEN'
    defaultColor = [1, 0, 0, 0]
    assignColor(GREEN)
# 黄色控制
def yellowCtrl(val):
    global defaultColor, color
    color = 'YELLOW'
    defaultColor = [0, 1, 0, 0]
    assignColor(YELLOW)
# 蓝色控制
def blueCtrl(val):
    global defaultColor, color
    color = 'BLUE'
    defaultColor = [0, 0, 1, 0]
    assignColor(BLUE)
# 红色控制
def redCtrl(val):
    global defaultColor, color
    color = 'RED'
    defaultColor = [0, 0, 0, 1]
    assignColor(RED)


vidCapture = cv2.VideoCapture(0)

vidCapture.set(cv2.CAP_PROP_FRAME_WIDTH,800)#FRAME_WIDTH = 800
vidCapture.set(cv2.CAP_PROP_FRAME_HEIGHT,600)#FRAME_HEIGHT = 600

video_win = 'Frame'
cv2.namedWindow(video_win, cv2.WINDOW_AUTOSIZE)
cv2.moveWindow(video_win, 855, 0)
'''
# =====================================
# Window 窗口： Demo
# =====================================
demo_win = 'Demo'
cv2.namedWindow(demo_win)
cv2.moveWindow(demo_win, 205, 0)
'''

while True:
    
    # Get webcam frame.获取网络摄像头帧。
    _, frame = vidCapture.read()

    # Show the original image.显示原始图像。
    demo, frame_contour = frame_mask_contour(frame)
    cv2.imshow(video_win, frame_contour)
    #cv2.imshow(demo_win, demo)

    key = cv2.waitKey(10)
    
    
vidCapture.release()  # release()释放摄像头
cv2.destroyAllWindows()  # 调用destroyAllWindows()关闭所有图像窗口。

