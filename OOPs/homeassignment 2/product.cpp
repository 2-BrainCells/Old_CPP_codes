#include <iostream>
#include <fstream>
using namespace std;
class Prod
{
    char Pcode[10];
    char Desc[10];
    int stock;

public:
    void enter()
    {
        cout << "Enter the Pcode of the book = ";
        cin >> Pcode;
        cout << "Enter the Desc of the book = ";
        cin >> Desc;
        cout << "Enter the stock price = ";
        cin >> stock;
    }
    void display()
    {
        cout << "The Pcode of the book = " << Pcode << endl;
        cout << "The Desc of the book = " << Desc << endl;
        cout << "The stock price = " << stock << endl;
    }
    int returnStock()
    {
        return stock;
    }
};
int main()
{
    fstream f;
    f.open("PRODUCT.dat", ios::binary | ios::in | ios::out);
    Prod p[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        p[i].enter();
        f.write((char *)&p[i], sizeof(p[i]));
        f.seekg(0);
    }
    int searchStock;
    cout << "Enter the stock to be searched = ";
    cin >> searchStock;
    for (int i = 0; i < n; i++)
    {
        int stock = p[i].returnStock();
        if (stock == searchStock)
        {
            p[i].enter();
        }
    }
    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }
    f.close();
    return 0;
}