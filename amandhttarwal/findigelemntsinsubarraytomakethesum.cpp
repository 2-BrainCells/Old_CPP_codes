#include <iostream>
using namespace std;

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void sumsubarray(int a[100], int n, int sumfind)
{
    for (int i = 0; i < n; i++)
    {
        int j = i, sum = 0;
        while (j < n)
        {

            sum = sum + a[j];
            j++;
        }
        if (sum == sumfind)
        {
            cout << "The sum is found out to be for the iteration value between " << i << " and " << j;
        }
    }
}
int main()
{
    int a[100], n, sum;
    cin >> n;
    cout << "Enter the sum to be found = ";
    cin >> sum;
    enter(a, n);
    sumsubarray(a, n, sum);
    return 0;
}