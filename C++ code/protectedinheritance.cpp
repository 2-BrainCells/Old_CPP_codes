#include <iostream>
using namespace std;

class Base
{
    int b; // very sensitive
protected:
    int a; // needs to be inherited
};
// for a protected member a 
/* 
                      Public         Private        Protected
Private member :   Not inherited   Not inherited   Not Inherited
Protected member :   Protected       Private         Protected
Public member :        Public        Private         Protectd
 */
class derived : protected Base
{
};
int main()
{
    Base b;
    derived d;
    // cout<< d.a; will not work
    return 0;
}