#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name = ";
    getline(cin, name);
    int n = name.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(name[i], name[n - i - 1]);
    }
    cout << "The reverse string is = " << name;
    return 0;
}