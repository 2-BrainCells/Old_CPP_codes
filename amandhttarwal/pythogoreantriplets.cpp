#include <iostream>
#include <cmath>
using namespace std;

void triplets(int n1, int n2, int n3)
{
    if (pow(n1, 2) == pow(n2, 2) + pow(n3, 2))
    {
        cout << "Pythogorous triplets " << endl;
    }
    else
    {
        cout << "Not Pythogorous triplets " << endl;
    }
}
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1 > n2 && n1 > n3)
        triplets(n1, n2, n3);
    return 0;
}