|---SDK2.1.1            内含主要发布内容动态库文件及头文件
     |---linux
          |---i686-linux-gnu          由该linux编译器编译的dll
          |---x86_64-linux-gnu      由该linux编译器编译的dll
     |---window
          |---x64                           64位dll
          |---x86                           32位dll
|-doc                      二次开发说明文档及调用指南         

使用须知：
windows平台使用sdk前需要安装微软常用运行库合集.exe

V2.0.1--------->V2.1.1更新说明:
修复：
1.修复偶发的program读取失败问题。
2.修复极差网络环境下，偶现阻塞运动部分情况下失效的问题，需要同步控制器版本至1.5.13.09
3.修复C语言和python语言在不进行logout的情况下再次login导致内存占用增加的bug
4.修复program_load()加载程序不支持中文的bug
5.修复extio状态显示和is_extio_running失效的问题，需要更新控制器至1.5.13.x
6.修复自动重连机制造成的logout之后仍能通过对应类或描述符控制机器人运动。
7.修复python语言在机器人描述符释放时出现段错误的问题
8.修复app和控制器联合调试时，SDK小概率获取不到错误码的问题，需要同步控制器版本至1.5.13.09
9.修复日志在logout方法调用之后不再记录。
新增：
1.添加tcp坐标系下沿着坐标轴相对运动功能，需要同步控制器版本至1.5.13.09
2.新增FTP接口，支持对轨迹和app程序的上传下载，需要同步控制器版本至1.5.13.x
