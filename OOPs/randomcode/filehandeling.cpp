#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // // constructor
    // string st = "Hello";
    // string st2;
    // // ofstream out("filehandeling.txt");
    // // out << st;
    // ifstream in("filehandeling.txt");
    // getline(in >> ws, st2);
    // cout << st2;

    ofstream out;
    out.open("filehandeling.txt");
    out << "This is me";
    out << "\nThis is HUE HUE ";
    out.close();

    ifstream in;
    string str;
    in.open("filehandeling.txt");
    while (in.eof() == 0)
    {
        getline(in >> ws, str);
        cout << str << endl;
    }
    cout << str;
    in.close();
    return 0;
};