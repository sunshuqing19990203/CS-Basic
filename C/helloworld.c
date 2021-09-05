#include <stdio.h>
#include <stdbool.h>

// 正序输出每一位数字：12345->1 2 3 4 5, 700 -> 7 0 0
int print_digit(int num){
    //12345->1 2 3 4 5
    //12345 / 10000 = 1; 12345 % 10000 = 2345
    //2345 / 1000 = 2; 2345 % 1000 = 345
    //345 / 100 = 3 ; 345 % 100 = 45
    //45 / 10 = 4; 45 % 10 = 5
    // 5 / 1 = 5; 5 % 1 = 0
    //
    //首先计算num的位数
    int temp = num;
    int digits = 0;
    while(num){
        digits++;
        num = num / 10;
    }
    printf("%d 的位数是 %d\n",temp,digits);
    num = temp;
    // 正序输出每位数字
    int flag = 1;
    while(digits > 1){
        flag *= 10;
        digits--;
    }
    while(flag > 0){
        printf("%d ",num/flag);
        num %= flag;
        flag /= 10;
    }
    return 0;
}
int main(int argc, char **argv){
    // printf("Hello,World.\n");
    // int i = 0;
    // i = 1;
    // i = 2;
    // scanf("%d",&i);
    // printf("i = %d\n", i);

    // // 素数
    // int x = 13;
    // for(int i = 2; i < x; i++){
    //     if( x % i == 0 ){
    //         printf("%d is not a prime.\n",x);
    //         break;
    //     }
    // }
    // printf("%d is a prime.\n",x);
    // return 0;


    // // 1-1/2+1/3-1/4+1/5-...1/n
    // int n = 4;
    // double result = 0;
    // float sign = 1.0;
    // for(int i = 1; i <= n; i++){
    //     result += sign/i;
    //     sign *= -1;
    // }
    // printf("f(%d) = %lf\n",n,result);
    // return 0;


    // // 最大公约数，辗转相除法
    // // b=0,a是gcd；否则，让计算a/b的余数，让a=b，b=余数
    // int a = 18;
    // int b = 12;
    // int temp ;
    // int gcd = 1;
    // while(b){
    //     temp = a % b;
    //     a = b;
    //     b = temp;
    // }
    // gcd = a;
    // printf("gcd是%d\n",gcd);
    // return 0;


    int num = 100;
    print_digit(num);
    return 0;

}