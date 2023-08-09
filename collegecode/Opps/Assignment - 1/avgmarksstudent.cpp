#include <iostream>
using namespace std;
class student
{
    int rollNumber;
    int n;
    int marks[100];

public:
    void getData()
    {
        cout << "Enter the number of students = ";
        cin >> n;
        cout << "Enter the marks of " << n << " students " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> marks[i];
        }
    }
    void avgMarks()
    {
        int sum = 0;
        double avg;
        for (int i = 0; i < n; i++)
        {
            sum += marks[i];
        }
    }
    avg = sum / n;
};
int main()
{

    return 0;
}