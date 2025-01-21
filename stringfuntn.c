#include<stdio.h>
#include<string.h>
int main(){
    char passwrd[100];
    scanf("%s",&passwrd);

    char salt[]="123";
    char newpasswrd[200];
    strcpy(newpasswrd,passwrd);
    strcat(newpasswrd,salt);
    puts(newpasswrd);
    return 0;
}