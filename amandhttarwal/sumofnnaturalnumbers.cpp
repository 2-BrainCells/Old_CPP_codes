#include <iostream>
using namespace std;

int sumofnnaturalnumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int summation, n;
    cin >> n;
    summation = sumofnnaturalnumber(n);
    cout << summation;
    return 0;
}