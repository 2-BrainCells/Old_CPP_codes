#include <iostream>
#include <algorithm>
using namespace std;

void first(int a[100], int b[100], int mid)
{
    int sum = 0;
    for (int i = 0; i <= (mid - 1); i++)
    {
        sum = sum + a[i];
    }
    int q1 = sum / mid;
    b[0] = q1;
}
void mid1(int a[100], int b[100], int mid)
{
    int q2 = (a[mid] + a[mid - 1]) / 2;
    b[1] = q2;
}
void last(int a[100], int b[100], int mid, int n)
{
    int sum = 0;
    for (int i = mid; i < n; i++)
    {
        sum = sum + a[i];
    }
    int q3 = sum / mid;
    cout << q3;
    b[2] = q3;
}

void mid2(int a[100], int b[100], int mid)
{
    int q2 = a[mid];
    b[1] = q2;
}

int main()
{
    int n, a[100], b[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mid = n / 2;
    if (n % 2 == 0)
    {
        first(a, b, mid);
        mid1(a, b, mid);
        last(a, b, mid, n);
        cout << b[1] << endl;
        for (int i = 0; i < n; i++)
        {
            cout << b[i];
        }
    }
    if (n % 2 != 0)
    {
        first(a, b, mid);
        mid2(a, b, mid);
        last(a, b, mid, n);
        for (int i = 0; i < n; i++)
        {
            cout << b[i];
        }
    }
    return 0;
}