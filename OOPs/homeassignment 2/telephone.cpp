#include <iostream>
#include <fstream>
#include <string.h>
#include <algorithm>
using namespace std;
fstream f;
class tele
{
    char Name[20];
    char Adress[30];
    char areacode[5];
    int phno;

public:
    void registerA()
    {
        cout << "Enter the Name = ";
        cin >> Name;
        cout << "Enter the Adress = ";
        cin >> Adress;
        cout << "Enter the areacode = ";
        cin >> areacode;
        cout << "Enter the pho.  = ";
        cin >> phno;
    }
    void show()
    {
        cout << "The Name = " << Name << endl;
        cout << "The Adress = " << Adress << endl;
        cout << "The title of the Book = " << areacode << endl;
        cout << "The title of the Book = " << phno << endl;
    }
    int checkcode(char AC[])
    {
        return (strcmp(areacode, AC));
        cout << strcmp(areacode, AC);
    }
    char *returnCheckCode()
    {
        return areacode;
    }
    int returnPho()
    {
        return phno;
    }
};
void enter(tele t[100], int n)
{
    f.open("TELE.dat", ios::binary | ios::in | ios::out);
    for (int i = 0; i < n; i++)
    {
        t[i].registerA();
        f.write((char *)&t[i], sizeof(t[i]));
        f.seekg(0);
    }
}
void display(tele t[100], int n)
{
    f.open("TELE.dat", ios::binary | ios::in | ios::out);
    for (int i = 0; i < n; i++)
    {
        f.read((char *)&t[i], sizeof(t[i]));
        t[i].show();
    }
}
void sorting(tele t[100], int n)
{
    f.open("TELE.dat", ios::binary | ios::in | ios::out);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (t[j].checkcode(t[j + 1].returnCheckCode()) >= 0)
            {
                swap(t[j], t[j + 1]);
            }
        }
    }
}
void inserting(tele t[100], int n)
{
    f.open("TELE.dat", ios::binary | ios::in | ios::out);
    tele temp;
    temp.registerA();

    for (int i = 0; i < n; i++)
    {
        if (t[i].checkcode(temp.returnCheckCode()) <= 0)
        {
            n++;
            int pos = i + 1;
            for (int j = n - 1; j > pos; j--)
            {
                f.read((char *)&t[i], sizeof(t[i]));
                t[j] = t[j - 1];
            }
            f.read((char *)&temp, sizeof(temp));
            t[pos] = temp;
        }
    }
    display(t, n + 1);
}
void deletePno(tele t[100], int n)
{
    int delph;
    cout << "Enter the pNo. to be deleted = ";
    cin >> delph;
    for (int i = 0; i < n; i++)
    {
        int pos = i;
        if (t[i].returnPho() == delph)
        {
            for (int j = i; j < n; j++)
            {
                f.read((char *)&t[i], sizeof(t[i]));
                t[j] = t[j + 1];
            }
        }
    }
    display(t, n - 1);
}
void COPYABC(tele t[100], int n)
{
    fstream f1;
    f1.open("TELEBACK.dat", ios ::binary | ios::in | ios ::out);
    for (int i = 0; i < n; i++)
    {
        if (t[i].checkcode("123") == 0)
        {
            f.read((char *)&t[i], sizeof(t[i]));
            f1.write((char *)&t[i], sizeof(t[i]));
            f1.seekg(0);
        }
    }
    f1.close();
}

int main()
{
    tele t[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    enter(t, n);
    display(t, n);
    cout << "Sort the obecjects according to areacode" << endl;
    sorting(t, n);
    display(t, n);
    cout << "Enter the data in sorted list" << endl;
    inserting(t, n);
    cout << "Deleteing phno." << endl;
    deletePno(t, n);
    cout << "Copy Context to other file" << endl;
    COPYABC(t, n);
    f.close();
    return 0;
}