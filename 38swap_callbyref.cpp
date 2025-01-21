#include<iostream>
using namespace std;
//call by reference using pointers.
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
    int p,q;
    p=8;q=9;
    cout<<"val p:"<<p<<endl<<"val q:"<<q<<endl;
    swap(&p,&q);
    cout<<"val p:"<<p<<endl<<"val q:"<<q<<endl;
return 0;
}
