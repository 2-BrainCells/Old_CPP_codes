#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> m)
{
    for (auto value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}
int main()
{
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[4] = "a";
    print(m); 
    return 0;
}