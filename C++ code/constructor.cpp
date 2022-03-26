#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    /// creating constructor . special member of class having same name as class
    // used to initaliz the object of its class
    complex(void); // constructor
    void printdata()
    {
        cout << "Your numner is = " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)   // default constructor
{
    a = 10;
    b = 0;
}

int main()
{
    complex c1, c2, c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;
} 

/* 
declared in pucblic section
automatically invoked by the class
do not have return type
default argumnets
cannot refer to their address 
*/