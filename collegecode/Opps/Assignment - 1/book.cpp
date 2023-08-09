#include <iostream>
#include <string.h>
using namespace std;
class books
{
    string title;
    string author;
    int price;
    int noOfCopies;

public:
    void getData()
    {
        cout << "Enter the title of the book = ";
        getline(cin >> ws, title);
        cout << "Enter the name of the author= ";
        getline(cin >> ws, author);
        cout << "Enter the price = ";
        cin >> price;
        cout << "Enter the no of copies = ";
        cin >> noOfCopies;
    }
    void searchBook(books b[100], int n)
    {
        string bookName;
        int remquant, total;
        cout << "Enter the book to be withdrawn = ";
        getline(cin >> ws, bookName);
        for (int i = 0; i < n; i++)
        {
            if (bookName.compare(b[i].title) == 0)
            {
                cout << "The book is found " << endl;
                b[i].putdata();
                cout << "Enter the number of books to be issued = ";
                cin >> remquant;
                if (remquant < b[i].noOfCopies)
                {
                    b[i].noOfCopies = b[i].noOfCopies - remquant;
                    total = remquant * b[i].price;
                    b[i].putdata();
                }
            }
        }
        cout << "The total amount to be paid is = " << total;
    }
    void putdata()
    {
        cout << "The title of the book = " << title << endl;
        cout << "The name of the author= " << author << endl;
        cout << "The price = " << price << endl;
        cout << "The no of copies = " << noOfCopies << endl;
    }
};
int main()
{
    books b[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        b[i].getData();
    }
    b->searchBook(b, n);
    return 0;
}