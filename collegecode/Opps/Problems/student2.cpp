#include <iostream>
using namespace std;

class student
{
    int rollNumber;
    string religion;

public:
    string name;
    int byear;
    void getData()
    {
        cout << "Enter the id of the student = ";
        cin >> rollNumber;
        cout << "Enter the name of the student = ";
        getline(cin >> ws, name);
        cout << "Enter the religion of the roll number = ";
        getline(cin >> ws, religion);
        cout << "Enter the salary of the student = ";
        cin >> byear;
    }
    void putData()
    {
        cout << "Enter the id of the student = " << rollNumber << endl;
        cout << "Enter the name of the student = " << name << endl;
        cout << "Enter the religion of the roll number = " << religion << endl;
        cout << "Enter the salary of the student = " << byear << endl;
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