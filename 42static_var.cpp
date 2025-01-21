#include<iostream>
using namespace std;
//not to use static var during inline funtn
int product(int a,int b){
    static int c=0;//executes only once
    c=c+1;//c will retain its value. 
    return a*b+c;
}
int main(){
    int m,n;
    cout<<"enter two no.s:"<<endl;
    cin>>m>>n;
    cout<<"product :"<<product(m,n)<<endl;
    cout<<"product :"<<product(m,n)<<endl;
    cout<<"product :"<<product(m,n)<<endl;
    cout<<"product :"<<product(m,n)<<endl;
    cout<<"product :"<<product(m,n)<<endl;
    cout<<"product :"<<product(m,n)<<endl;
    cout<<"product :"<<product(m,n)<<endl;
    cout<<"product :"<<product(m,n)<<endl;
    cout<<"product :"<<product(m,n)<<endl;
    return 0;
}