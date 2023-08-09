#include <iostream>
#include <string>
using namespace std;

class range;
class book
{
    string name;
    string author;
    int price;

public:
    void getData()
    {
        cout << "Enter the name of the book = ";
        getline(cin >> ws, name);
        cout << "Enter the name of the author = ";
        getline(cin >> ws, author);
        cout << "Enter the price of a book = ";
        cin >> price;
    }
    friend void printRange(book[], range, int);
};
class range
{
    int upperbond;
    int lowerbond;

public:
    void enterRange()
    {
        cout << "Enter the lower bond of the price = ";
        cin >> lowerbond;
        cout << "Enter the upper bond of the price = ";
        cin >> upperbond;
    }
    friend void printRange(book[], range, int);
};
void printRange(book b[], range r, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (b[i].price < r.upperbond && b[i].price > r.lowerbond)
        {
            cout << "The name of the book is  " << b[i].name << " the name of the author is " << b[i].author << " and the price of the book is " << b[i].price << endl;
        }
    }
}
int main()
{
    book b[100];
    range r;
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        b[i].getData();
    }
    r.enterRange();
    printRange(b, r, n);
    return 0;
}