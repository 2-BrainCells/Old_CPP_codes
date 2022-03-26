#include <iostream>
using namespace std;

// class derived : visibility mode , visibility mode 2
class Base1
{
protected:
    int baseint1;

public:
    void setBaseint1(int a)
    {
        baseint1 = a;
    }
};
class Base2
{
protected:
    int baseint2;

public:
    void setBaseint2(int a)
    {
        baseint2 = a;
    }
};

class derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base 1 is " << baseint1 << endl;
        cout << "The value of base 2 is " << baseint2 << endl;
        cout << "The sum of the values = " << baseint1 + baseint2 << endl;
    }
};
int main()
{
    derived d;  
    d.setBaseint1(12);
    cout << endl;
    d.setBaseint2(23);
    cout << endl;
    d.show();
    return 0;
}