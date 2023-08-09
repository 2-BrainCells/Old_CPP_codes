#include <iostream>
using namespace std;
class age
{
public:
    void findAge(int currentDate, int currentMonth, int currentYear, int birthDate, int birthMonth, int birthYear)
    {
        int month[] = {31, 28, 31, 30, 31, 30, 31,
                       31, 30, 31, 30, 31};
        if (birthDate > currentDate)
        {
            currentDate = currentDate + month[birthMonth - 1];
            currentMonth = currentMonth - 1;
        }
        if (birthMonth > currentMonth)
        {
            currentYear = currentYear - 1;
            currentMonth = currentMonth + 12;
        }
        int calculatedDate = currentDate - birthDate;
        int calculatedMonth = currentMonth - birthMonth;
        int calculatedYear = currentYear - birthYear;
        cout << "Days in = " << calculatedDate << " Month = " << calculatedMonth << " Year = " << calculatedYear << endl;
    }
};
int main()
{
    age a;
    int bday, bmonth, byear, cday, cmonth, cyear;
    cout << "Enter the Birth Date Month and Year = ";
    cin >> bday >> bmonth >> byear;
    cout << "Enter the Current Date Month and Year = ";
    cin >> cday >> cmonth >> cyear;
    a.findAge(cday, cmonth, cyear, bday, bmonth, byear);
    return 0;
}
