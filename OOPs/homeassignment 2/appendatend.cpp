#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class stud
{
    int Rno;
    string name;

public:
    void enter()
    {
        cin >> Rno;
        getline(cin >> ws, name);
    }
    void display()
    {
        cout << Rno << name << endl;
    }
};
int main()
{
    fstream f;
    f.open("append.dat", ios::binary | ios::app);
    stud s[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].enter();
        f.write((char *)&s[i], sizeof(s[i]));
        f.seekg(0);
    }
    for (int i = 0; i < n; i++)
    {
        f.write((char *)&s[i], sizeof(s[i]));
        s[i].display();
    }
    return 0;
}