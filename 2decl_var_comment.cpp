#include <iostream>
using namespace std;

int main()
{
    int a;   // declaration,a->variable
    a = 100; // initialisation

    cout << "size of int " << sizeof(a) << endl; // endl ..new line add hoti hai.

    float b;
    cout << "size of float " << sizeof(b) << endl;

    char c;
    cout << "size of char " << sizeof(c) << endl;

    bool d;
    cout << "size of bool " << sizeof(d) << endl;

    // cout<<"value of a :"<<a;
    // return 0;
    //*********ctrl / ..at a time 8 9 line ko comment krna honga toh************

    short f;
    cout << "size of short " << sizeof(f) << endl;

    long g;
    cout << "size of long " << sizeof(g) << endl;

    double h;
    cout << "size of double " << sizeof(h) << endl;

    long long j;
    cout << "size of long long " << sizeof(j) << endl;

    long double i;
    cout << "size of long double " << sizeof(i) << endl;
}

// camelCase : marksInMath