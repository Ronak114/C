#include<stdio.h>
void circularShift(int *x,int *y,int *z);
int main(){
    int a,b,c;
    printf("enter 3 no : ");
    scanf("%d %d %d",&a,&b,&c);
    for(int i=0;i<3;i++){
        printf("a=%d \n b=%d \n c=%d \n",a,b,c);
        circularShift(&a,&b,&c);
    }
    return 0;
}
void circularShift(int *x,int *y,int *z){
    int temp;
    temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
}