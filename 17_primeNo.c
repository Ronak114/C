#include<stdio.h>
int prime(int m);
int main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    printf("prime No:");
    prime(n);
    return 0;
}
int prime(int m){
    int i,count=0;
    for(i=2;i<=m;i++){
        if(m%i==0){
            count=1;
        }
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count=0;
            }
        }
        if(count==1){
            printf("%d\t",i);
        }
    }
}