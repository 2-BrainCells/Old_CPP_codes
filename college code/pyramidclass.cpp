#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count1 = n - 1, count2 = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j >= count1 && j <= count2)

                cout << i << j << " ";

            else
                printf("   ");
        }
        count1--;
        count2++;
        cout << endl;
    }
    return 0;
}