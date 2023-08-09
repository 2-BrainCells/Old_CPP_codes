#include <iostream>
using namespace std;
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < a[j])
            {
                // shift
                a[j + 1] = a[j];
            }
            else
                break;
        }
        a[j + 1] = temp;
    }
}
// adaptibility
// best Case O(n)
// Worst case O(n^2)
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 5, 6, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    display(arr, n);
    return 0;
}