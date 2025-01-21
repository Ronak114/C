#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<6;i++){
        if(i==2){
            continue;//continue mai woh codn skip hongi prr baki sab execute honga
        }
        cout<<i<<endl;
    }
return 0;
}