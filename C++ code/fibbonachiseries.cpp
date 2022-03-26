#include <iostream>
using namespace std;

int fibbonachi(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return fibbonachi(n - 1) + fibbonachi(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibbonachi(n);
    return 0;
}