#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getData(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void putData()
    {
        cout << this->real << " " << this->imaginary;
    }
    complex add(complex c1)
    {
        complex temp;
        temp.real = this->real + c1.real;
        temp.imaginary = this->imaginary + c1.imaginary;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getData(12, 34);
    c2.getData(34, 12);
    c3 = c2.add(c1);
    c3.putData();
    return 0;
}