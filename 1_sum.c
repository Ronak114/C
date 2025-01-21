//initialization,var,comments,o/p,i/p.
//sum of 2 no.s

#include<stdio.h>
int main(){
    int a,b,sum;
    peintf("enter two no.s");
    scanf("%d %d",&a,&b);
    sum=a+b;//no need of 3rd var :: a+b
    printf("sum :%d",sum);

    a=5,b=4;
    printf("sum :%d",a+b);
}