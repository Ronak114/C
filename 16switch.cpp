#include <iostream>
using namespace std;
// selection control statement..switch case
int main()
{
    int day;
    cout << "tell me the day:";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break; // take out from the case
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "SAturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "enter case is invalid";
        break;
    }
    return 0;
}