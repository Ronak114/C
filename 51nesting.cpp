#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
    void read(void);
    void chk_bin(void);
};
void binary :: read(void){
    cout<<"enter s binsry No.:"<<endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for(int i=0;i< s.length();i++){
        if(s.at(1)!='0'&& s.at(i)!='1'){
            cout<<"not binary"<<endl;
            exit(0);
        }
    }
}

int main(){
    binary b;
    b.read();
    b.chk_bin();
    
return 0;
}
