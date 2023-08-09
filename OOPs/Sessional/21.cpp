#include <iostream>
using namespace std;
template <class T>
void findMin(T arr[], int n)
{
    T min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min << endl;
};

int main()
{
    int a[] = {
        5,
        0,
        6,
        2,
        4,
    };
    float b[] = {1.4, -2.3, 9.5, -12.6};
    findMin(a, 5);
    findMin(b, 4);
    return 0;
}