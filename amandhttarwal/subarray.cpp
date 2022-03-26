#include <iostream>
using namespace std;
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void sumofsubarray(int a[100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int j = 0 ;
        while(j <= n )
        {
            for(int k = i ; k < j ; k ++)
            {
                sum = sum + a[k];
            }
            j++;
        }
    }
    cout<< sum ;
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    sumofsubarray(a, n);
    return 0;
}