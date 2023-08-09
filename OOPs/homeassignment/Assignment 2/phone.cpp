#include <iostream>
using namespace std;

class phone
{
    int stdCode;
    int exchangeCode;
    int phoneNumber;

public:
    void getData()
    {
        cout << "Enter the STD code = ";
        cin >> stdCode;
        cout << "Enter the Exchange Code = ";
        cin >> exchangeCode;
        cout << "Enter the Phone Number = ";
        cin >> phoneNumber;
    }
    void changeNumber()
    {
        int newStdCode, newPhoneNumber = 0, n;
        n = phoneNumber;
        newStdCode = 100 + stdCode;
        while (n != 0)
        {
            int fin;
            fin = n % 10;
            newPhoneNumber = newPhoneNumber * 10 + fin;
            n = n / 10;
        }
        cout << "The old Number is = " << stdCode << "-" << exchangeCode << "-" << phoneNumber << endl;
        cout << "The new Number is = " << newStdCode << "-" << exchangeCode << "-" << newPhoneNumber;
    }
};
int main()
{
    phone p[10];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        p[i].getData();
    }
    for (int i = 0; i < n; i++)
    {
        p[i].changeNumber();
    }
    return 0;
}