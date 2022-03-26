#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "The number of rows = ";
    cin >> row;
    cout << "The number of column = ";
    cin >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (j == 0 || j == 3)
            {
                cout << "*"
                     << " ";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}