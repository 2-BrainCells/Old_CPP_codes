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
    void putData()
    {
        cout << a << endl;
    }
    void swap1(class B &);
};
class B
{
    int b;

public:
    void getData(int q)
    {
        b = q;
    }
    void putData()
    {
        cout << b << endl;
    }
    friend void A ::swap1(class B &);
};
void A ::swap1(class B &o2)
{
    int temp = a;
    a = o2.b;
    o2.b = temp;
}
int main()
{
    class A o1;
    class B o2;
    o1.getData(3);
    o2.getData(5);
    o1.swap1(o2);
    o1.putData();
    o2.putData();
    return 0;
}