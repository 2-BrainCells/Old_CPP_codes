#include <iostream>
#include <string>
using namespace std;

struct studentMarks
{
    string studentName;
    int studentRoll;
    float studentMarks[5];
};
int main()
{
    struct studentMarks stud;

    cout << "Enter the Roll Number of Student = ";
    cin >> stud.studentRoll;
    cout << "Enter the Name of the Student = ";
    cin >> stud.studentName;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i + 1 << " marks of the student = ";
        cin >> stud.studentMarks[i];
    }

    cout << "The Name of the Student is = " << stud.studentName << endl
         << "The Roll Number is = " << stud.studentRoll << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i << " marks of the student = "
             << stud.studentMarks[i] << endl;
    }
    return 0;
}