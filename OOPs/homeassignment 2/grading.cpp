#include <iostream>
#include <fstream>

using namespace std;
fstream f;
fstream f1;
class student
{
    int Rollno;
    int marks[8];
    float sgpa;
    int semester;
    char branch[15];

public:
    void enter()
    {
        cout << "Enter the Roll No.";
        cin >> Rollno;
        cout << "Enter marks = ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
        cout << "Enter the semester = ";
        cin >> semester;
        cout << "Enter the branch = ";
        cin >> branch;
    }
    void display()
    {
        cout << "The Roll No." << Rollno << endl;
        cout << "The sgpa = " << sgpa << endl;
        cout << "The semester = " << semester << endl;
        cout << "The branch = " << branch << endl;
    }
    void calculateSgpa()
    {
        for (int i = 0; i < 5; i++)
        {
            sgpa += marks[i];
        }
        display();
    }
    void reCal()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
        calculateSgpa();
    }
    void delelteARnoll(student s)
    {
        f.open("GRADING.dat", ios::binary | ios::in | ios::out);
        f1.open("GRADING2.dat", ios::binary | ios::in | ios::out);
        f.read((char *)&s, sizeof(s));
        f1.write((char *)&s, sizeof(s));
        display();
    }
    int returnRollNumber()
    {
        return Rollno;
    }
};

int main()
{
    f.open("GRADING1.dat", ios::binary | ios::in | ios::out);
    student s[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    cout << "Enter the info " << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].enter();
    }
    cout << "Calculate the sgp" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].calculateSgpa();
    }
    cout << "Recalculate the sgp" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].reCal();
    }
    int delro;
    cout << "Enter the Roll Number to be deleted = ";
    cin >> delro;
    for (int i = 0; i < n; i++)
    {
        if (s[i].returnRollNumber() != delro)
        {
            s[i].delelteARnoll(s[i]);
        }
    }
    f.close();
    f1.close();
    return 0;
}