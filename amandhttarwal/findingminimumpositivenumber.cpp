#include <iostream>
#include <algorithm>
using namespace std;
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void findingminimumpositivenumber(int a[100], int n)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > 0)
        {
            int j = 0;
            j = a[i + 1] - a[i];
            if (j != 1)
            {
                cout << a[i] + 1;
                break;
            }
        }
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    findingminimumpositivenumber(a, n);
    return 0;
}