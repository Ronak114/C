#include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
    int p, q;
    cout << "enter 2 no.s" << endl;
    cin >> p >> q;
    // p,q --->> actual parameters
    cout << "sum :" << sum(p, q);
    return 0;
}
int sum(int a, int b)
{
    // a,b --->formal parameters
    int c = a + b;
    return c;
} // actual parameters and formal parameters can be same.