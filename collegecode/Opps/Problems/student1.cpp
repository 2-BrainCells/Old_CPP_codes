#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int id, salary;
    string name;
    void getData()
    {
        cout << "Enter the id of the student = ";
        cin >> id;
        cout << "Enter the name of the student = ";
        getline(cin >> ws, name);
        cout << "Enter the salary of the student = ";
        cin >> salary;
    }
    void putData()
    {
        cout << "The id of the student = " << id << endl;
        cout << "The name of the student = " << name << endl;
        cout << "The salary of the student = " << salary << endl;
    }
};
int main()
{
    student s1, s2;
    s1.getData();
    s2.getData();
    s1.putData();
    s2.putData();
    return 0;
}