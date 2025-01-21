//write to a file
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("fruit.txt","r"); // a--> append
    // read by fgetc.
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));

    // write by fprintf.(change mode accordingly)
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'l');
    fprintf(fptr,"%c",'e');
    fclose(fptr);
    return 0;
}// o/p mango changes into apple(check in file(fruit))
// for fprintf