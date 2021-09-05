// 输入一个整数num=1234，输出位数= 4；
#include <stdio.h>
int main(){
    int num = 1234;
    int digits  = 0;
    int temp = num;
    while(num){
        digits++;
        num /= 10; 
    }
    printf("num = %d, digits = %d\n",temp,digits);
    return 0;
}