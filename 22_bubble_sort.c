#include<stdio.h>
//vidd dekh usmai flag ka bhi bolaa hai..to reduce time complexity 
void swap(int *xp,int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void bubbleSort(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void printArray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }
}
int main(){
    int arr[]={1,4,8,33,88,45,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printf("sorted array :\n");
    printArray(arr,n);
    return 0;
}