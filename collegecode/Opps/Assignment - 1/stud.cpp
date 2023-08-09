#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class student
{
    int rollNumber;
    string name;
    int marks;

public:
    void getData()
    {
        cout << "Enter the name of the student = ";
        getline(cin >> ws, name);
        cout << "Enter the roll number of the student = ";
        cin >> rollNumber;
        cout << "Enter the marks for the student = ";
        cin >> marks;
    }
    int avgFind(student s[100], int n)
    {
        int sum = 0, avg;
        for (int i = 0; i < n; i++)
        {
            sum += s[i].marks;
        }
        avg = sum / n;
        return avg;
    }
    void aboveAvg(student s[100], int n, int avg)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i].marks > avg)
                count++;
        }
        cout << "The number of students above the average marks are = " << count << endl;
    }
    void belowAvg(student s[100], int n, int avg)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i].marks <= avg)
                count++;
        }
        cout << "The number of students below the average marks are = " << count << endl;
    }
    void studentSort(student s[100], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[i].marks < s[j].marks)
                {
                    int temp = s[i].marks;
                    s[i].marks = s[j].marks;
                    s[j].marks = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << s[i].name << endl
                 << s[i].rollNumber << endl
                 << s[i].marks << endl;
        }
    }
    void highestScore(student s[100], int n)
    {
        int max = s[0].marks, index;
        for (int i = 1; i < n; i++)
        {
            if (max < s[i].marks)
            {
                max = s[i].marks;
                index = i;
            }
        }
        cout << "The student with the highest score is = " << s[index].name << " " << s[index].rollNumber << endl;
    }
};
int main()
{
    student s[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].getData();
    }
    int marksAvg = s->avgFind(s, n);
    s->avgFind(s, n);
    s->aboveAvg(s, n, marksAvg);
    s->belowAvg(s, n, marksAvg);
    s->studentSort(s, n);
    s->highestScore(s, n);
    return 0;
}