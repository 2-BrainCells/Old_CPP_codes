#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    int rollNumber;
    string name;
    int marks[6];
    int totalMarks;

public:
    void getData()
    {
        cout << "Enter the Name of the Student = ";
        getline(cin, name);
        cout << "Enter the Roll Number of the student = ";
        cin >> rollNumber;
        cout << "Enter the marks for 6 subjects = ";
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void marksTotal()
    {
        totalMarks = 0;
        for (int i = 0; i < 6; i++)
        {
            totalMarks += marks[i];
        }
    }
    void checkGrade(int totalMarks)
    {
        if (totalMarks >= 100 && totalMarks < 90)
            cout << "A";
        else if (totalMarks >= 90 && totalMarks < 80)
            cout << "B";
        else if (totalMarks >= 80 && totalMarks < 70)
            cout << "C";
        else if (totalMarks >= 70 && totalMarks < 60)
            cout << "D";
        else if (totalMarks >= 60 && totalMarks < 50)
            cout << "E";
        else
            cout << "F";
    }
    void display()
    {
        cout << "The Name of the Student = " << name << endl;
        cout << "The Roll Number of the student = " << rollNumber << endl;
        cout << "The marks for 6 subjects = ";
        for (int i = 0; i < 6; i++)
        {
            cout << marks[i];
        }
        cout << endl
             << "The Total Marks of the student is = " << totalMarks << " ";
        checkGrade(totalMarks);
    }
};
int main()
{
    Student stud;
    stud.getData();
    stud.marksTotal();
    stud.display();
    return 0;
}