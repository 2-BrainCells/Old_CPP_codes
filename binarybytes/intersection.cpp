#include <iostream>
using namespace std;
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void intersection(int arr[100], int arr2[100], int n1, int n2)
{
    int a[100];
    for (int i = 0; i < n1; i++)
    {
        int find = arr[i];
        for (int j = 0; j < n2; j++)
        {
            if (arr[i] != arr2[j])
            {
                if (arr2[j] == find)
                {
                    cout << arr2[j] << " ";
                }
            }
        }
    }
}
int main()
{
    int arr[100], arr2[100], n1, n2;
    cin >> n1 >> n2;
    enter(arr, n1);
    enter(arr2, n2);
    intersection(arr, arr2, n1, n2);
    return 0;
}