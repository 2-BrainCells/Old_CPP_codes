#include <iostream>
#include <string.h>
using namespace std;
class Account
{
protected:
    string name;
    int number;
    double balance, amount;

public:
    Account()
    {
        cout << "Enter the name of the customer = ";
        getline(cin >> ws, name);
        cout << "Enter the number of the customer = ";
        cin >> number;
        cout << "Enter the balamce of the customer = ";
        cin >> balance;
        cout << "Enter the amount = ";
        cin >> amount;
    }
    virtual void deposit(){};
    virtual void withdraw(){};
    ~Account()
    {
        cout << "Enter the name of the customer = " << name << endl;
        cout << "Enter the number of the customer = " << number << endl;
        cout << "Enter the balamce of the customer = " << balance << endl;
    }
};
class savings : public Account
{
    float minimumBal;

public:
    savings()
    {
        cout << "Enter the minimum balance = ";
        cin >> minimumBal;
    }
    void deposit()
    {
        balance = balance + amount;
    }
    void withdraw()
    {
        if (balance > minimumBal)
        {
            balance = balance - amount;
        }
    }
};
class current : public Account
{
    float debt, days, iRate;

public:
    current()
    {
        cout << "Enter the debt = ";
        cin >> debt;
        cout << "Enter the days = ";
        cin >> days;
        cout << "Enter the Interest Rate = ";
        cin >> iRate;
    }
    void deposit()
    {
        balance = balance + amount;
    }
    void withdraw()
    {
        float overDue = debt * days * iRate;
        balance = balance - overDue - amount;
    }
};
int main()
{
    Account *a1, *a2;
    savings s;
    a1 = &s;
    a1->deposit();
    a1->withdraw();
    current c;
    a2 = &c;
    a2->deposit();
    a2->withdraw();
    return 0;
}