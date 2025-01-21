#include<stdio.h>
int xgets();
int xputs();

int xgets(int x){
    scanf("%d",&x);
    return x;
}
int xputs(int x,int y){
    printf("Numbers : %d %d",x,y);
}int main(){
    int a,b;
    printf("enter no.s ");
    a=xgets(a);
    b=xgets(b);
    xputs(a,b);
    return 0;
}