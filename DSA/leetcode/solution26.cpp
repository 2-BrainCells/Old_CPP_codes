#include <bits/stdc++.h>

using namespace std;
int remDuplicates(vector<int> &nums)
{
    int count = 1;
    vector<int> rem;
    for (int i = 0, j = i + 1; i < nums.size(), j < nums.size(); i++, j++)
    {

        if (nums[i] == nums[j])
        {
            nums.erase(nums.begin() + j);
            j--;
            i--;
        }
        else
            // cout << nums[i] << endl;
            count++;
    }
    for (int i = 0; i <  nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    return count;
}
int main()
{
    vector<int> v = {1, 1, 2};
    cout << remDuplicates(v);
}