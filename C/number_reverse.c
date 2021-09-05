// 将一个3位数倒叙输出，
// eg：123->321,但是若三位数末尾有0，则倒叙是要把0去掉，eg：700->7
// 思路，123->abc,倒叙输出cba = c*100+b*10+a，避免了检验末尾是否是0的麻烦
#include <stdio.h>
int main(){
    int num = 700;
    int a = num / 100;
    int b = num / 10 - a * 10;
    int c = num - a * 100 - b * 10;
    int num_reverse = c * 100 + b * 10 + a;
    printf("%d,%d,%d\n",a,b,c);
    printf("num = %d, num_reverse = %d\n",num,num_reverse);

    return 0;
}