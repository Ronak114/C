#include<stdio.h>
void shift(int arr[],int d,int n){
    int tem[n];
    int r=0;
    for(int i=d;i<n;i++){
        tem[r]=arr[i];
        r++;
    }
    for(int i=0;i<d;i++){
        tem[r]=arr[i];
        r++;
    }
    for(int i=0;i<n;i++){
        arr[i]=tem[i];
    }
}
void prtArray(int arr[],int n){
    printf("\n array to rotate:\n");
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}
int main(){
    int s[5]={15,30,28,19,61};
    printf("original array :");
    for(int i=0;i<5;i++){
        printf("%d \t",s[i]);
    }
    int c=sizeof(s)/sizeof(s[0]);
    int d=2;
    shift(s,d,c);
    prtArray(s,c);
    return 0;
}