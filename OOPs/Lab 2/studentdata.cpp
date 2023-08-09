#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    string name;
    int rollNumber;
    int totalMarks;

public:
    void getdata()
    {
        cout << "Enter the Name of the student = ";
        cin >> name;
        cout << "Enter the Roll Number of the student = ";
        cin >> rollNumber;
        cout << "Enter the Total Marks of the student = ";
        cin >> totalMarks;
    }
    void showData()
    {
        cout << "The Name of the student = " << name << endl;
        cout << "The Roll Number of the student = " << rollNumber << endl;
        cout << "The Total Marks of the student = " << totalMarks << endl;
    }
};

int main()
{
    student stud;
    stud.getdata();
    stud.showData();
    return 0;
}