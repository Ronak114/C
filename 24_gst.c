#include<stdio.h>
void calculateprice(float value);

int main(){
    float value = 100.0;
    calculateprice(value);
    printf("value : %f",value);
    return 0;
}
void calculateprice(float value){
    value = value + (0.18 * value);
    printf("final price : %f",value);
}