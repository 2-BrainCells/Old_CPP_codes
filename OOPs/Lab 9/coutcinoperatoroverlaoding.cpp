#include <iostream>
using namespace std;

class Array
{
    int *arr, size;

public:
    Array(int size)
    {
        this->size = size;
        this->arr = new int[size];
    }
    friend ostream &operator<<(ostream &out, const Array &a);
    friend istream &operator>>(istream &in, Array &a);
    Array operator+(int x)
    {
        for (int i = 0; i < size; i++)
        {
            this->arr[i] = this->arr[i] + x;
        }
    }
    ~Array()
    {
        delete arr;
    }
};
ostream &operator<<(ostream &out, const Array &a)
{
    for (int i = 0; i < a.size; i++)
    {
        out << a.arr[i] << endl;
    }
    return out;
}
istream &operator>>(istream &in, Array &a)
{
    for (int i = 0; i < a.size; i++)
    {
        in >> a.arr[i];
    }
    return in;
}
int main()
{
    Array a1(6);
    cin >> a1;
    cout << a1;
    return 0;
}