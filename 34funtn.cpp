#include<iostream>
using namespace std;

int sum(int a,int b){//arguments
    // int c=a+b;
    return a+b;
}
int main(){
    int p,q;
    cout<<"enter 2 no.s"<<endl;
    cin>>p>>q;
    cout<<"sum :"<<sum(p,q);
return 0;
}