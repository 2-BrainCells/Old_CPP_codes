#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int n)
{
    int digit = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        cout<<lastdigit<<" ";
        digit = digit + pow(lastdigit, 3);
        cout << digit << endl;
        n = n / 10;
    }
    return digit;
}
int main()
{
    int n;
    cin >> n;
    int arm = armstrong(n);
    cout << arm;
    if (arm == n)
        cout << n << " is an armstrong number";
    else
        cout << n << " is not a armstorng number";
    return 0;
}