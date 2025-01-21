#include<iostream>
using namespace std;
int main(){
    int a=1;
    float b=1.87;
    cout<<"val of a:"<<(float)a<<endl;
    cout<<"val of b:"<<(int)b<<endl;//int(b)...same

    cout<<"expression:"<<a+b<<endl;
    cout<<"expression:"<<a+int(b)<<endl;
    cout<<"expression:"<<a+(int)b<<endl;
    return 0;
}