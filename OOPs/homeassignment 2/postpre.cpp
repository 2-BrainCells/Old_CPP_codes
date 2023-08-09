#include <iostream>
using namespace std;
class add
{
    int a;

public:
    add()
    {
        this->a = 0;
    }
    add(int a)
    {
        this->a = a;
    }
    add operator++()
    {
        this->a = ++this->a;
        cout << this->a;
    }
    add operator++(int)
    {
        this->a = this->a++;
        cout << this->a;
    }
};
int main()
{
    add a1(3), a2, a3;
    a2 = ++a1;
    a3 = a1++;
    return 0;
}