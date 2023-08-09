#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    // v.size() -> O(1)
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int a[10];
    vector<int> v;
    // int n;
    // cin >> n;
    v.push_back(4);
    v.push_back(5);
    printVector(v);
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;ṇ
    //     v.push_back(x);
    // }
    cout << endl;
    v.pop_back();
    printVector(v);

    vector <int> v1 = v;  // copy an vector O(n)
    printVector(v1);
    return 0;
}