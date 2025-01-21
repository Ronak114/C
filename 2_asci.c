//check given char is dig or not.
#include<stdio.h>
int main(){
    char ch;
    printf("printf any char :");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57){
        printf("entered char is dig ");
    }
    else{
        printf("entered char is not dig");
    }
    return 0;
}
