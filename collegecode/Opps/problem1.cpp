#include <iostream>
using namespace std;

class Arr
{

    int len, *address;

public:
    Arr()
    {
        len = 0;
        address = new int;
    }

    Arr(int x)
    {
        len = x;

        address = new int[len];

        for (int i = 0; i < len; i++)
        {

            address[i] = rand() % 101;
        }
    }

    void add_Arr(Arr &x, Arr &y)
    {
        len = x.len + y.len;

        delete address;
        address = new int[len];
        for (int i = 0; i < len; i++)
        {
            if (i < x.len)
            {

                address[i] = x.address[i];
            }
            else
            {

                address[i] = y.address[i - x.len];
            }
        }
    }
    ~Arr() { delete address; }

    void display()
    {
        for (int i = 0; i < len; i++)
        {
            cout << address[i] << ",";
        }
    }
};
int main()
{
    Arr a(5), b(3), c;
    c.add_Arr(a, b);
    a.display();
    b.display();
    cout << "\n After adding : ";
    c.display();
}