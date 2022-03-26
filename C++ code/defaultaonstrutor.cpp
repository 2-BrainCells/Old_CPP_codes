#include <iostream>
using namespace std;

class simple
{
private:
    int data1;
    int data2;

public:
    simple(int a, int b = 12)
    {
        data1 = a;
        data2 = b;
    }
    void datafunction()
    {
        cout << data1 << " " << data2;
    }
};

int main()
{
    simple s(1, 4), s1(1);
    s.datafunction();
    cout<<endl;
    s1.datafunction();

    return 0;
}