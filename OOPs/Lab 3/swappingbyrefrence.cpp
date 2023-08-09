#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x, y;
    cout << "Enter the value of first number = ";
    cin >> x;
    cout << "Enter the value of second number = ";
    cin >> y;
    swap(x, y);
    cout << "The values of the swapped "
         << "x = " << x << " y = " << y;
    return 0;
}