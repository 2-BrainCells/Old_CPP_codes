#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    string name;
    int employeeNo;
    string dept;
    int salary;

public:
    void getData()
    {
        cout << "Enter the name of the employee = ";
        getline(cin, name);
        cout << "Enter the Employee Number = ";
        cin >> employeeNo;
        cout << "Enter the Dept of the employee = ";
        getline(cin >> ws, dept);
        cout << "Enter the Salary of the employee = ";
        cin >> salary;
    }
    inline void putData()
    {
        cout << name << " " << employeeNo << " " << dept << " " << salary;
    }
};
int main()
{
    Employee emp;
    emp.getData();
    emp.putData();
    return 0;
}