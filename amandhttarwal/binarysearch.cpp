#include <iostream>
using namespace std;

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void binary(int a[100], int n, int find)
{
    int t = n / 2;
    while (a[t] < find)
    {
        if (a[t] == find)
            cout << "The number is found at = ";
        else
            
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    int find;
    cin >> find;
    binary(a, n, find);
    return 0;
}