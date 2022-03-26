#include <iostream>
using namespace std;
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void display(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void minimum(int a[100], int n)
{
    int minnum;
    minnum = a[0];
    for (int i = 0; i < n; i++)
    {
        if (minnum > a[i])
            minnum = a[i];
    }
    cout << "The minimum number in the array is = " << minnum;
}
void maximum(int a[100], int n)
{
    int maxnum;
    maxnum = a[0];
    for (int i = 0; i < n; i++)
    {
        if (maxnum < a[i])
            maxnum = a[i];
    }
    cout << "The minimum number in the array is = " << maxnum;
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    minimum(a, n);
    cout << endl;
    maximum(a, n);
    return 0;
}