#include <iostream>
using namespace std;

class Date
{
    int date;
    int month;
    int year;

public:
    void getData()
    {
        cout << "Enter the date = ";
        cin >> date;
        if (date > 32)
        {
            cout << "The date entered is incorrect " << endl;
            getData();
        }
        cout << "Enter the month = ";
        cin >> month;
        if (month > 13)
        {
            cout << "The month enterd is incorrect" << endl;
            getData();
        }
        cout << "Enter the year = ";
        cin >> year;
    }
    void putData()
    {
        cout << "The date = " << date << endl;
        cout << "The month = " << month << endl;
        cout << "The year = " << year << endl;
    }
};
int main()
{
    Date d;
    d.getData();
    d.putData();
    return 0;
}