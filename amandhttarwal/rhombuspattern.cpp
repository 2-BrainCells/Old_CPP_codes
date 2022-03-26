#include <iostream>
using namespace std;
int main()
{
    int n = 5, a = n - 1;
    char t = ' ';
    for (int i = 0; i < n; i++)
    {
        for (int j = a; j > 0; j--)
        {
            cout << t;
        }
        for (int j = 0; j < n; j++)
        {
            cout << "*"
                 << " ";
        }
        a--;
        cout << endl;
    }
    return 0;
}