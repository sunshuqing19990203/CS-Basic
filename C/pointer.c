//指针问题
#include <stdio.h>
void minmax(int a[], int len,int *min,int *max){
    *min = a[0];
    *max = a[0];
    for(int i = 1; i < len; i++){
        if(a[i] > *max)
           *max = a[i];
        if(a[i] < *min)
           *min = a[i];
    }
}
int main(){
    int array[] = {0,1,2,3,4,5};
    int min;
    int max;
    minmax(array,sizeof(array)/sizeof(array[0]),&min,&max);
    printf("min = %d, max = %d\n",min,max);   
    return 0;
}