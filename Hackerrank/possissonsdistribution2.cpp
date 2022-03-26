#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

void probablity(int lambda, int k)
{
    float prob;
    prob = pow(lambda, k) / (pow(2.71828, lambda) * factorial(k));
    cout << fixed << setprecision(3) << prob << endl;
}
int main()
{
    float lambda1, lambda2, k1, k2;
    cin >> lambda1 >> lambda2;
    k1 = 160 + (40 * pow(lambda1, 2));
    cout<<k1;
    k2 = 128 + (40 * pow(lambda2, 2));
    cout<< k2;
    probablity(lambda1, k1);
    probablity(lambda2, k2);
    return 0;
}