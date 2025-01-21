//to print smallest no.
//doubt.(condn??)
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 no.s");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(b>c){
            printf("a is largest");
        }
        else{
            printf("b is smallest");
        }
    }//yaha tak sahi hai.haa n bro B>C raha toh?
    else{
        printf("c is samllest");
    }
    return 0;
}