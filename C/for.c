// for语句：计算n！阶乘
#include <stdio.h>
int main(){
    int n = 5;
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("n = %d, factorial = %d\n",n,factorial);
    return 0;
}