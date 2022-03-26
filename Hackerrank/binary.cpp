#include <iostream>
using namespace std;

int a[100];
void consecutive(int n);
int binary(int num, int i)
{
    if (num == 0)
    {
        // cout << i ;
        // cout<<endl;
        consecutive(i);
        return 1;
    }
    a[i] = num % 2;
    // cout << a[i]<<" "<<i<<endl;
    binary(num / 2, i + 1);
}
void consecutive(int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    for (int i = 1; i < n; i++)
    {
        if (a[i + 1] == 1&& a[i] == 1)
            count++;
        else
            continue;
    }
    cout << count;
}
int main()
{
    int num, count = 0;
    cin >> num;
    int i = 1;
    binary(num, i);
    return 0;
}