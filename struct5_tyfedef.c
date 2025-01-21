#include<stdio.h>
#include<string.h>
//user defined
typedef struct student{
    int roll;
    char name[100];
    float cgpa;
}stu;
int main(){
    stu s1;// kuch mistake hai...o/p nhi mila.
    stu s1={22,"ronak",9.9};
    printf("roll:%d \n",s1.roll);
    printf("name:%s \n",s1.name);
    printf("cgpa:%f \n",s1.cgpa);
    return 0;
}