#include <iostream>
using namespace std;
void enter(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void searching(int a[100][100], int n)
{
    int t;
    cout << "Enter the number to be searched ";
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == t)
            {
                cout << "The number is found ";
            }
        }
    }
}
int main()
{
    int a[100][100], n;
    cin >> n;
    enter(a, n);
    searching(a, n);
    return 0;
}