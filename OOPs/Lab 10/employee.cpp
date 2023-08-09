#include <iostream>
#include <string.h>
using namespace std;
class employee
{
protected:
    string name;
    int id;
    float salary;

public:
    employee()
    {
        cout << "Enter the name of the employee = ";
        getline(cin >> ws, name);
        cout << "Enter the ID of the employee = ";
        cin >> id;
    }
    virtual void calSalary() {}
    ~employee()
    {
        cout << "The name of the employee " << this->name << endl;
        cout << "The ID of the employee " << this->id << endl;
        cout << "The salary of the employee " << this->salary << endl;
    }
};
class regular : public employee
{
    float da, hra, basic;

public:
    regular()
    {
        cout << "Enter the Basic Salary of the employee = ";
        cin >> basic;
    }
    void calSalary()
    {
        hra = basic * 0.8;
        da = basic * 0.1;
        salary = basic + hra + da;
    }
};
class part_timer : public employee
{
    float hours, hourpay;

public:
    part_timer()
    {
        cout << "Enter the hours of the employee = ";
        cin >> hours;
        cout << "Enter the hourpay of the employee = ";
        cin >> hourpay;
    }
    void calSalary()
    {
        salary = hours * hourpay;
    }
};
int main()
{
    employee *e1, *e2;
    regular r;
    e1 = &r;
    e1->calSalary();
    part_timer p;
    e2 = &p;
    e2->calSalary();
    return 0;
}