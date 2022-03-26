#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    /// creating constructor . special member of class having same name as class
    // used to initaliz the object of its class
    complex(int , int ); // constructor
    complex();

    void printdata()
    {
        cout << "Your number is = " << a << " + " << b << "i" << endl;
    }
};

complex ::complex()   // default constructor
{
    a = 0;
    b = 0;
}

complex ::complex(int x, int y)   // paramatrized constructor
{
    a = x;
    b = y;
}

int main()
{
    // implicite call
    complex a(4, 6);

    // explixite call

    complex b = complex(7, 5);
    a.printdata();
    b.printdata();
    return 0;
} 
