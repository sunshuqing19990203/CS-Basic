// 函数相关知识

#include <stdio.h>
void swap(int x ,int y){
    int t = x;
    x = y;
    y = t;
}
int main(){
    int a = 5;
    int b = 6;
    swap(a,b);
    printf("a = %d, b = %d\n",a,b);
    return 0;
}