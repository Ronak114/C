#include<iostream>
using namespace std;

struct employee{
    int id;
    char favChar;
    float salary;
};
int main(){
    struct employee ronak;
    ronak.id=1;
    ronak.salary=12000000;

    cout<<"info of ronak employe:id :: "<< ronak.id<<endl;
    cout<<"info of ronak employe:salary ::"<< ronak.salary;
return 0;
}