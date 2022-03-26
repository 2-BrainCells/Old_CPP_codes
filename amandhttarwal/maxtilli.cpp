#include <iostream>
using namespace std;
void enter(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void maxtilli(int a[100], int n)
{
    int maxtill;
    maxtill = a[0];
    for (int i = 0; i < n; i++)
    {
        if (maxtill < a[i])
        {
            maxtill = a[i];
            cout << "The max till i for the " << i << " th element is " << maxtill << endl;
        }
        else
            cout << "The max till i for the " << i << " th element is " << maxtill << endl;
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    enter(a, n);
    maxtilli(a, n);
    return 0;
}