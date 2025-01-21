#include<iostream>
using namespace std;
//pointers...data types which holds address of other data type
int main(){
    int a=3;
    int* b=&a;
    cout<<"address of a :"<<&a<<endl;
    cout<<"address of a :"<<b<<endl;
    //****&a=b*****
    // o/p---->345235234(address of b)
    //&---->(address of) operator
    
    //*---->dereferance operator
    cout<<"value at address a :"<<*b<<endl;
return 0;
}