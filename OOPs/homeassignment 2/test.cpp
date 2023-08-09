#include <iostream>
#include <iomanip>
#include <ios>
#include <fstream>
using namespace std;
// Reading and Writing a Class Object
class inventory
{
    char name[10];
    int code;
    float cost;

public:
    void readdata(void);
    void writedata(void);
};
void inventory::readdata(void)
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter code : ";
    cin >> code;
    cout << "Enter cost : ";
    cin >> cost;
}
void inventory::writedata(void)
{
    cout << name
         << code
         << cost << endl;
}
int main()
{
    inventory item[3];
    fstream f;
    f.open("STOCK.DAT", ios::in | ios::out);
    cout << "Enter Details for three items:";
    for (int i = 0; i < 3; i++)
    {
        item[i].readdata();
        f.write((char *)&item[i], sizeof((item[i])));
        f.seekg(0);
        cout << "OUTPUT\n\n";
    }
    for (int i = 0; i < 3; i++)
    {
        f.read((char *)&item[i], sizeof(item[i]));
        item[i].writedata();
    }
    f.close();
}
