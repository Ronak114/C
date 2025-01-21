#include <iostream>
using namespace std;
 
class Employee
{
 
public:
    static int count; //returns number of employees
 
    //Constructor
    Employee()
    {
        count++; //increases employee count every time an object is defined
    }
 
    static int getCount()
    {
        return count;
    }
};
 
int Employee::count = 0; //defining the value of count
 
int main()
{
    Employee Ronak1;
    Employee Ronak2;
    Employee Ronak3;
    cout << Employee::getCount() << endl;
}
