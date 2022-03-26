#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < 5)
            {
                cout << j + 1 << " ";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}