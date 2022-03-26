#include <iostream>
using namespace std;

void fun(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    fun(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}