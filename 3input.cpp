#include<iostream>
using namespace std;

int main(){
    int a,b;// int a; int b (extra)
    cin>>a>>b;// cin>>a,b;(will not work)
    //cin>>a; cin>>b;(extra)
    int sum;
    sum=a+b;
    cout<<"total : "<<sum<<endl;
    cout<<"addition: "<<a+b<<endl;//(no need to create sum var)    
   //cout<<"addition:"<<a+b<<endl; 
   //********ctrl +d (to repeat the abv line)
    return 0;
}