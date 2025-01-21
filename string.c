#include<stdio.h>
void prtstrg(char arr[]);
int main(){
    char fullname[50];
    scanf("%s",fullname);
    printf(" Name :%s",fullname);
}
   
void prtstrg(char arr[]){
   for(int i=0;arr[i] != '\0' ;i++){
    printf("%c",arr[i]);
   } 
}