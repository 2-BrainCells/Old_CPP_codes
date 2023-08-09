#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    for (auto value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    print(m);
    auto itr = m.find(3);
    cout << itr->first << " " << itr->second << endl;
}