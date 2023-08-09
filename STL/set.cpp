#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }
}
int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("zad");
    s.insert("bsc"); // log(n)
    s.insert("abc");
    auto it = s.find("abc");
    if (it != s.end())
    {
        cout << *it << endl;
    }
    print(s);
    return 0;
}