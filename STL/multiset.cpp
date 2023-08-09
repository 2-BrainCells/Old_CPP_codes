#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("gds");
    s.insert("abc");
    auto itr = s.find("abc");
    if (itr != s.end())
    {
        s.erase(itr);
    }
    for (auto value : s)
    {
        cout << value << endl;
    }
    return 0;
}