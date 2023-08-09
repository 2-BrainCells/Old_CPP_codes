#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    void getData(int p, int q)
    {
        real = p;
        img = q;
    }
    complex add(complex &c1)
    {
        complex temp;
        temp.real = c1.real + real;
        temp.img = c1.img + img;
        return temp;
    }
    // void add(complex &c1, complex &c2)
    // {
    //     real = c1.real + c2.real;
    //     img = c1.img + c2.img;
    // }
    void putData()
    {
        cout << real << " " << img;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getData(12, 3);
    c2.getData(4, 5);
    // c3.add(c1,c2);
    c3 = c2.add(c1);
    c3.putData();
    return 0;
}