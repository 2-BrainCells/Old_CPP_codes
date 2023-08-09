// if age > 18 can drive equal to 18 eligibel to drive less than 18 cannot drive

#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age == 18)
        cout << "eligible to drive";
    else if (age < 18)
        cout << "not eligible to drive";
    else
        cout << "eligible to drive";
    return 0;
}
