#include <iostream>
#include <math.h>
using namespace std;
int armstrong(int i)
{
    int temp = i;
    int sum = 0;
    while (i > 0)
    {
        int j;
        j = i % 10;
        sum = sum + pow(j, 3);
        i = i / 10;
        // cout << sum;
    }
    if (sum == temp)
    {
        cout << sum << " ";
    }
}
int main()
{
    for (int i = 0; i <= 1000; i++)
    {
        armstrong(i);
    }
    // 153 is not showing because of some compiler error
    return 0;
}