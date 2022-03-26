#include <iostream>
using namespace std;
/* Order of execution of constructor

class B : public A
{};

first A then B
git 
class A : public B, public C
{};

first B then C and last A

class A : public B, virtual public C
{}

C > B > A
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base 1 class constructor called " << endl;
    }
    void print_data()
    {
        cout << "The value of data1  is = " << data1;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base 2 class constructor called " << endl;
    }
    void print_data()
    {
        cout << "The value of data is = " << data2;
    }
};
class derive : public Base1, public Base2 // order matters
{
    int derived1, derived2;

public:
    derive(int a, int b, int c, int d) : Base1(a), Base2(b)  // order doesnot matter
    {
        derived1 = c;
        derived2 = d;
    }
    void print_data()
    {
        cout << "The value of derived 1 is " << derived1 << endl;
        cout << "The value of derived 2 is " << derived2 << endl;
    }
};
int main()
{
    derive d(1, 2, 3, 4);
    d.print_data();

    return 0;
}