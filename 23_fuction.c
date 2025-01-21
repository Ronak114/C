#include<stdio.h>
 void square(int n);
 void squ(int *n);

 int main(){
    int number = 7;
    square(number);
    printf("number = %d \n ",number); 
    squ(&number);
    printf("number = %d \n ",number); 
    return 0;
 }
 void square(int n){
     n = n*n;
     printf("square = %d \n ",n); 
 }
 void squ(int *n){
     *n = (*n) * (*n);
     printf("square = %d \n ",*n); 

 }