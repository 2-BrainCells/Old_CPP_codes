#include <iostream>
#include <cmath>
using namespace std;

class Simple_Calculator
{
    float a, b;

public:
    void get_number_Simple(float x, float y)
    {
        a = x;
        b = y;
    }
    void display1()
    {
        cout << "The  summmation of the two numnber are as follow = " << a + b << endl;
        cout << "The  subtraction of the two numnber are as follow = " << a - b << endl;
        cout << "The  multiplication of the two numnber are as follow = " << a * b << endl;
        cout << "The  division of the two numnber are as follow = " << a / b << endl;
    }
};
class Scientific_Calculator
{

    float a, b;

public:
    void get_number_Scientific(float x, float y)
    {
        a = x;
        b = y;
    }
    void display2()
    {
        cout << "The  power function of the two numnber are as follow = " << pow(a, b) << endl;
        cout << "The  subtraction of the two numnber are as follow = " << a - b << endl;
        cout << "The  multiplication of the two numnber are as follow = " << a * b << endl;
        cout << "The  division of the two numnber are as follow = " << a / b << endl;
    }
};
class Hybrid_Caulator : public Simple_Calculator, public Scientific_Calculator
{
public:
    void show_Simple()
    {
        get_number_Simple(12.09, 12.98);
        display1();
    }
    void show_Scientific()
    {
        get_number_Scientific(6.60, 7.45);
        display2();
    }
};
int main()
{
    Hybrid_Caulator H;
    H.show_Scientific();
    H.show_Simple();
    return 0;
}