#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int a[], int find)
{
    int low = 0, high = 6, mid = low + (high - low) / 2;
    while (low < high)
    {
        if (a[mid] == find)
            return mid;
        else if (a[mid] < find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 5, 6, 7, 8};
    int a = binarySearch(arr, 3);
    cout << a;
    return 0;
}