#include "jakaAPI.h"


int main()
{
	JKHD handle;
	//创建机器人控制句柄  
	create_handler("192.168.2.229", &handle);
	//机器人上电  
	power_on(&handle);
	//机器人上使能  
	enable_robot(&handle);
	//设置机器人运行倍率  
	set_rapidrate(&handle, 0.6);
	return 0;
}
