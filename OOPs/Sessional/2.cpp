#include <iostream>
using namespace std;
class Int
{
    int a, result;

public:
    void enter()
    {
        cout << "Enter values = ";
        cin >> a;
    }
    Int operator+(Int i)
    {
        this->result = a + i.a;
        if (this->result > INT32_MAX && this->result < INT32_MIN)
        {
            cout << "OverFlow" << endl;
            exit(0);
        }
        else
            return *this;
    }
    Int operator-(Int i)
    {
        this->result = a - i.a;
        if (this->result > INT32_MAX && this->result < INT32_MIN)
        {
            cout << "OverFlow" << endl;
            exit(0);
        }
        else
            return *this;
    }
    Int operator*(Int i)
    {
        this->result = a * i.a;
        if (this->result > INT32_MAX && this->result < INT32_MIN)
        {
            cout << "OverFlow" << endl;
            exit(0);
        }
        else
            return *this;
    }
    Int operator/(Int i)
    {
        this->result = a / i.a;
        if (this->result > INT32_MAX && this->result < INT32_MIN)
        {
            cout << "OverFlow" << endl;
            exit(0);
        }
        else
            return *this;
    }
    void display()
    {
        cout << "The result of the operation is = " << this->result << endl;
    }
};
int main()
{
    Int i1, i2, i3, i4, i5, i6;
    i1.enter();
    i2.enter();
    i3 = i1 + i2;
    i3.display();
    i4 = i1 - i2;
    i4.display();
    i5 = i1 * i2;
    i5.display();
    i6 = i1 / i2;
    i6.display();
    return 0;
}