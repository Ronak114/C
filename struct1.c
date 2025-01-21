#include<stdio.h>
#include<string.h>
// To prt Namee,Roll,Cgpa of 3 studt by decln.
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll=22;
    s1.cgpa=9.8;
    /* s1.name="ronak"; WRONG bcz string which are 
    denoted by array notation it's value can't change.value can
    compare but cannot assign if array will be pointer then it
    can wrk.*/
    strcpy(s1.name,"ronak");
    printf("name: %s \n",s1.name);
    printf("roll: %d \n",s1.roll);
    printf("cgpa: %f \n",s1.cgpa);

    struct student s2;
    s2.roll=1;
    s2.cgpa=9.7;
    strcpy(s2.name,"amaira");

    printf("name: %s \n",s2.name);
    printf("roll: %d \n",s2.roll);
    printf("cgpa: %f \n",s2.cgpa);

    struct student s3;
    s3.roll=11;
    s3.cgpa=9.87;
    strcpy(s3.name,"titu");

    printf("name: %s \n",s3.name);
    printf("roll: %d \n",s3.roll);
    printf("cgpa: %f \n",s3.cgpa);
    return 0;
}