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
    add(int a);
    add operator=(add a1)
    {
        this->a = a1.a;
        cout << this->a;
    }
};
add::add(int a)
{
    this->a = a;
}
int main()
{
    add a1(5), a2;
    a2 = a1;
    return 0;
}