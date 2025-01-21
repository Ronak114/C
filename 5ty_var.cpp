#include<iostream>
using namespace std;

int glo=6;

void sum(){
    cout<<glo<<endl;//o/p=6
}
int main(){
    int glo=9;
    glo=10 ;//modify local ko kiya global ko nhi.
    cout<<glo<<endl;// o/p=9 ......o/p=10
    // glo and local can be of same name but preference local>>global var.
    sum();
    cout<<"global value "<<::glo;//global var ko access krne ke liye use scope resolution.
    return 0;
}