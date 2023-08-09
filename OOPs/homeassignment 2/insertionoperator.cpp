#include <iostream>
using namespace std;
class complex
{
    int img, real;

public:
    complex()
    {
        this->img = 0;
        this->real = 0;
    }
    complex(int i, int r)
    {
        this->img = i;
        this->real = r;
    }
    friend istream &operator>>(istream &in, complex &c);
    friend ostream &operator<<(ostream &out, const complex &c);
};
istream &operator>>(istream &in, complex &c)
{
    cout << "Enter the value of i and r = ";
    in >> c.img >> c.real;
    return in;
}
ostream &operator<<(ostream &out, const complex &c)
{
    cout << c.img << c.real;
    return out;
}
int main()
{
    complex c1, c2;
    cin >> c1 >> c2;
    cout << c1 << c2;
    return 0;
}