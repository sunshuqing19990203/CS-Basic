// 函数指针

#include <stdio.h>
void f(int x){
    printf("in f():%d\n",x);
}
void g(int x){
    printf("in g():%d\n",x);
}
void h(int x){
    printf("in h():%d\n",x);
}

int plus(int x, int y){
    return x+y;
}
int minus(int x, int y){
    return x - y;
}

int cal(int (*f)(int,int)){
    printf("%d\n",(*f)(2,3));
}
int main(){
    int x = 100;
    void (*pfun[])(int) = {f,g,h};
    int i = 1;
    if(i > 0 && i < sizeof(pfun)/sizeof(pfun[0])){
        (*pfun[i])(x);
    }


    cal(plus);
    cal(minus);
    return 0;
}