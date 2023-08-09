#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int a;
    if (nums.size() == 0)
    {
        a = nums[0];
        return a;
    }
    else
    {
        for (auto value : nums)
        {
            int count = 0;
            for (auto val : nums)
            {
                if (val == value)
                {
                    count++;
                }
            }
            if (count > nums.size() / 2)
            {
                a = value;
            }
        }
        return a;
    }
}
int main()
{
    vector<int> v = {3, 3, 4};
    cout << majorityElement(v) << endl;
    return 0;
}