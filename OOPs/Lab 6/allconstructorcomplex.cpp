#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;
    int *rl, *img;

public:
    // dummy constructor

    // default constructor
    complex()
    {
        real = 0;
        imaginary = 0;
        cout << real << " " << imaginary << endl;
    }

    // paramatrixed constructor
    complex(int r, int i)
    {
        real = r;
        imaginary = i;
        cout << real << " " << imaginary << endl;
    }

    // copy constructor
    complex(const complex &c)
    {
        real = c.real;
        imaginary = c.imaginary;
        cout << real << " " << imaginary << endl;
    }

    // dynamic constructor
    // complex(int r, int i)
    // {
    //     rl = new int;
    //     img = new int;
    //     *rl = r;
    //     *img = i;
    //     cout << rl << " " << img << endl;
    // }
    ~complex()
    {
        cout << "Destructor is called " << endl;
    }
};

int main()
{
    complex c;
    complex c1(12, 32);
    complex c2(c1);
    // complex c3 = complex(3, 4);
    return 0;
}