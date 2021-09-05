// 数组相关知识
// #include <stdio.h>
// int main(){
//     int a[]={1,2,3,4};
//     int n = sizeof(a) / sizeof(a[0]);
//     printf("n = %d\n",n);
//     return 0;
// }



// 构造素数表

#include <stdio.h>
//将1,2,3.。。n中的素数都输出
//构造一个数组大小为n，isPrime[n+1], isPrime[x] == 1表示x是素数，
//若x是素数，将x的倍数2x，3x，4x。。。（小于等于n）全部设置为0，因为他们不是素数
//x++,直到遍历到n
int main(){
    const int n = 30;
    int isPrime[31];
    int x;
    for(int i = 1; i <= n ; i++){
        isPrime[i] = 1;
    }
    for(x = 2; x <= n; x++){
        if(isPrime[x]){
            for(int i = 2; i*x <= n; i++){
                isPrime[i*x] = 0;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(isPrime[i] == 1)
            printf("%d ",i);
    }
    return 0;
}