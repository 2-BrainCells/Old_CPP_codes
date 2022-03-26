#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a[100], b[100], n;
    cin >> n;
    if (n >= 5 && n <= 50)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        float t = 0;
        for (int i = 0; i < n; i++)
        {
            t = t + (a[i] * b[i]);
        }
        float d = 0;
        for (int i = 0; i < n; i++)
        {
            d = d + b[i];
        }
        float wmean;
        wmean = t / d;
        cout << fixed << setprecision(2)<< wmean;
    }
    return 0;
}