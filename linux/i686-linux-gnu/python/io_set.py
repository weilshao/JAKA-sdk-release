# -*- coding: utf-8 -*-
import sys
import time      
import jkrc
PI=3.1415926

IO_CABINET  = 0  #控制柜面板IO
IO_TOOL = 1     #工具IO
IO_EXTEND = 2   #扩展IO
print("before create")
robot = jkrc.RC("192.168.2.192")
#robot2 = jkrc.RC("192.168.2.22")
print("after create")
robot.login()  
#robot2.login() 
print("login")
def a():
    global robot
    ret = robot.get_digital_output(0,2)
    if ret[0] == 0:
        print("1the DO2 is :",ret[1])
    else:
        print("some things happend,the errcode is: ",ret[0])
    robot.set_digital_output(IO_CABINET, 2, 1)#设置DO2的引脚输出值为1 
    time.sleep(0.1)
    ret = robot.get_digital_output(0, 2)
    if ret[0] == 0:
        print("2the DO2 is :",ret[1])
    else:
        print("some things happend,the errcode is: ",ret[0])
    robot.logout()  #登出
    print("end")
if __name__=="__main__":
    a()
