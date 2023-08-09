#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &nums, int val)
{
    int count = 0;
    vector<int> rem;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
            i--;
        }
        else
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val;
    cin >> val;
    cout << removeElement(nums, val);
    return 0;
}