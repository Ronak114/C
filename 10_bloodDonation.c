#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() {
FILE *fptr;
char another='y';
struct blood{
 char name[50];
 char adr[100];
 int age; 
 int bld;
 }b;

fptr=fopen("hospi_data.txt","wb");
if(fptr==NULL) {
printf("cannot open target file!\n");
}
while(another=='Y' || another=='y') {
   
printf("\t\t\t|Information of Blood donor|\n");
printf("\t\t=================================================\n");
printf("Enter the name: ");
scanf("%s",b.name);
printf("\n\nenter the address: ");
scanf("%s",b.adr);
printf("\n\nenter the age: ");
scanf("%d",&b.age);
printf("\n\nenter the blood group(1/2/3/4): ");
scanf("%d",&b.bld);
fprintf(fptr,"%s\t%s\t%d\t%d",b.name,b.adr,b.age,b.bld);
printf("\n\n\nenter more information(Y/N): ");
fflush(stdin);
another=getch();
}
fclose(fptr);
}