#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of tehe item is = " << id << endl;
        cout << "Price of this item is = " << price << endl;
    }
};
int main()
{
    int size = 3, q;
    float p;
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and the price of item = ";
        cin >> q >> p;
        ptr->setData(q, p);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item numbe "<<i + 1;
        ptrtemp->getData();
        ptrtemp++;
    }

    return 0;
}