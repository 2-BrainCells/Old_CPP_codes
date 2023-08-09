#include <iostream>
using namespace std;
class Polynomial
{
    int poly[100] = {0};
    int n;

public:
    void addData()
    {
        cout << "Enter the limit of the array = ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> poly[i];
        }
    }
    void addPolynomials(Polynomial p1, Polynomial p2)
    {
        int sum[100];
        int n = max(p1.n, p2.n);
        for (int i = 0; i < n; i++)
        {
            sum[i] = p1.poly[i] + p2.poly[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << sum[i] << "x^" << i << " ";
        }
    }
    void multiPolynomials(Polynomial p1, Polynomial p2)
    {
        // cout << "Enter";
        // cout << p1.n << " " << p2.n;
        int multi[][100] = {0};
        for (int i = 0; i < p1.n; i++)
        {
            for (int j = 0; j < p2.n; j++)
            {
                multi[i][j] += p1.poly[i] * p2.poly[j];
            }
        }
        for (int i = 0; i < p1.n; i++)
        {
            for (int j = 0; j < p2.n; j++)
            {
                cout << multi[i][j] << "x^" << j << " ";
            }
            cout << endl;
        }
        cout << "exit";
    }
};

int main()
{
    Polynomial p1, p2, sum, multi;
    p1.addData();
    p2.addData();
    sum.addPolynomials(p1, p2);
    cout << endl;
    multi.multiPolynomials(p1, p2);
    return 0;
}