#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        a = 0;
        cout << "constructor is called " << a << endl;
    }
};
int main()
{
    A a1, a2;
    return 0;
}