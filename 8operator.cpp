#include<iostream>
using namespace std;
int main(){
    //Arithmatic operator
    int a=5,b=5;
    cout<<"value a+b:"<<a+b<<endl;
    cout<<"value a-b:"<<a-b<<endl;
    cout<<"value a*b:"<<a*b<<endl;
    cout<<"value a/b:"<<a/b<<endl;//int bola hai toh 1 he no.print honga
    cout<<"value a%b:"<<a%b<<endl;
    cout<<"value a++:"<<a++<<endl;// print a=5 and then add 1...a=6
    cout<<"value a--:"<<a--<<endl;//print a=6 then sub 1...a=5
    cout<<"value ++a:"<<++a<<endl;//phle add 1 then print a=6
    cout<<"value --a:"<<--a<<endl;//phle sub 1 then print a=5

    //Assignment O.-->used to assign value
    int p=3,r=5;

    //Comparison O. or relational O.
    cout<<"value a==b:"<<(a==b)<<endl;
    cout<<"value a<b:"<<(a<b)<<endl;
    cout<<"value a>b:"<<(a>b)<<endl;
    cout<<"value a<=b:"<<(a<=b)<<endl;
    cout<<"value a>=b:"<<(a>=b)<<endl;
    cout<<"value a!=b:"<<(a!=b)<<endl;

    //logical O.
    //and && , or|| ,not ! 
    return 0;
}