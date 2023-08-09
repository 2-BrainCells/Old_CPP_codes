#include <stdio.h>

int linearSearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
            return 1;
    }
    return -1;
}
int binarySearch(int arr[], int n, int element)
{
    int mid, high = n - 1, low = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7}, n = sizeof(arr) / sizeof(int), element = 2;
    // int a = linearSearch(arr, n, element);
    // printf("%d ", a);
    int b = binarySearch(arr, n, element);
    printf("%d", b);
    return 0;
}