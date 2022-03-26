#include <iostream>
#include <cmath>
using namespace std;

int decimal(int n)
{
    int sum = 0;
    int i = 1;
    while (n > 0)
    {
        int deci;
        deci = n % 10;
        sum = sum + (pow(2, i) * deci);
        cout << sum << " ";
        n = n / 10;
        cout << n << endl;
        i++;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int conversion = decimal(n);
    cout << conversion;
    return 0;
}