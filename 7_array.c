#include<stdio.h>
int main(){
    int price[3];
    int i;
    printf("enter the price \n ");
    scanf("%d %d %d",&price[0],&price[1],&price[2]);
    // float final_cost = (0.18 + price[i] );
    // for( i=0;i<=2;i++){
    //     printf("%f %f %f" ,price[i]);
    printf("final price 1: %f \n",price[0]+(0.18+ price[0]) );
    printf("final price 1: %f \n",price[1]+(0.18+price[1]) );
    printf("final price 1:%f\n ",price[2]+(0.18+price[2]) );
        return 0;
    }