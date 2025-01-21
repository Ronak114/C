#include<iostream>
using namespace std;

//similar to struct
// struct-->> no funtn/no data hiding

class employee{
    //access formate.
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);//decln
        void getData(){
            cout<<"val of a"<<a<<endl;
            cout<<"val of b"<<b<<endl;
            cout<<"val of c"<<c<<endl;
            cout<<"val of d"<<d<<endl;
            cout<<"val of e"<<e<<endl;
        }
};// ; must

void employee :: setData(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    employee ronak;
    ronak.d=3;
    ronak.e=9;
   // ronak.a=98;//error since a is prvt.
    ronak.setData(1,4,6);
    ronak.getData();
return 0;
}