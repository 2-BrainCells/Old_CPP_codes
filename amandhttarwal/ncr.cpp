#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n, r;
    cin >> n >> r;
    int a;
    a = factorial(n) / (factorial(n - r) * factorial(r));
    cout << a;
    return 0;
}