//realoc()
//allocate memo to 5 no.,then
// dynamically increase to 8
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));

    printf("enter 5 no :");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    } 

    ptr=realloc(ptr,8);
    printf("enter 8 no :");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    } 

    for(int i=0;i<8;i++){
        printf("%d \n",ptr[i]);
    } 
}