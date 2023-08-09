#include <iostream>

using namespace std;

class timer
{
    int hrs, min;
    int *hr, *mi;

public:
    // dummy constructor

    // default constructor
    timer()
    {
        hrs = 0;
        min = 0;
        cout << hrs << " " << min << endl;
    } 

    // paramatrixed constructor
    timer(int h, int m)
    {
        hrs = h;
        min = m;
        cout << hrs << " " << min << endl;
    }

    // copy constructor
    timer(const timer &t)
    {
        hrs = t.hrs;
        min = t.min;
        cout << hrs << " " << min << endl;
    }

    // dynamic constructorimaginary
    // timer(int h, int m)
    // {
    //     hr = new int;
    //     mi = new int;
    //     *hr = h;
    //     *mi = m;
    //     cout << *hr << " " << *mi << endl;
    // }
    ~timer()
    {
        cout << "Destructor is called " << endl;
    }
};
int main()
{
    timer t;
    timer t1(12, 32);
    timer t2(t1);
    timer t3 = timer(3, 4);
    return 0;
}