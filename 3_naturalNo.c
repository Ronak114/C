//to check natural no.or not.
//doubt
#include<stdio.h>
int main(){
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    //what if a user enter char ??.
    if(a==0){
        printf("no.is not a natural no");
    }
    else{
        printf("natural no");
    }
    return 0;
}