// 选择排序，依次寻找数组中最大的值，次大的值。。。
#include <stdio.h>
//给定数组a，以及数组长度len，返回最大值下标
int max_id(int a[], int len){
    int maxid = 0;
    int max_number = a[0];
    for(int i = 1; i < len; i++){
        if(a[i] > max_number){
            max_number = a[i];
            maxid  = i;
        }
    }
    return maxid;
}
int main(){
    int array[] = {1,2,3,4,5};
    int len = sizeof(array)/sizeof(array[0]);
    int maxid;
    for(int i = len-1; i > 0; i--){
        //此处要非常注意最好将maxid值与数组后面的数字进行交换，构造递增的数组比较容易
        maxid = max_id(array, i+1);
        int temp= array[i];
        array[i] = array[maxid];
        array[maxid] = temp;
    }
    for(int i = 0; i < len; i++)
        printf("%d ",array[i]);

    return 0;
}