#include<iostream>
using namespace std;
//pointers and array
int main(){
    int age[]={45,55,76,84,90,100};
    int* p=age;
    cout<<"val of *p "<<*p<<endl;
    cout<<"val of *(p+1) "<<*(p+1)<<endl;
    cout<<"val of *(p+2) "<<*(p+2)<<endl;
    cout<<"val of *(p+3) "<<*(p+3)<<endl;
    
    //aisa nhi kr skte hai
    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
return 0;
}