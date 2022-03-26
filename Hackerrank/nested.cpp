#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int d1, m1, y1;
    int d2, m2, y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    int fine;
    if (d1 <= d2 || m1 <= m2 || y1 <= y2)
    {
        fine = 0;
        cout << fine;
    }
    else if (y2 < y1)
    {
        fine = 1000;
        cout << fine;
    }
    else if (m2 < m1)
    {
        fine = 0;
        fine = 500 * (m1 - m2);
        cout << fine;
    }
    else if (d2 < d1)
    {
        fine = 0;
        fine = 15 * (d1 - d2);
        cout << fine;
    }

    return 0;
}
