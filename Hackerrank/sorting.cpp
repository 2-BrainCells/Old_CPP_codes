#include <iostream>
using namespace std;

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void insertionsort(int a[100], int n)
{
    int numswap = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                numswap++;
            }
        }
    }
    cout << "Array is sorted in " << numswap << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] <<endl;
}
int main()
{
    // selction sorting
    int arr[100], n, min;
    cin >> n;
    enter(arr, n);
    insertionsort(arr, n);
    return 0;
}