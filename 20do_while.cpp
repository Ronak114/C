#include<iostream>
using namespace std;

int main(){
    /****syntax***
             do
            {
                code;
            }while(condn);
            */
    int j=1; 
    do{
        cout<<j;
        j++;
    }while (j<=10);
    //condn kuch bhi ho loop toh ek baar chalenga he chalenga
    return 0;
}