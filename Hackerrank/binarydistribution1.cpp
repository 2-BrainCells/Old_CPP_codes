#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
void binomial(float a, float b)
{
    float val, sum = 0;
    for (int i = 3; i <= 6; i++)
    {
        val = (factorial(6) / (factorial(i) * factorial(6 -i))) * pow(a, i) * pow(b, (6 - i));
        cout << val<<endl;
        sum = sum + val;
    }
    cout << fixed << setprecision(3) << sum;
}
int main()
{
    float a, b;
    cin >> a >> b;
    float x, y, z;
    z = a + b;
    x = a / z;
    y = b / z;
    binomial(x, y);
    return 0;
}