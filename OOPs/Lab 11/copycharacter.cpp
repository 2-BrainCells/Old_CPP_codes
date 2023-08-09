#include <iostream>
#include <fstream>
#include <string>
using namespace std;
fstream f1, f2;
int main()
{
    char ch;
    string s;
    f1.open("copy.txt", ios::in | ios::out);
    f2.open("copy1.txt", ios::in | ios ::out | ios:: trunc);
    if (!f1 || !f2)
    {
        cout << "file not found";
    }
    else
    {
        while (!f1.eof())
        {
            f1.get(ch);
            f2.put(ch);
        }
    }
    f2 >> s;
    cout << s;
    return 0;
}