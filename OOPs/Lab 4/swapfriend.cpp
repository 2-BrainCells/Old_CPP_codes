#include <iostream>
using namespace std;

class B;
class A
{
    int a;

public:
    void getData()
    {
        cout << "Enter the value of a = ";
        cin >> a;
    }
    void putData()
    {
        cout << "The value of a is = " << a;
    }
    friend void swap(A &, B &);
};
class B
{
    int b;

public:
    void getData()
    {
        cout << "Enter the value of b = ";
        cin >> b;
    }
    void putData()
    {
        cout << "The value of b is  = " << b;
    }
    friend void swap(A &, B &);
};
void swap(A &ob1, B &ob2)
{
    int temp = ob1.a;
    ob1.a = ob2.b;
    ob2.b = temp;
}
int main()
{
    A a;
    B b;
    a.getData();
    b.getData();
    cout << "Before Swapping " << endl;
    a.putData();
    cout << endl;
    b.putData();
    swap(a, b);
    cout << endl
         << "After Swapping " << endl;
    a.putData();
    cout << endl;
    b.putData();
    return 0;
}