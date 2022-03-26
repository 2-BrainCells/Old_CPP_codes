#include <iostream>
using namespace std;

int main()
{
    int a[100], n, m, sum, t;
    cin >> t;
    int y = 1;
    while (t > 0)
    {
        sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
            sum = sum + a[i];
        }
        cout << m;
        int div = sum % m;
        cout << "Case #" << y << " " << div << endl;
        t--;
        y++;
    }
    return 0;
}