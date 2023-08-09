#include <iostream>
#include <cstring>
using namespace std;

class concat
{
    char *s;
    int len;

public:
    concat()
    {
        len = 0;
        s = new char[len + 1];
        cout << s << " " << len << endl;
    }
    // paramatrized constructor
    concat(char c[], int l)
    {
        s = c;
        len = l;
        cout << s << " " << len << endl;
    }

    // copy constructor
    concat(const concat &c)
    {
        s = c.s;
        len = c.len;
        cout << s << " " << len << endl;
    }

    // dynamic constructorimaginary
    concat(char c[])
    {
        len = strlen(c);
        s = new char[len + 1];
        s = c;
        cout << s << " " << len << endl;
    }
    ~concat()
    {
        cout << "Destructor is called " << endl;
    }
    void concatestrings(concat cstring)
    {
        char *newString;
        int newLen = len + cstring.len;
        newString = new char[newLen + 1];
        strcpy(newString, s);
        strcat(newString, cstring.s);
        cout << newString << endl;
    }
};
int main()
{
    char str[] = "hello";
    concat c;
    concat c1(str, 5);
    concat c2(c1);
    concat c3 = concat(str);
    c3.concatestrings(c1); 
    return 0;
}