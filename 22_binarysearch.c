#include <stdio.h>
// A iterative binary search function. It returns location of x 
//in given array arr[l..r] if present,otherwise -1
int binarySearch(int arr[], int l, int r, int search){
    while (l<r) {
        int m = (l+r) / 2;
        if (arr[m] == search)
            return m;
        else if (arr[m] < search)
         l = m + 1;
        else
             r= m- 1;
    }
    return -1;// not present
}
 
int main(void){
    //array should already be sorted.
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int search = 10;
    int result = binarySearch(arr, 0, n - 1, search);
    (result==-1) ? printf("not found") : printf("element found at index : %d",result); 
    return 0;  
}