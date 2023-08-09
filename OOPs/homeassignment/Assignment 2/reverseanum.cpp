#include <iostream>
using namespace std;

class revNum
{
    int n;

public:
    void enterNum();
    void rev(int n);
};
void revNum ::enterNum()
{
    int n;
    cout << "Enter the number = ";
    cin >> n;
    rev(n);
}
void revNum ::rev(int n)
{
    int rem, revNumber = 0;
    while (n != 0)
    {
        rem = n % 10;
        revNumber = revNumber * 10 + rem;
        n = n / 10;
    }
    cout << "Reversed Number = " << revNumber;
};
int main()
{
    revNum r;
    r.enterNum();

    return 0;
}