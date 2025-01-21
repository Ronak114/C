#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Ronak";
    cout << "Name : " << name << endl;
    cout << "Name : " << name.length() << endl;
    cout << "Name : " << name.substr(0, 3) << endl; // 3 not included
    cout << "Name : " << name.substr(2, 3) << endl; // 2 se aage 3 char
    return 0;
}