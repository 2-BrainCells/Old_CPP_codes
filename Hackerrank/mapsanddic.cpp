#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    // string s;
    // int phonenumber;
    // getline(cin, s);
    // cin >> phonenumber;
    // cout << s << " "<< phonenumber;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map < string, int > Phonebook;

    for (int i = 0; i < n ; i++)
    {
        string s;
        int phonenumber;
        getline(cin, s);
        cin>>phonenumber;
        Phonebook.insert({s, phonenumber});
    }
    for(auto iter = Phonebook.begin(); iter != Phonebook.end(); iter++)
    {
        cout<< iter -> first<<" "<< iter -> second;
    }
    return 0;
}
