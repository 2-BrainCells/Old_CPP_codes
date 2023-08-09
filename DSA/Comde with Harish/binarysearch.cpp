#include <iostream>
using namespace std;

void binarySearch(int a[100], int n, int val)
{
    int high = n - 1;
    int low = 0;
    int mid = (high + low) / 2;
    while (low <= high)
    {
        if (a[mid] == val)
        {
            cout << "Number found at position = " << mid;
            break;
        }
        else if (a[mid] < val)
        {
            low = mid + 1;
            // cout << "a";
        }
        else if (a[mid] > val)
        {
            high = mid - 1;
            // cout << "b";
        }
    }
}
void enterArray(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void displayArray(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
int main()
{
    int a[100], n, val;
    cout << "Enter the limit of the array = ";
    cin >> n;
    cout << "Enter the number to be found = ";
    cin >> val;
    enterArray(a, n);
    binarySearch(a, n, val);
    displayArray(a, n);
    return 0;
}