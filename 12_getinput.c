#include<stdio.h>
#include<stdlib.h>
int getint();

int getint(char str[20]){
    int num;
    num=atoi(str);
    return num;
}
int main(){
    int num;
    char str[30];
    printf("enter string :");
    gets(str);
    num=getint(str);
    printf("string : %d \n",num);
    return 0;
}