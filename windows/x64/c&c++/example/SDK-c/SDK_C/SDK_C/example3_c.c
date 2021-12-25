#include "jakaAPI.h"
#include <stdio.h>

int main()
{
	JKHD handle[2];
	//创建机器人控制句柄, 需要将192.168.2.138替换为自己控制器的IP    
	create_handler("192.168.2.138", &handle[0]);
	//创建机器人控制句柄，需要将192.168.2.64替换为自己控制器的IP    
	create_handler("192.168.2.64", &handle[1]);
	//机器人上电      
	power_on(&handle[0]);
	power_on(&handle[1]);
	//机器人上使能      
	enable_robot(&handle[0]);
	enable_robot(&handle[1]);
	return 0;
}
