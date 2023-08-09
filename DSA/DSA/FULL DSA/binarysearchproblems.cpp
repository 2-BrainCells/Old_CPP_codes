#include <iostream>
#include <algorithm>
using namespace std;
void sortAr(int a[100], int n)
{
    sort(a, a + n);
}
int firstOcc(int a[100], int key)
{
    int ans = -1, low = 0, high = 5 - 1, mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (a[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (a[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
        mid = low + (high - low) / 2;
    }
    return ans;
}
int lastOcc(int a[100], int key)
{
    int ans = -1, low = 0, high = 5 - 1, mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (a[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (a[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
        mid = low + (high - low) / 2;
    }
    return ans; 
}
int main()
{
    int a[100] = {0, 1, 1, 2, 3};
    // sortAr(a, n);
    cout << firstOcc(a, 1);
    cout << endl
         << lastOcc(a, 1);
    return 0;
}