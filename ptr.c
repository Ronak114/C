#include<stdio.h>
int main(){
   int i = 5;
   int *ptr = &i;
   int **pptr = &ptr;

    printf("i = %d \n ",i);
     printf("*ptr = %d \n ",*ptr);
       printf(" **ptr = %d \n ",**pptr);
       return 0;
}