#include <iostream>
using namespace std;

class Account
{
protected:
    int balance;
    int amount;

public:
    void getDeposit()
    {
        cout << "Enter the balance of the account = ";
        cin >> balance;
        cout << "Enter the amount to be deposited = ";
        cin >> amount;
    }
    virtual void deposit() = 0;
    virtual void withdraw() = 0;
    void putBalance()
    {
        cout << "The total balance is = " << balance;
    }
};

class Saving : public Account
{
public:
    void deposit()
    {
        balance = balance + amount;
    }
    void withdraw()
    {
        balance = balance - amount;
    }
};
class Current : public Account
{
public:
    void deposit()
    {
        balance = balance + amount;
    }
    void withdraw()
    {
        balance = balance - amount;
    }
};
int main()
{
    Account *a;
    Saving s;
    a = &s;
    a->getDeposit();
    a->deposit();
    a->putBalance();
    return 0;
}