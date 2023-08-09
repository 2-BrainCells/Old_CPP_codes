#include <iostream>
#include <fstream>
using namespace std;
class Book
{
    int Bno;
    char Title[30];

public:
    int RBook()
    {
        return Bno;
    }
    void Enter()
    {
        cout << "Enter the Book Number = ";
        cin >> Bno;
        cout << "Enter the title of the Book = ";
        cin >> Title;
    }
    void Display()
    {
        cout << Bno << endl
             << Title << endl;
    }
};
int main()
{

    fstream f;
    f.open("BOOKS.dat", ios::binary | ios::in | ios ::out);
    Book b[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        b[i].Enter();
        f.write((char *)&b[i], sizeof(b[i]));
        f.seekg(0);
    }
    int bookNo;
    cout << "Enter the Bno. to be found = ";
    cin >> bookNo;
    for (int i = 0; i < n; i++)
    {
        int compareBookNo = b[i].RBook();
        if (bookNo == compareBookNo)
        {
            b[i].Display();
        }
    }
    f.close();
    return 0;
}