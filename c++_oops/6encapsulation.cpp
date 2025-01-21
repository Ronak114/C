#include <iostream>
using namespace std;
 
class employee
{
private:
    int a;
 
public:
    void setA(int num)
    {
        a = num;
    }
 
    int getA()
    {
        return a;
    }
};
 
int main()
{
    employee obj;
    obj.setA(5);
    cout << obj.getA() << endl;
}
