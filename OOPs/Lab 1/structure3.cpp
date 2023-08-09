#include <iostream>
#include <string>
using namespace std;
struct Employee
{
    int empId;
    string empName;
    int empAge;
    int empBasicSalary;
};

void enterStruct(struct Employee emp[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Employee Id = ";
        cin >> emp[i].empId;
        cout << "Enter the Employee Name = ";
        cin >> emp[i].empName;
        cout << "Enter the Employee Age = ";
        cin >> emp[i].empAge;
        cout << "Enter the Basic Salary = ";
        cin >> emp[i].empBasicSalary;
    }
}
void calculateSalary(struct Employee emp[100], int n)
{
    int salary[100];
    for (int i = 0; i < n; i++)
    {
        salary[i] = emp[i].empBasicSalary + ((emp[i].empBasicSalary) * 0.8 )+ ((emp[i].empBasicSalary) * 0.1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "The Employee Id = " << emp[i].empId << endl;
        cout << "The Employee Name = " << emp[i].empAge << endl;
        cout << "The Employee Age = " << emp[i].empAge << endl;
        cout << "The Basic Salary = " << emp[i].empBasicSalary << endl;
        cout << "The Total Salary is = " << salary[i] << endl;
    }
}
int main()
{
    struct Employee emp[100];
    int n;
    cout << "Enter the number of the Employee = ";
    cin >> n;
    enterStruct(emp, n);
    calculateSalary(emp, n);
    return 0;
}