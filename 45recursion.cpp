#include<iostream>
using namespace std;
//recursive method
//factorial
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}//fact(3)=3*fact(2)
//fact(2)=2*fact(1)
//fact(21)=1*fact(0)
int main(){
    int m;
    cout<<"enter a no:"<<endl;
    cin>>m;
    cout<<"factorial of m :"<<fact(m)<<endl;
    
return 0;
}