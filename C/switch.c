// 测试switch-case语句
#include <stdio.h>
int main(){
    // 单步调试测试ifelse语句
    // int type = 2;
    // if(type == 1)
    //     printf("早上好\n");
    // else if(type == 2)
    //     printf("中午好\n");
    // else if(type == 3)
    //     printf("晚上好\n");
    // else
    //     printf("Good night\n");
    // return 0;

    int type = 2;
    switch (type)
    {
    case 1:
        printf("Good morning\n");
        break;
    case 2:
        printf("Good afternoon\n");
        break;
    case 3:
        printf("Good evening\n");
    default:
        printf("Good night\n");
        break;
    }

    return 0;


}