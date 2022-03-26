#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < 4)
                cout << " ";
            if (i + j >= 4)
                cout << "*"
                     << " ";
        }
        cout << endl;
    }
    return 0;
}