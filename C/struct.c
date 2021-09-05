// struct 记录
#include <stdio.h>
struct{
    int amount;
    char *name;
}coins[] = {
    {1,"penny"},
    {5,"nickel"},
    {10,"dime"},
    {25,"quater"},
    {50,"half-dollar"}
};


int main(){
    int n = 10;
    for(int i = 0; i < sizeof(coins)/sizeof(coins[0]); i++){
        if(coins[i].amount == n){
            printf("%s\n",coins[i].name);
            break;
        }
    }
    return 0; 
}