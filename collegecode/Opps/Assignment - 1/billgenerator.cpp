#include <iostream>
#include <string.h>
using namespace std;
class bill
{
    int quantity;
    string name;
    int price;
    char code[100];
    int total;

public:
    void getData(bill b[100], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the code of the product = ";
            cin >> b[i].code;
            cout << "Enter the name of the product = ";
            getline(cin >> ws, b[i].name);
            cout << "Enter the price of the product = ";
            cin >> b[i].price;
        }
    }
    void feedQuant(bill b[100], int n)
    {
        for (int i = 0; i < n; i++)
        {
            b[i].total = 0;
            cout << "Enter the quantity of the product " << i + 1 << " = ";
            cin >> b[i].quantity;
            b[i].total = b[i].price * b[i].quantity;
        }
    }
    void display(bill b[100], int n)
    {
        cout << "SNo."
             << "    "
             << "Code"
             << "    "
             << "Name"
             << "\t\t\t"
             << "Price"
             << "    "
             << "Quantity"
             << "    "
             << "Total" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << i + 1
                 << "    "
                 << b[i].code
                 << "    "
                 << b[i].name
                 << "\t\t\t"
                 << b[i].price
                 << "    "
                 << b[i].quantity
                 << "    "
                 << b[i].total << endl;
        }
    }
};
int main()
{
    bill b[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    b->getData(b, n);
    b->feedQuant(b, n);
    b->display(b, n);
    return 0;
}