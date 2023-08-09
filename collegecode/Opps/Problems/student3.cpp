#include <iostream>
#include <string>
using namespace std;
class student
{
    int marks[5], rollNumber;
    string name;

public:
    void getData();
    void putData();
};
void student ::getData()
{
    cout << "Enter the id of the student = ";
    cin >> rollNumber;
    cout << "Enter the name of the student = ";
    getline(cin >> ws, name);

    cout << "Enter marks" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}
void student ::putData()
{
    cout << "Enter the id of the student = " << rollNumber << endl;
    cout << "Enter the name of the student = " << name << endl;
    cout << "Marks" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << marks[5] << " ";
    }
    cout << endl;
}
int main()
{
    student s1, s2;
    s1.getData();
    s2.getData();
    s1.putData();
    s2.putData();
    return 0;
}