#include<iostream>
using namespace std;
//1.prototype check krenga same hai kya toh ex int int.
//2.match nhi hua toh convert krne ka try krenga ..nhi hua toh add error through krenga.
//can find vol by using diff no. of arguments.
int add(int a,int b){
    cout<<"2 argu"<<endl;
    return a+b;
}
int add(int a,int b,int c){
    cout<<"3 argu"<<endl;
    return a+b+c;
}
int main(){
    cout<<add(8,9)<<endl;
    cout<<add(8,9,6)<<endl;
    
return 0;
}