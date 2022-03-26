#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int factorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    return a * factorial(a - 1);
}
int main()
{
    float lambda, k;
    cin >> lambda >> k;
    float probablity;
    probablity = pow(lambda, k) / (pow(2.71828, lambda) * factorial(k));
    cout <<fixed << setprecision(3) <<probablity;
    return 0;
}