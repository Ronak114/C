#include <iostream>
using namespace std;

class Employee
{
public:
    int eID;
    string eName;
};

int main()
{
    Employee Ronak;
    Ronak.eID = 5;
    Ronak.eName = "Ronak";
    cout << "Employee having ID " << Ronak.eID << " is " << Ronak.eName << endl;
}
//public hai islye access kr pa rahe . se