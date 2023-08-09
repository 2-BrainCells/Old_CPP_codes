#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    string name;
    int yearJoin;
    int salary;
    string address;

public:
    void getData()
    {
        cout << "Enter the name of the employee = ";
        getline(cin, name);
        cout << "Enter the year of joining of employee = ";
        cin >> yearJoin;
        cout << "Enter the salary of employee = ";
        cin >> salary;
        cout << "Enter the address of the employee = ";
        getline(cin >> ws, address);
    }
    void putData()
    {
        cout << "Name " << '\t' << "Year of Joining " << '\t'
             << "Address " << endl;
        cout << name << '\t';
        cout << yearJoin << '\t';
        cout << '\t' << '\t' << address << '\t';
        cout << endl;
    }
};
int main()
{
    Employee e[3];
    for (int i = 0; i < 3; i++)
    {
        e[i].getData();
    }
    for (int i = 0; i < 3; i++)
    {
        e[i].putData();
    }
    return 0;
}