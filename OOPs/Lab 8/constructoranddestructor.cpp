#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "This is A's constructor" << endl;
    }
    ~A()
    {
        cout << "This is A's destructor" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "This is B's constructor" << endl;
    }
    ~B()
    {
        cout << "This is B's destructor" << endl;
    }
};
int main()
{
    B b;
    return 0;
}