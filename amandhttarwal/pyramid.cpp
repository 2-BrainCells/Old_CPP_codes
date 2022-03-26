#include <iostream>
using namespace std;
int main()
{
    int n = 5, a = 4;
    char t = ' ';
    for (int i = 0; i < n; i++)
    {
        for (int k = a; k > 0; k--)
        {
            cout << t;
        }
        for (int j = 0; j < n; j++)
        {

            if (i >= j)
            {

                cout << j + 1 << " ";
            }
            else
                cout << " ";
        }
        a--;
        cout << endl;
    }
    return 0;
}