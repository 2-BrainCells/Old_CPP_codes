#include <iostream>
using namespace std;

class number
{
private:
    int a;

public:
    number()
    {
        a = 0;
    }

    number(number &obj) // need not to make one copyconstructor complier makes one
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }

    number(int num)
    {
        a = num;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(45);
    x.display();
    y.display();
    z.display();
    number z1(x);
    z1.display();
    return 0;
}