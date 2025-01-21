#include<iostream>
using namespace std;
//doubt hai

int main(){
    int a=3;
    int* b;
    b=&a;
    int* c=&b;
    //cout<<"address of b :"<<&b<<endl;
    cout<<"address of b :"<<c<<endl;
    cout<<"value at address c :"<<*c<<endl;
    cout<<"value at address value at(value at (c)):"<<c<<endl;
return 0;
}