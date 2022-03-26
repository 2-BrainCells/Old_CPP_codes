#include <iostream>
using namespace std;

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void maxlenghtarithematic(int a[100], int n)
{
    int count = 2;
    int current = 0, j = 0;
    while (j < n)
    {
        if (j + 2 <= n)
        {
            current = a[j + 1] - a[j];
            // cout << current << " ";

            if (a[j + 2] - a[j + 1] == current)
            {
                count++;
            }
            
        }
        j++;
    }
    cout << count;
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    //display(a, n);
    maxlenghtarithematic(a, n);
    return 0;
}