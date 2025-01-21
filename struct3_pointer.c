#include<stdio.h>
// structure using pointer.
struct student{
    int roll;
    char name[100];
    float cgpa;
};
int main(){
   struct student s1={22,"ronak",9.9};
    printf("name:%s \n roll:%d \n cgpa:%f \n ",s1.name,s1.roll,s1.cgpa);

    struct student *ptr = &s1;
   //printf("name:%s \nroll:%d \ncgpa:%f \n ",*ptr);// ye print he nhi horaha.'-'
    printf("roll:%d \n",(*ptr).roll);
     printf("roll:%d \n",ptr->roll);
    return 0;
    
}