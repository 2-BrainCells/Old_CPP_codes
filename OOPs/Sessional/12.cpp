#include <iostream>
using namespace std;
template <class T>
void bubbleSort(T arr[], int n)
{
    int i, j;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - i - 1; j++)
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
    int a[] = {2, 5, 7, 3};
    bubbleSort(a, 4);
    display(a, 4);
    cout << endl;
    float b[] = {1.2, 3.4, 1.1, 2.3};
    bubbleSort(b, 4);
    display(b, 4);
    return 0;
}