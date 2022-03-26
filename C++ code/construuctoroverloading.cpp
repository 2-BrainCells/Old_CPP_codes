#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex (int x)
    {
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout<<"Your number is "<<a<< " + "<<b<<"i"<<endl;
    }
};



int main()
{
    complex c1(4,6),c2(5);
    c1.printnumber();
    c2.printnumber();
    return 0;
}