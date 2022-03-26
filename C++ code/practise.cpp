#include <iostream>
using namespace std;
int main()
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 3; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}