#include<stdio.h>
#include<string.h>
//user defined
struct student{
    int roll;
    char name[100];
    float cgpa;
};
void printInfo(struct student s1);
int main(){
    struct student s1={22,"ronak",9.9};
    printInfo(s1);
    s1.roll=33;// main function mai change ho skta hai but not in structure
    // bcz there is a argument which is copy of original.
    printf("roll:%d \n",s1.roll);

    return 0;
}
// structure passes by call by value.
void printInfo(struct student s1){
    printf("student info \n");
    printf("roll:%d \n",s1.roll);
    printf("name:%s \n",s1.name);
    printf("cgpa:%f \n",s1.cgpa);
}