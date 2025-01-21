#include<iostream>
using namespace std;

//funtion prototype
//syntx
//type function_name(arguments);
int sum(int a,int b);
//int sum(int a,b);--->>WRONG
//int sum(int,int);--->>RIGHT
//void g(void);--->>RIGHT
//void g();--->>RIGHT

int main(){
    int p,q;
    cout<<"enter 2 no.s"<<endl;
    cin>>p>>q;
    cout<<"sum :"<<sum(p,q);
return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}