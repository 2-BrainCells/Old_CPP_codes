#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {2,
                     3,
                     4,
                     5,
                     6,
                     7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    cout << *(it + 1);
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    vector<pair<int, int>> v_p = {{1, 2}, {1, 3}, {5, 7}};
    vector<pair<int, int>>::iterator itr;
    for (itr = v_p.begin(); itr != v_p.end(); itr++)
    {
        cout << itr->first << "," <<  itr->second << " ";
    }
    return 0;
}