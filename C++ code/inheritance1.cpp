#include <iostream>
using namespace std;
// Base classs
class Employee
{
    float salary;

public:
    int id;
    Employee()
    {
    }
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

// private members are never inherited SUIIIIIIIIIIIIIIIIIIII
// derived class
class programmer : public Employee // default visibilty mode is private, public members of the base class become private members of the class
{
public:
    int language_code = 9;
    programmer(int impID)
    {
        id = impID;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Harry(1), Rohan(0);
    programmer skillf(1);
    cout << skillf.language_code << endl;
    cout << skillf.id;
    return 0;
}