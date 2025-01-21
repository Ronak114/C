#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int p,q;
    p=8;q=9;
    cout<<"sum :"<<sum(p,q)<<endl;
    cout<<"val p:"<<p<<endl<<"val q:"<<q<<endl;
    swap(p,q);
    cout<<"val p:"<<p<<endl<<"val q:"<<q<<endl;
    //dono ka o/p same aayenga bcz val copy hue hai swap mai..
    //..toh main pe koi frk nhi pada.
return 0;
}
