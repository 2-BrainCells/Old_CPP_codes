#include <iostream>
using namespace std;
class B
{
    int m;

public:
    // dummmy constructor
    B() {}
    // default constructor
    // B()
    // {
    //     m = 12;
    // }
    // paramatrized constructor
    B(int x)
    {
        m = x;
    }
    // default argument constructor
    // B(int x = 67)
    // {
    //     m = x;
    // }
    // copy constructor
    B(const B &x)
    {
        m = x.m;
    }
    void display()
    {
        cout << m;
    }
    ~B()
    {
        m ;
        cout << endl
             << "destroyer"
             << endl
             << m;
    }
};
int main()
{
    B o1(23);
    B o2(o1);
    // o2.getData(2);
    o2.display();
    return 0;
}