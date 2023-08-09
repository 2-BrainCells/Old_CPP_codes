#include <iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
class age
{
    struct date anyDate;
    struct date birthDate;

public:
    void getData()
    {
        cout << "Enter the Date of Birthday = ";
        cin >> birthDate.day >> birthDate.month >> birthDate.year;
        cout << "Enter any Date = ";
        cin >> anyDate.day >> anyDate.month >> anyDate.year;
        if ((birthDate.day < 32 && birthDate.month < 13) && (anyDate.day < 32 && anyDate.month < 13))
        {
            cout << "The Date of Birthday = "
                 << " " << birthDate.day << " " << birthDate.month << " " << birthDate.year << endl;
            cout << "Any Date = " << anyDate.day << " " << anyDate.month << " " << anyDate.year << endl;
            cout << "Procedding " << endl;
        }
        else
            getData();
    }
    void calculateAge()
    {
        int month[] = {31, 28, 31, 30, 31, 30, 31,
                       31, 30, 31, 30, 31};
        if (birthDate.day > anyDate.day)
        {
            anyDate.day = anyDate.day + month[birthDate.month - 1];
            anyDate.month = anyDate.month - 1;
        }
        if (birthDate.month > anyDate.month)
        {
            anyDate.year = anyDate.year - 1;
            anyDate.month = anyDate.month + 12;
        }
        int calculatedDate = anyDate.day - birthDate.day;
        int calculatedMonth = anyDate.month - birthDate.month;
        int calculatedYear = anyDate.year - birthDate.year;
        cout << "Present Age" << endl;
        cout << "Years = " << calculatedYear << " Months = " << calculatedMonth << " Days = " << calculatedDate;
    }
};

int main()
{
    age a;
    a.getData();
    a.calculateAge();
    return 0;
}