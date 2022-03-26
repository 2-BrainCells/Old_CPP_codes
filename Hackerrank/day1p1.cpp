#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n, a[100000];
    cin >> n;
    if (n >= 5 && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        double mean;
        mean = sum / n;
        int t;
        double fsum = 0;
        for (int i = 0; i < n; i++)
        {
            long long int d = 0;
            t = a[i] - mean;
            d = pow(t, 2);
            fsum = fsum + d;
            cout << d << endl;
        }
        double fin;
        fin = fsum / n;
        cout << fin;
        cout << fixed << setprecision(1) << sqrt(fin);
    }
    return 0;
}