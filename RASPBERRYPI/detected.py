from __future__ import division
import cv2
import numpy as np

# ==================================================================
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

# 滑动名称
blue_bar = 'Blue'
red_bar = 'Red'
yellow_bar = 'Yellow'
green_bar = 'Green'

# 排列：green, yellow, blue, red
defaultColor = [0, 0, 1, 0]  # 蓝色
color = "BLUE"  # 现在的颜色
blueColor = (255, 0, 0)  # 蓝色
greenColor = (0, 255, 0)  # 绿色
redColor = (0, 0, 255)  # 红色


# 图像色调和追踪
def frame_mask_contour(image):
    frameHSV = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

    # HSV values to define a colour range we want to create a mask from.
    # HSV值来定义要从中创建遮罩的颜色范围。
    colorLow = np.array([lowHue, lowSat, lowVal])
    colorHigh = np.array([highHue, highSat, highVal])

    mask = cv2.inRange(frameHSV, colorLow, colorHigh)

    # get contours
    contours, hierarchy = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)
    contour_sizes = [(cv2.contourArea(contour), contour) for contour in contours]

    count = len(contour_sizes)
    found = False
    if count > 0:
        for cnt in contours:
            area = cv2.contourArea(cnt)
            if area > 2000:
                x, y, w, h = cv2.boundingRect(cnt)
                cv2.rectangle(image, (x, y), (x + w, y + h), greenColor, 2)
                found = True

    if found:
        text = f'Found {color} object'
        print(text)
        cv2.putText(image, text, (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, blueColor, 2)
    else:
        text = "Not Found!"
        print("Not Found! 没有找到！")
        cv2.putText(image, text, (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, redColor, 2)

    return mask, image


# video test 摄像头接通测试
def test(cap, source):
    if cap is None or not cap.isOpened():
        print('Warning: unable to open video source: ', source)
        return False
    else:
        _, tmp = cap.read()
        if tmp is not None:
            return True
        else:
            print("Warning: unable to read video feed.")
            return False


# update color 更新颜色
def assignColor(color):
    global lowHue, lowSat, lowVal, highHue, highSat, highVal
    lowHue = color[0]
    lowSat = color[1]
    lowVal = color[2]
    highHue = color[3]
    highSat = color[4]
    highVal = color[5]


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


# 更新滑块
def updateTrackbar():
    cv2.setTrackbarPos(green_bar, color_win, defaultColor[0])
    cv2.setTrackbarPos(yellow_bar, color_win, defaultColor[1])
    cv2.setTrackbarPos(blue_bar, color_win, defaultColor[2])
    cv2.setTrackbarPos(red_bar, color_win, defaultColor[3])





# =====================================
# Status bar
# =====================================
color_win = 'Choose Color'
cv2.namedWindow(color_win)  # ('窗口标题',默认参数)//窗口大小比例不可改变
cv2.resizeWindow(color_win, 500, 310)
cv2.moveWindow(color_win, 857, 520)
cv2.createTrackbar(green_bar, color_win, 0, 1, greenCtrl)
cv2.createTrackbar(yellow_bar, color_win, 0, 1, yellowCtrl)
cv2.createTrackbar(blue_bar, color_win, 0, 1, blueCtrl)
cv2.createTrackbar(red_bar, color_win, 0, 1, redCtrl)

# =====================================
# Camera Len 选择镜头
# =====================================
vidCapture = cv2.VideoCapture(0, cv2.CAP_DSHOW)
videoFeed = test(vidCapture, 0)  # camera test 摄像测试

if not videoFeed:
    print("No video input! 摄像头没有连接")
    exit(1)


# =====================================
# Window 窗口： Frame
# =====================================
vidCapture.set(cv2.CAP_PROP_FRAME_WIDTH,800)#FRAME_WIDTH = 800
vidCapture.set(cv2.CAP_PROP_FRAME_HEIGHT,600)#FRAME_HEIGHT = 600

video_win = 'Frame'
cv2.namedWindow(video_win, cv2.WINDOW_AUTOSIZE)
cv2.moveWindow(video_win, 855, 0)

# =====================================
# Window 窗口： Demo
# =====================================
demo_win = 'Demo'
cv2.namedWindow(demo_win)
cv2.moveWindow(demo_win, 205, 0)

# =====================================
# Begin
# =====================================
while vidCapture.isOpened():
    #updateTrackbar()

    # Get webcam frame.获取网络摄像头帧。
    _, frame = vidCapture.read()

    # Show the original image.显示原始图像。
    demo, frame_contour = frame_mask_contour(frame)
    cv2.imshow(video_win, frame_contour)
    cv2.imshow(demo_win, demo)

    key = cv2.waitKey(1)
    if key == ord("q") or key == ord("Q"):  # q or Q
        break

vidCapture.release()  # release()释放摄像头
cv2.destroyAllWindows()  # 调用destroyAllWindows()关闭所有图像窗口。
