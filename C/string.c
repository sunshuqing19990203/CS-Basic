// string 字符串相关练习
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strlen "hello"= 5 not 6
//strcmp(str1,str2),相等return 0
//dst = strcpy(dst,src)
//s1 = strcat(s1,s2)把s2连接到s1的后面
// strncpy(dst,src,n)
// strncat(dst,src,n)
// strncmp(s1,s2,n)
// strchr(str,c) strrchr(str,c)
// strstr(str1,str2),strcasestr(str1,str2)忽略大小写

void use_getchar(){
    char ch;
     while( (ch = getchar()) != EOF){
        putchar(ch);
    }
}
void use_strchr(char *str, char c){
    char *p = strchr(str,c);
    printf("%c第一次出现%s\n",c,p);

    // p = strchr(p+1,c);
    // printf("%c第二次出现%s\n",c,p);


    //str = "hello", c = 'l',寻找"he"
    char tmp = *p;// tmp = 'l'
    *p = '\0';//str = 'he\0lo'
    char *front = (char *)malloc(sizeof(str)+1);
    strcpy(front,str);
    printf("%c前面的字符串是%s\n",c,front);
    free(front);
    *p = tmp;//还原str = 'hello'
}
void use_strrchr(char *str,char c){
    char *p = strrchr(str,c);
    printf("%c右侧第一次出现%s\n",c,p);
}
int main(){
    int ch;
    // ch  = getchar();
    // putchar(ch);
    char str[]="hello";
    char c = 'l';
    use_strchr(str,c);
    use_strrchr(str,c);
    return 0;
}