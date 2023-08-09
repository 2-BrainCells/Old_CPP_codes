#include <iostream>
using namespace std;
class A
{

    static int a;

public:
    A() { a++; }
    static int func()
    {
        return a;
    }
};
int A ::a = 3;
int main()
{
    A a[2];
    cout << A ::func();
    A b[3];
    cout << A ::func();
    return 0;
}