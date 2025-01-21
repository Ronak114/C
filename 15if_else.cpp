#include<iostream>
using namespace std;
//selection control structure....if_else,if_else(ladder)
// if ..true nikla toh else wle condn check nhi hongi
int main(){
    int age;
    cout<<"hello ronak"<<endl;
    cout<<"ronak..tell me your age"<<endl;
    cin>>age;
    if(age>18){
        cout<<"bro come to part..We will have fun";
    }
    else if(age<0){
        cout<<"vro..phlr paida toh hoo jaa :/";
    }
    else if(age==18){ 
        cout<<"u will get kid-pass";
    }
    else{
        cout<<"sorry..don't be sad :(";
    }
    return 0;
}