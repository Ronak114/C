//area of square,perimetr
//area of circle,circumference.
#include<stdio.h>
int main(){
    int a;
    printf("enter the side of a squ :");
    scanf("%d",&a);
    printf("area :%d \n",a*a);
    printf("perimeter : %d \n",4*a);

    int r;
    printf("enter the radius of a cir :");
    scanf("%d",&r);
    printf("area :%f\n",r*r*3.14);
    printf("circumference : %f\n",2*3.14*r);
    return 0;
}