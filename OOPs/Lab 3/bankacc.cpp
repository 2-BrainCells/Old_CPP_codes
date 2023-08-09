#include <iostream>
#include <string.h>
using namespace std;

class bankAccount
{
    string name;
    int accountNumber;
    int balanceAmount;
    string type;

public:
    void getData()
    {
        cout << "Enter the Name of the account holder = ";
        getline(cin, name);
        cout << "Enter the Account Number = ";
        cin >> accountNumber;
        cout << "Enter the Balance Amount = ";
        cin >> balanceAmount;
        cout << "Enter the type of the account = ";
        cin >> type;
    }
    void depositAmount()
    {
        int depAmount;
        cout << "Enter the Amount to be deposited = ";
        cin >> depAmount;
        balanceAmount = balanceAmount + depAmount;
        cout << "The final Amount is = " << balanceAmount << endl;
    }
    void withAmount()
    {
        int withdep;
        cout << "Enter the Amount to be withdrawn = ";
        cin >> withdep;
        if (withdep > balanceAmount)
            cout << "The amount cannot be withdrawn" << endl;
        else
            balanceAmount = balanceAmount - withdep;
    }
    void display()
    {
        cout << "The Name of the account holder = " << name << endl;
        cout << "The Account Number = " << accountNumber << endl;
        cout << "The Balance Amount = " << balanceAmount << endl;
        cout << "The type of the account = " << type << endl;
    }
};
int main()
{
    bankAccount b;
    b.getData();
    b.depositAmount();
    b.withAmount();
    b.display();
    return 0;
}