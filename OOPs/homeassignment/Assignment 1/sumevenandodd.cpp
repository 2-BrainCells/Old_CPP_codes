#include <iostream>
using namespace std;
int main()
{
    int a[100], n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of the array = ";
        cin >> a[i];
    }
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            sumEven = sumEven + a[i];
        else
            sumOdd = sumOdd + a[i];
    }
    cout << "The Sum of all Even and Odd numbers is = " << sumEven << " and " << sumOdd;
    return 0;
}