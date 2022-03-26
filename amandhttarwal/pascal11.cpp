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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i > j)
            {
                int fac, sub;
                sub = i - j;
                fac = factorial(i) / (factorial(sub) * factorial(j));
                cout << fac << " ";
            }
        }
        cout << endl;
    }
    return 0;
}