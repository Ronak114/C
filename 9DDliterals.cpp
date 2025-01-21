#include<iostream>
using namespace std;
int main(){
    float d=32.2f;//f...to show a floating value
    long double e=54.3l;//l..to show a long value
    cout<<"val of d:"<<d<<endl<<"cal of e:"<<e<<endl;
    //sizeof pe cursor leke ja..or dekh double/float hai ya kya hai toh
    cout<<"size of 32.2:"<<sizeof(32.2)<<endl;
    cout<<"size of 32.2f:"<<sizeof(32.2f)<<endl;
    cout<<"size of 32.2F:"<<sizeof(32.2F)<<endl;
    cout<<"size of 54.3:"<<sizeof(54.3)<<endl;
    cout<<"size of 54.3l:"<<sizeof(54.3l)<<endl;
    cout<<"size of 54.3L:"<<sizeof(54.3L)<<endl;
    //*****to multiply cursor  shift + alt + drag cursor
    return 0;
}