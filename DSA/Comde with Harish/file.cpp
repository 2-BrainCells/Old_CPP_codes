
#include <bits/stdc++.h>
using namespace std;
vector<int> function1(vector<int> &v, int target)
{
    vector <int> v1;
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            sum = v[i] + v[j];
            if (target == sum)
            {
                // cout << "[" << i << ","
                //      << j
                //      << "]";
                v1.push_back(i);
                v1.push_back(j);
                
            }
        }
    }
    return v1;
}

int main()
{
    vector<int> v = {2, 7, 11, 15};
    int target;
    cin >> target;
    function1(v, target);
    return 0;
}