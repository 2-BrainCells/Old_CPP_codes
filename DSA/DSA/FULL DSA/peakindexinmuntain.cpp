#include <iostream>
using namespace std;
void peakElems(int a[], int n)
{
    int low = 0, high = n - 1, mid = low + (high - low) / 2;
    while (low < high)
    {
        if (a[mid] < a[mid + 1])
            low = mid + 1;
        else
            high = mid;
        mid = low + (high - low) / 2;
    }
    cout << low;
}
int main()
{
    int arr[] = {0, 1, 5, 1, 1, 1, 0}, n = sizeof(arr) / sizeof(arr[0]);
    peakElems(arr, n);
    return 0;
}