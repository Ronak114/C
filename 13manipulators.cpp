#include<iostream>
#include<iomanip>
using namespace std;
//*****manipulators*****
//1.endl
//2.setw....(included in iomanip)....setw bass width deta hai mtlb utna space chod denga..or space create krenga.
int main(){
    int a=23,b=66,c=90;
    cout<<"val of a:"<<a<<endl;
    cout<<"val of b:"<<b<<endl;
    cout<<"val of c:"<<c<<endl;

    cout<<"val of a:"<<setw(1)<<a<<endl;
    cout<<"val of b:"<<setw(1)<<b<<endl;
    cout<<"val of c:"<<setw(1)<<c<<endl;
}