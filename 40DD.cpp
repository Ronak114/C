#include<iostream>
using namespace std;
//call by reference using C++ reference variables
int & swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}


int main(){
    int p,q;
    p=8;q=9;
    cout<<"val p:"<<p<<endl<<"val q:"<<q<<endl;
    swap(p,q)=677;//swap(&p,&q);
    cout<<"val p:"<<p<<endl<<"val q:"<<q<<endl;
return 0;
}
