#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map <string, int> Phonebook;

    for (int i = 0; i < n; i++)
    {
        string s;
        int phonenumber;
        getline(cin, s);
        cin >> phonenumber;
        Phonebook.insert(pair<string, int>(s, phonenumber));
    }

    map <string, int>::iterator itr;
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    return 0;
}
