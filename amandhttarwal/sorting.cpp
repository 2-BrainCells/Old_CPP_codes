#include <iostream>
using namespace std;

void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void display(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void selectionsort(int arr[100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void bubblesort(int a[100], int n)
{
    while (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp;
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        n--;
    }
}
void insertionsort(int a[100], int n)
{
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
            }
        }
    }
}
int main()
{
    // selction sorting
    int arr[100], n, min;
    cin >> n;
    enter(arr, n);
    // selectionsort(arr, n);
    // bubblesort(arr, n);
    insertionsort(arr, n);
    display(arr, n);
    return 0;
}