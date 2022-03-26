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
void atmost2(float a)
{
    float val, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        val = (factorial(10) / (factorial(i) * factorial(10 - i))) * pow(a, i) * pow((1 - a), 10 - i);
        sum = sum + val;
    }
    cout << fixed << setprecision(3) << sum;
}
void atleat2(float a)
{
    float val, sum = 0;
    for (int i = 2; i < 11; i++)
    {
        val = (factorial(10) / (factorial(i) * factorial(10 - i))) * pow(a, i) * pow((1 - a), 10 - i);
        sum = sum + val;
    }
    cout << fixed << setprecision(3) << sum;
}
int main()
{
    int def, rec;
    cin >> def >> rec;
    float a;
    a = float(def) / 100;
    atmost2(a);
    cout << endl;
    atleat2(a);
    return 0;
}