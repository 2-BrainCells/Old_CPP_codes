#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "This is the Base Class" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "This is the Single Inheritance" << endl;
    }
};
class C : public B
{
public:
    C()
    {
        cout << "This is Multilevel Inheritance " << endl;
    }
};
class D : public A
{
public:
    D()
    {
        cout << "This is Hierarchical Inheritance with class A B and D" << endl;
    }
};
class F
{
public:
    F()
    {
        cout << "This is Class F" << endl;
    }
};
class E : public D, public F
{
public:
    E()
    {
        cout << "This is Multiple Inheritance with Class D and F by E" << endl;
    }
};
class G : public D
{
public:
    G()
    {
        cout << "This is example of Hybrid Inheritance" << endl;
    }
};
int main()
{
    C c;
    cout << endl;
    D d;
    cout << endl;
    E e;
    cout << endl;
    G g;
    return 0;
}

/*

                        A
                F   D   B
                G   E   C




*/