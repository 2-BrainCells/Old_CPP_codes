#include <iostream>
using namespace std;
class Base
{
public:
    void print()
    {
        cout <<"\n PRINT - BASE CLASS ";
    }
    virtual void show()
    {
        cout <<"\n SHOW - BASE CLASS ";
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout <<"\n PRINT - DERIVED CLASS ";
    }
    void show()
    {

        cout <<"\n SHOW - DERIVED CLASS ";
    }
};
int main()
{
    Base B, *bptr;
    Derived D;
    bptr = &B;
    bptr->print();
    bptr->show();
    bptr = &D;
    bptr->print();
    bptr->show();
    return 0;
}