#include <iostream>
using namespace std;
class A
{
    static int a;

public:
    A()
    {
        a++;
    }
    void numberOfObj()
    {
        cout << a << endl;
    }
};
class B
{
    static int b;

public:
    B()
    {
        b++;
    }
    void numberOfObj()
    {
        cout << b << endl;
    }
};
int A ::a;
int B ::b;
int main()
{
    A a1, b1, c1, d1;
    B a2, b2, c2;
    a1.numberOfObj();
    b2.numberOfObj();
    return 0;
}