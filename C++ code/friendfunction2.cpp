#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex o1, complex o2);
    int sumCompComplex(complex o1, complex o2);
};

class complex
{
    int a, b;
    // individual friend
    friend int calculator ::sumRealComplex(complex o1, complex o2);
    friend int calculator ::sumCompComplex(complex o1, complex o2);
    friend class complex; // friend whole class

public:
    void setNubner(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "The number is =  " << a << " +" << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNubner(1, 4);
    o2.setNubner(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of the real part of the complex numbner is = " << res;
    return 0;
}