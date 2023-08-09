#include <iostream>
#include <string>
using namespace std;
class student
{
    int rollNumber, totalMarks;
    string name;

public:
    void getdata(int marks[5])
    {
        cout << "Enter the roll Number of the student = ";
        cin >> rollNumber;
        cout << "Enter the name of the student = ";
        getline(cin >> ws, name);
        cout << "Enter the marks of the stuent = ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void putData(int marks[5])
    {
        cout << "Enter the roll Number of the student = " << rollNumber << endl;
        cout << "Enter the name of the student = " << name << endl;
        // cout << "Enter the marks of the stuent = ";
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
        cout << "The total Marks of the student is = " << totalMarks << endl;
    }
};
int main()
{
    int marks[5];
    student s;
    s.getdata(marks);
    s.putData(marks);
    return 0;
}