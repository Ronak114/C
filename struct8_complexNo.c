//to print complex no.
#include<stdio.h>
struct complex{
    int real;
    int imag;
};
int main(){
    struct complex no1={5,4};
    struct complex *ptr=&no1;
    printf("real part : %d",ptr->real);
    printf("imag part : %d",ptr->imag);
    return 0;
}