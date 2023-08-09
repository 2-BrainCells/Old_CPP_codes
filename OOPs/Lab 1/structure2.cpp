#include <iostream>
#include <string>
using namespace std;

struct studentMarks
{
    string studentName;
    int studentRoll;
    float marks[5];
};

void enterStruct(struct studentMarks stud[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Roll Number of Student = ";
        cin >> stud[i].studentRoll;
        cout << "Enter the Name of the Student = ";
        cin >> stud[i].studentName;
        cout << "Enter the marks for the " << i + 1 << " student " << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the " << j + 1 << " marks of the student = ";
            cin >> stud[i].marks[j];
        }
    }
}
void displayStruct(struct studentMarks stud[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "The Name of the Student is = " << stud[i].studentName << " and the Roll Number is = " << stud[i].studentRoll << endl;
        cout << "The marks of the student " << i + 1 << endl;
        for (int j = 0; j < 5; j++)
        {
            cout
                << stud[i].marks[j] << "\t";
        }
    }
    cout << endl;
}
void displayInRange(struct studentMarks stud[100], int n, float percentage[100])
{
    int low, high;
    cout << "Enter the lower bond of the range = ";
    cin >> low;
    cout << "Enter the upper bond of the range = ";
    cin >> high;
    for (int i = 0; i < n; i++)
    {
        if (percentage[i] <= high && percentage[i] >= low)
        {
            displayStruct(stud, n);
        }
    }
}
void totalPer(struct studentMarks stud[100], int n)
{
    float totalMarks, percentage[100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            totalMarks = totalMarks + stud[i].marks[j];
        }
        percentage[i] = (totalMarks / 500) * 100;
        cout << "The Total Marks for the student " << i + 1 << " is = " << totalMarks << endl;
        cout << "The Percentage for the student " << i + 1 << " is = " << percentage[i] << " %" << endl;
    }
    displayInRange(stud, n, percentage);
}

int main()
{
    struct studentMarks stud[100];
    int n;
    cout << "Enter the number of the student = ";
    cin >> n;
    enterStruct(stud, n);
    displayStruct(stud, n);
    totalPer(stud, n);
    return 0;
}