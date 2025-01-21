#include<stdio.h>
int main(){
    int m,n ,i,a;
    m=0,n=1;
    int nextterm=m+n;

    printf("enter the no. of terms:");
    scanf("%d",&a);
    printf("fibo series:%d %d",m,n);
    for(i=3;i<=a;++i){
        printf("%d",nextterm);
        m=n;
        n=nextterm;
        nextterm=m+n;
    }
    return 0;
}