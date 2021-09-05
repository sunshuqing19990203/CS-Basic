// 数组相关知识
#include <stdio.h>
int main(){
    int a[]={1,2,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    printf("n = %d\n",n);
    return 0;
}