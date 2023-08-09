#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Limit of array 1: ";
    cin >> n;
    cout << "Limit of array 2: ";
    cin >> m;
    int ar1[0], ar2[2], ar3[1][2];
    ar1[n];
    ar2[m];
    ar3[n][n + m - 1] = {0};

    cout << "Enter values in first array: ";
    for (int i = 0; i < n; i++)
        cin >> ar1[i];
    cout << "\nEnter values in second array: ";
    for (int i = 0; i < m; i++)
        cin >> ar2[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i, k = 0; j < i + 4, k < m; j++, k++)
        {
            ar3[i][j] = ar1[i] * ar2[j];
        }
    }
    cout << "\nArray 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar1[i] << " ";
    }

    cout << "\nArray 2: ";
    for (int i = 0; i < m; i++)
    {
        cout << ar2[i] << " ";
    }

    cout << "\nArray 3: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + m - 1; j++)
        {
            cout << ar3[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}