#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise hoe" << endl;
    }
};
class B 
{
    int a; 
    public: 
    void say()
    {
        cout<<"Hello my people";
    }
};

class D  : public B
{
    // D 's new say method will overright teh previous say fucntion
    int a; 
    public: 
    void say()
    {
        cout<<"Hello my people hue hue";
    }

};
class derive : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1 ::greet();
    }
};
int main()
{
    // Base1 obj;
    // Base2 obj2;
    // obj.greet();
    // obj2.greet();
    // derive d;
    // d.greet(); // ambiguity

    //Ambuiguity 2
    B b;
    b.say();
    cout<<endl;
    D d;
    d.say();
    return 0;
}