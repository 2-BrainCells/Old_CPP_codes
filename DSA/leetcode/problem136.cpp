#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> a;
    for (auto x : nums)
        cout << x << " " << a[x]++ << endl;
    for (auto z : a)
        if (z.second == 1)
            return z.first;
    return -1;
}

int main()
{
    vector<int> v = {4, 1, 2, 1, 2};
    cout << singleNumber(v);
    return 0;
}