#include <iostream>
using namespace std;

// Defining inside the class
class Employee
{
public:
    int eID;
    string eName;

    void printName()
    {
        cout << eName << endl;
    }
};

int main()
{
    Employee Ronak;
    Ronak.eID = 5;
    Ronak.eName = "Ronak";
    // cout << "Employee having ID " << Ronak.eID << " is " << Ronak.eName << endl;
}


// Defining outside the class
class Employee
{
public:
    int eID;
    string eName;

    void printName();
};


void Employee::printName()
{
    cout << eName << endl;
}