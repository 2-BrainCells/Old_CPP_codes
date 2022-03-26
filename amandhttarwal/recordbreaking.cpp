#include <iostream>
using namespace std;
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void recordbreakingsale(int a[100], int n)
{
    int recbreaking;
    for (int i = 1; i < n; i++)
    {
        if (i + 1 <= n)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                recbreaking = i + 1;
            }
        }
    }
    cout << "The record breaking day = " << recbreaking;
    if (a[recbreaking] < a[0] || a[recbreaking] < a[n])
        cout << "The record breaking day is either the first day or the last day";
    else
        cout << "The record breaking day = " << recbreaking;
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    recordbreakingsale(a, n);
    return 0;
}