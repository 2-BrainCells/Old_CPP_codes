#include <iostream>
#include <string.h>
using namespace std;

class student
{
protected:
    int rollNumber;
    int age;
    string name;

public:
    student()
    {
        cout << "Enter the roll Number of the student = ";
        cin >> rollNumber;
        cout << "Enter the name of the student = ";
        getline(cin >> ws, name);
        cout << "Enter the age of the student = ";
        cin >> age;
    }
};
class Test : public student
{
protected:
    int marks[5];

public:
    Test()
    {
        cout << "Enter the marks of the student " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
};
class sports
{
protected:
    int sportMarks;

public:
    sports()
    {
        cout << "Enter the sports marks ";
        cin >> sportMarks;
    }
};
class Result : public Test, public sports
{
protected:
    int totalMarks;
    float percentage;

public:
    void calculate()
    {
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
        totalMarks += sportMarks;
        percentage = totalMarks / 6.000;
        cout << "The marks of the student is " << totalMarks << " and the percentage of the student is " << percentage << " %" << endl;
    }
    ~Result()
    {
        cout << "The roll Number of the student = " << rollNumber << endl;
        cout << "The name of the student = " << name << endl;
        cout << "The age of the student = " << age << endl;
        cout << "The marks of the student" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << sportMarks;
        cout << endl;
    }
};

int main()
{
    Result r;
    r.calculate();
    return 0;
}