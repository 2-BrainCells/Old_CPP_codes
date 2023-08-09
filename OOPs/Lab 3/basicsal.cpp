#include <iostream>
#include <string.h>
using namespace std;

class salary
{
    int id;
    string name;
    int age;
    float basicSalary;
    float grossSalary;
    float da;
    float hra;

public:
    void getData()
    {
        cout << "Enter the name of the employee = ";
        getline(cin >> ws, name);
        cout << "Enter the id of the employee = ";
        cin >> id;
        cout << "Enter the age of the employee = ";
        cin >> age;
        cout << "Enter the basic salary of the employee = ";
        cin >> basicSalary;
    }
    void totalSal()
    {
        da = 0.8 * basicSalary;
        hra = 0.1 * basicSalary;
        grossSalary = basicSalary + da + hra;
    }
    void putData()
    {
        cout << "Enter the name of the employee = " << name << endl;
        cout << "Enter the id of the employee = " << id << endl;
        cout << "Enter the age of the employee = " << age << endl;
        cout << "Enter the basic salary of the employee = " << grossSalary << endl;
    }
};
int main()
{
    salary s[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].getData();
        s[i].totalSal();
        s[i].putData();
    }
    return 0;
}