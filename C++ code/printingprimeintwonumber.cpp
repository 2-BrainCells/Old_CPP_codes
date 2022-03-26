#include <iostream>
using namespace std;

void prime(int n1, int n2)
{
    bool flag = true;
    for (int i = n1; i <= n2; i++)
    {
        if (i > n1 && i < n2)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                }
            }
            if (flag == true)

                cout << i << " ";
        }
    }
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (n2 > n1)
        prime(n1, n2);
    return 0;
}