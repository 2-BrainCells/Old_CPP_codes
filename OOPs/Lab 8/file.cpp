#include <iostream>
#include <string.h>
using namespace std;

class person
{
protected:
    string name;
    char gender;
    int age;

public:
    person()
    {
        cout << "Name: ";
        getline(cin >> ws, name);
        cout << "Gender: ";
        cin >> gender;
        cout << "age: ";
        cin >> age;
    }
};
class employee : public person
{
protected:
    string company;
    float salary;

public:
    employee()
    {
        cout << "Salary: ";
        cin >> salary;
        cout << "Company Name: ";
        getline(cin >> ws, company);
    }
    ~employee()
    {
        cout << "Printing output employee" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        cout << "Company Name: " << company << endl;
        cout << "Salary: " << salary << endl;
    }
};
class student : public person
{
protected:
    string inst, l;

public:
    student()
    {
        cout << "Institute name:";
        getline(cin >> ws, inst);
        cout << "level: ";
        getline(cin >> ws, l);
    }
    ~student()
    {
        cout << "Printing output student" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        cout << "Institute name: " << inst << endl;
        cout << "Level: " << l << endl;
    }
};
int main()
{
    employee e;
    student s;
    return 0;
};