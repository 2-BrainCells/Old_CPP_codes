#include<bits/stdc++.h>
using namespace std;
void printvec(vector<vector<int>> v)
{
    cout << "Size: "<<v.size()<< endl;
    for(int i = 0 ; i < v.size(); i++)
    {
        
    }
}
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;
    for(int i = 0 ; i < v.size(); i++)
    {
        int n;
        cin >> N;
        vector<int> temp;
        for(int j = 0 ; j < n ;j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i = 0; i < v.size(); i++)
    {
        
    }
    return 0;
}