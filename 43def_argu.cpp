#include<iostream>
using namespace std;
//default arguments : val by deafult milte hai if koi value pass nhi ki ho tohh
float moneyRec(int currentMoney,float factor=1.04){//default value.
    //phle compulsory argu(left side)...fir factor
    return currentMoney*factor;
}
int main(){
    int money=100000;
    cout<<"if u have "<<money<<" u will receive "<<moneyRec(money)<<" after 1 yr"<<endl;
    cout<<"for VIP :if u have "<<money<<" u will receive "<<moneyRec(money,1.1)<<" after 1 yr";
    return 0;
}