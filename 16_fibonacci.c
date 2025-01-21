#include<stdio.h>
int fib(int n);
int main(){
    int n,i;
    printf("enter no :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("term %d :",i);
        printf("%d \t",fib(i));
    }
}
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
    }