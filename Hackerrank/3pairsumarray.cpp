#include <iostream>
using namespace std;

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void display(int b[100])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "The sum of the " << i + 1 << " th term is  = " << b[i] << endl;
    }
}
void sum(int a[100], int n)
{
    int l = n / 2, b[100], sum, j = 0;
    for (int i = 0; i < n; i++, l++)
    {
        if (j < 4)
        {
            int sum = 0;
            for (; j < l; j++)
            {
                sum = sum + a[j];
            }
            b[i] = sum;
            j = i + 1;
        }
    }
    display(b);
}

int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    sum(a, n);
    return 0;
}