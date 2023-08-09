#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class Drinks
{
    int Dcode;
    string Dname;
    int Dsize;
    float Dprice;

public:
    void getdrinks()
    {
        cin >> Dcode;
        getline(cin >> ws, Dname);
        cin >> Dsize >> Dprice;
    }
    void showdrinks()
    {
        cout << Dcode << Dname << Dsize << Dprice << endl;
    }
    string getName()
    {
        return Dname;
    }
};
int main()
{
    fstream f;
    f.open("drinks.dat", ios::binary | ios ::in | ios ::out);
    Drinks d[100];
    int n;
    cout << "Enter the limit of the array = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        d[i].getdrinks();
        f.write((char *)&d[i], sizeof(d[i]));
        f.seekg(0);
    }
    for (int i = 0; i < n; i++)
    {
        if (d[i].getName() == "COCA COLA")
        {
            f.read((char *)&d[i], sizeof(d[i]));
            d[i].showdrinks();
        }
    }
    return 0;
}