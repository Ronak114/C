//to check file exist or not.
#include<stdio.h>
int main(){
    FILE *fptr;
    //fruit naam ki file hai.
    fptr = fopen("hhfruit.txt","r"); // r-->read 
    //NULL mai save hongi
    if(fptr==NULL){
        printf("file doesn't exists");
    }
    else{
        fclose(fptr);
    }

    fptr = fopen("hhfruit.txt","w"); // w-->write 
    //USS naam ki new fike create hojayengi.
    if(fptr==NULL){
        printf("file doesn't exists");
    }
    else{
        fclose(fptr);
    }
    return 0;
}