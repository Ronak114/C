#include<stdio.h>
#include<math.h>
int main(){
    float x[10],y[10],dis=0;
    int i,j;
    printf("enter x coordinate :");
    for(i=0;i<10;i++){
        scanf("%f",&x[i]);
    }
    printf("enter y coordinate :");
    for(i=0;i<10;i++){
        scanf("%f",&y[i]);
    }
    for(i=0;i<10;i++){
        dis = dis + sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
    }
    printf("total distance : %.2f",dis);
    return 0;
}