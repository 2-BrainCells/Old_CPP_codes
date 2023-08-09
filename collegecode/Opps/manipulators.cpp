#include <iostream>
using namespace std;
class A
{

    int a;

public:
    A()
    {
        a = 0;
    }
    // friend class B; // Friend Class
};

class B : public A
{
    int b;

public:
    void showA(A &x)
    {
        // Since B is friend of A, it can access
        // private members of A
        cout << "A::a=" << x.a;
    }
};

int main()
{

    A a;
    B b;
    b.showA(a);
    return 0;
}