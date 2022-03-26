#include <iostream>
using namespace std;
int main()
{
    int n = 5 , a = n - 1;
    char t = ' ';
    for (int i = 0; i < n; i++)
    {
        for (int k = a; k > 0; k--)
        {
            cout << t;
        }
        for (int j = n; j >= 0; j--)
        {
            if (i == j || i > j)
            {
                cout << j + 1 << " ";
            }
        }
         for (int j = 1; j < n; j++)
         {
             if (i == j || i > j)
             {
                 cout << j + 1 << " ";
             }
         }
        cout << endl;
    }

    return 0;
}