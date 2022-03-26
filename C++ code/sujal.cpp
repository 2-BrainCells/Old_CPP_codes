#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void display(int a[10000], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
void mean(int a[10000], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    float mean;
    mean = sum / n;
    cout<<fixed<<setprecision(1);
    cout << "The mean is  " << mean << endl;
}
void median(int a[10000], int n)
{
    float median = 0;

    sort(a, a + n);

    int t = n / 2;
    if (n % 2 != 0)
    {
        median = a[t];
    }
    if (n % 2 == 0)
    {
        int m = (a[t] + a[t - 1]);
        median = m / 2;
    }
    cout<<fixed<<setprecision(1);
    cout << "The median is " << median;
}

void mode(int a[10000], int n)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (a[i] == a[j])
                {
                    cout << a[i];
                }
                else
                {
                    cout<<a[0];
                }
            }
        }
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[100000], n;
    cin >> n;
    mean(a, n);
    median(a, n);
    cout << endl;
    mode(a, n);
    return 0;
}
