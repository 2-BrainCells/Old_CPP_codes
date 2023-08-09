#include <iostream>
using namespace std;
class matrix
{
    int n;
    int arr[100][100];

public:
    void enter()
    {
        cout << "Enter size ";
        cin >> this->n;
        cout << "Enter elems" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> this->arr[i][j];
            }
        }
    }
    matrix operator+(matrix m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                this->arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return *this;
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << this->arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    matrix m1, m2, m3;
    m1.enter();
    m2.enter();
    // m3 = m1 + m2;
    m3 = m1.operator+(m2);
    m3.display();
    return 0;
}