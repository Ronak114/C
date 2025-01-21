#include<stdio.h>
int swap(int a, int b);
int _swap(int *a, int *b);

int main(){
    int x=5;
    int y=3;
    swap(x,y);
     printf("x=%d & y=%d \n " ,x,y);
     _swap(&x , &y);
     printf("x=%d & y=%d \n " ,x,y);
    return 0;
}
int swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d & b=%d \n " ,a,b);
    return 0;
}
int _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
    // printf("a=%d & b=%d \n " ,a,b);
    return 0;
}