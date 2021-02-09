import serial


#ser=serial.Serial("/dev/ttyUSB0",9600,timeout=0.5) #使用USB连接串行口
ser=serial.Serial("/dev/ttyAMA0",9600,timeout=0.5) #使用树莓派的GPIO口连接串行口
#ser=serial.Serial(1,9600,timeout=0.5)#winsows系统使用com1口连接串行口
#ser=serial.Serial(“com1”,9600,timeout=0.5)#winsows系统使用com1口连接串行口
#ser=serial.Serial("/dev/ttyS1",9600,timeout=0.5)#Linux系统使用com1口连接串行口

print(ser.name)
print(ser.port)
print(ser.baudrate)#波特率
print(ser.bytesize)#字节大小
print(ser.parity)#校验位N－无校验，E－偶校验，O－奇校验
print(ser.stopbits)#停止位
print(ser.timeout)#读超时设置

print(ser.writeTimeout)#写超时
print(ser.xonxoff)#软件流控
print(ser.rtscts)#硬件流控
print(ser.dsrdtr)#硬件流控
print(ser.interCharTimeout)#字符间隔超时

print(ser.isOpen()) #看看这个串口是否已经被打开
print(ser.name)#打印设备名称
print(ser.port)#打印设备名
#ser.open() #打开端口

ser.write('ATD17344673126'.encode("gbk"))#.encode()是将字符串进行编码，可以用.decode()进行解码
print(ser.isOpen()) #看看这个串口是否已经被打开
#ser.close()#关闭端口
print(ser.isOpen()) #看看这个串口是否已经被打开

data = ser.read() #读1个字符
print(data)
data = ser.read(20) #读20个字符
print(data.decode())
#data = ser.inwating()
#print(data)
'''
data = ser.readline() #是读一行，以/n结束，要是没有/n就一直读，阻塞。
data = ser.readlines()和ser.xreadlines()#都需要设置超时时间
ser.baudrate = 9600 #设置波特率
'''
