#include <iostream>
#include <string.h>
using namespace std;
class student
{
    string name;
    int roll;
    char section;

public:
    student()
    {
        this->name = "NULL";
        this->roll = 0;
        this->section = '\0';
    }
    void enter()
    {
        getline(cin >> ws, name);
        cin >> this->roll;
        cin >> this->section;
    }
    void display()
    {
        cout << this->name << endl
             << this->roll << endl
             << this->section << endl;
    }
};
int main()
{
    student s[10];
    for (int i = 0; i < 2; i++)
    {
        s[i].enter();
    }
    for (int i = 0; i < 2; i++)
    {
        s[i].display();
    }

    return 0;
}