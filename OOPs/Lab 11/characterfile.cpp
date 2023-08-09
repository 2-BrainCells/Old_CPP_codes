#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("cfile.txt", ios::in | ios::out);
    char c[100];
    cout << "Enter content of the file = ";
    cin.getline(c, 100);
    f << c;
    f.close();
    return 0;
}