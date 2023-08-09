#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
};
class Complex
{
    int real;
    int imag;
    // friend int Calculator::sumRealComplex(Complex, Complex);
    friend class Calculator;

public:
    void setNumber(int a, int b)
    {
        real = a;
        imag = b;
    }
    void printNumber()
    {
        cout << "Your number is = " << real << " + " << imag << "i";
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.real + o2.real);
}
int main()
{
    return 0;
}