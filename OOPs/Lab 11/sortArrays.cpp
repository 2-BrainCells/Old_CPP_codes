#include <iostream>
using namespace std;
template <class T>
void sort(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
template <class T>

void display(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {3, 1, 15, 7};
    sort(a, 4);
    display(a, 4);
    cout << endl;
    float b[] = {1.5, 1.2, 5.1, -0.9};
    sort(b, 4);
    display(b, 4);
    return 0;
}