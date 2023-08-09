#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
}
int main()
{
    int m = 12, q = 34;
    swap(m, q);
}