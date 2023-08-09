#include <iostream>
using namespace std;
void sum(int a, int b = 10, int c = 20)
{
    int add;
    add = a + b + c;
    cout << add;
}
int main()
{
    sum(12);
    return 0;
}