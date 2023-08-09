#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void getData(int p)
    {
        a = p;
    }
    void greatest(B o);
};
class B
{
    int b;

public:
    void getData(int q)
    {
        b = q;
    }
    friend void A ::greatest(B o);
};
void A ::greatest(B o)
{
    if (a > o.b)
        cout << a;
    else
        cout << o.b;
}
int main()
{
    A o1;
    B o2;
    o1.getData(45);
    o2.getData(5);
    o1.greatest(o2);
    return 0;
}