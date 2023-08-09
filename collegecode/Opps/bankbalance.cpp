#include <iostream>
using namespace std;
int main()
{
    int x = 10, m = 1;
    int &r = x;
    cout << &r << " "
         << " " << r << " " << x << " " << &x;
    return 0;
}