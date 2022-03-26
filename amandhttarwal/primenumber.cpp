#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++) // for (int i = 2; i < n ; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime " << endl;
            flag = false;
            break;
        }
        cout << i << endl;
    }
    if (flag == true)
        cout << "Prime number";

    return 0;
}