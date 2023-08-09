#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex operator++()
    {
        real = this->real + 1;
        imaginary = this->imaginary + 1;
        return *this;
    }
    Complex operator++(int)
    {
        real = this->real + 1;
        imaginary = this->imaginary + 1;
        return *this;
    }
    Complex display()
    {
        cout << real << "+i" << imaginary << endl;
    }
    
};
int main()
{
    Complex c(3, 5);
    Complex c1 = ++c;
    Complex c2 = c++;
    c1.display();
    c2.display();
    return 0;
}