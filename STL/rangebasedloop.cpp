#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it;
    for (int value : v)
    {
        value++;
        cout << value << " ";
    }
    // refrence
    cout << endl;
    for (int &value : v)
    {
        value++;
        cout << value << " ";
    }
    return 0;
}