#include<iostream>
using namespace std;
//meal ko integer no de skte hai
//make readablw
int main(){
    enum meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    meal m1=breakfast;
    cout<<m1;
return 0;
}