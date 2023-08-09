#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("wordfile.txt", ios::in | ios ::out);
    char ch;
    int c = 1, w = 1, l = 1, upp = 0, low = 0, d = 0 ,sp = 0;
    while (f >> noskipws >> ch)
    {
        c++;
        if (ch == ' ')
            w++;
        else if (ch == '\n' && ch != ' ')
            l++;
        else if (ch >= 'A' && ch <= 'Z')
            upp++;
        else if (ch >= 'a' && ch <= 'z')
            low++;
        else if (ch >= '0' && ch <= '9')
            d++;
        else
            sp++;
    }
    cout << c << endl;
    cout << w << endl;
    cout << l << endl;
    cout << upp << endl;
    cout << low << endl;
    cout << d << endl;
    cout << sp << endl;
    f.close();
    return 0;
}