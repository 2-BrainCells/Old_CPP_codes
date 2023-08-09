#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class student
{
    int addno;
    string name;
    float totalMarks;

public:
    void getinfo()
    {
        cin >> addno;
        getline(cin >> ws, name);
        cin >> totalMarks;
    }
    void showinfo()
    {
        cout << addno << name << totalMarks;
    }
    float returnMarks()
    {
        return totalMarks;
    }
};

int main()
{
    fstream f;
    f.open("student.dat", ios::binary | ios::in | ios ::out);
    student s[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].getinfo();
        f.write((char *)&s[i], sizeof(s[i]));
        f.seekg(0);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i].returnMarks() >= 456 && s[i].returnMarks() <= 498)
        {
            f.read((char *)&s[i], sizeof(s[i]));
            s[i].showinfo();
        }
    }
    return 0;
}