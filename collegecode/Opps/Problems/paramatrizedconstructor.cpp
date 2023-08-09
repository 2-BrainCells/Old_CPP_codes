#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
    int id, salary;
    string name;

public:
    Employee()
    {
        id = 0;
        salary = 0;
        name = "NULL";
        cout << id << " " << name << " " << salary << endl;
    }
    Employee(int i, string n, int sal)
    {
        id = i;
        name = n;
        salary = sal;
        cout << id << " " << name << " " << salary << endl;
    }
};
int main()
{
    Employee e1, e2(2, "Abhinav", 56);
    return 0;
}