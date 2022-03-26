#include<iostream>
using namespace std;

// template <class T1, class T2>
// class 

template<class T1, class T2>
class Myclass
{
    public:
    T1 data1;
    T2 data2;

    Myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout<this->data1<<this->data2;

    }
};
int main()
{
    Myclass <int , char> obj(1, 'c');
    obj.display();
    return 0;
}