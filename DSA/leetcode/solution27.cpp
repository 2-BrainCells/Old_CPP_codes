#include <bits/stdc++.h>
using namespace std;

int remElements(vector<int> &v, int val)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != val)
        {
            cout << v[i] << " ";
            count++;
        }
        else
        {
            cout << v[i] << " ";
            v.erase(v.begin() + i);
        }
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << count;
}
int main()
{
    vector<int> v = {3, 2, 2, 3, 3, 2, 3};
    int val;
    cin >> val;
    remElements(v, val);
    return 0;
}