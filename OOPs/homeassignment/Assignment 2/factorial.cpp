#include <iostream>
using namespace std;

class factorial
{
    int n;

public:
    void getNum();
    int findFac(int n);
};

void factorial::getNum()
{
    cout << "Enter the number to find Factorial = ";
    cin >> n;
    cout << findFac(n);
}
int factorial ::findFac(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * findFac(n - 1);
}
int main()
{
    factorial fac;
    int n;
    fac.getNum();
    return 0;
}