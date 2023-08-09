#include <iostream>
#include <fstream>
using namespace std;
class Applicant
{
    int Rno;
    char name[100];
    int A_score;

public:
    void enroll()
    {
        cout << "Enter Roll Number = ";
        cin >> Rno;
        cout << "Enter Name = ";
        cin >> name;
        cout << "Enter score of the student = ";
        cin >> A_score;
    }
    void Status()
    {
        cout << "Roll Number " << Rno << endl
             << "Name of the student " << name << endl
             << "Marks of the stdent " << A_score << endl;
    }
    int RetuenScore()
    {
        return A_score;
    }
};
using namespace std;
int main()
{
    fstream f;
    f.open("APPLY.DAT", ios::binary | ios::out | ios::in);
    Applicant a[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].enroll();
        f.write((char *)&a[i], sizeof(a[i]));
        f.seekg(0);
    }
    cout << endl
         << "Priniting students who got more than 70" << endl;
    for (int i = 0; i < n; i++)
    {
        int marks = a[i].RetuenScore();
        if (marks >= 70)
        {
            f.read((char *)&a[i], sizeof(a[i]));
            a[i].Status();
        }
    }
    f.close();
    return 0;
}