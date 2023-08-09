#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int low = 0, high = n - 1, mid = low + (high - low) / 2, findPivot;
    while (low <= high)
    {
        int suml = 0, sumr = 0;
        for (int i = low; i < mid; i++)
        {
            suml += arr[i];
        }
        cout << suml;
        for (int i = mid + 1; i <= high; i++)
        {
            sumr += arr[i];
        }
        cout << sumr;
        if (suml == sumr)
        {
            findPivot = mid;
            return findPivot;
            break;
        }
        else if (suml > sumr)
            mid = mid + 1;
        else
            mid = mid - 1;
    }
}
int main()
{
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << pivot(arr, n);
    return 0;
}