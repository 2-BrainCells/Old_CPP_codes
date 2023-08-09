#include <iostream>
using namespace std;
class A
{

protected:
    int a, b;

public:
    A()
    {
        cout << "Enter the value of a and b = ";
        cin >> a >> b;
    }
    virtual void add() = 0;
};

class B : public A
{
    int sum;

public:
    void add()
    {
        sum = a + b;
        cout << sum;
    }
};
int main()
{
    A *a;
    B b;
    a = &b;
    a->add();
    return 0;
}