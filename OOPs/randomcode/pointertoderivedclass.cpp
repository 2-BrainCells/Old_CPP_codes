#include <iostream>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout << "b=" << b << endl;
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << "d=" << b << "d" << d;
    }
};
int main()
{
    BC *bptr;
    BC base;
    bptr = &base;
    bptr->b = 100;
    cout << "bptr to base object =";
    bptr->show();
    DC der;
    bptr = &der;
    bptr->b = 200;
    cout << "bptr to derived object = ";
    bptr->show();
    DC *dptr;
    dptr = &der;
    dptr->d = 300;
    cout << "dptr to derived object = ";
    dptr->show();
    cout << "Using ((DC*)bptr)";
    ((DC *)bptr)->d = 400;
    ((DC *)bptr)->show();
    return 0;
}