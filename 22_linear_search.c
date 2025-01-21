//linear search
//doubt..array apneko ko input dena woh toh segmentation fault aaraha hai.
#include<stdio.h>
int main(){
    int i,search;
    int arr[5]={11,2,37,4,75};
    printf("enter the no. to search :");
    scanf("%d",&search);

    for(i=0;i<5;i++){
        if (arr[i]==search){
            printf("%d is present at position %d and index %d",search,i+1,i);
            break;
        }
    }
    if(i==5){
        printf("not found");
    }
    return 0;
}