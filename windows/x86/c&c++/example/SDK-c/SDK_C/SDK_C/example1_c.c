#include "jakaAPI.h"
#include <stdio.h>

void user_error_handle(int error_code)
{
	printf("%s\n", error_code);
}

int main()
{
	JKHD handle;
	//创建机器人控制句柄  
	create_handler("192.168.2.229", &handle);
	//用户设置发生异常时的回调函数  
	set_error_handler(&handle, user_error_handle);
	return 0;
}
