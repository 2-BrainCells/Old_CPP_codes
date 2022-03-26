// cummilative sum approch
#include <iostream>
using namespace std;
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void cummilativesum(int a[100], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int sum = 0;
        for(int j = i ; j < n; j++)
        {
            sum  = sum + a[j];
            //cout << a[j]<< " ";
        }
        cout << sum << " ";
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a,n);
    cummilativesum(a, n);
    return 0;
}