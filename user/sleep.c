#include "kernel/types.h"
#include "user/user.h"
// argv[] 是 argc 个参数，其中第 0 个参数是程序的全名，以后的参数是命令行后面跟的用户输入的参数
int
main(int argc, char *argv[])
{
    // 如果命令行参数不等于2个，则打印错误信息
    if (argc != 2)
    {
        
        write(2, "Usage: sleep time\n", strlen("Usage: sleep time\n"));
        
        // 退出程序
        exit(1);
    }
    
    int time = atoi(argv[1]);
    sleep(time);
    exit(0);
}

