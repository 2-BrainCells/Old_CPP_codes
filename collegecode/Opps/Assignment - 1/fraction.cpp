#include <iostream>
using namespace std;
class fraction
{
    int numerator;
    int demoninator;

public:
    void enter(fraction fr[2])
    {
        cout << "For Fraction 1 :" << endl;
        cout << "Enter the numerator = ";
        cin >> fr[0].numerator;
        cout << "Enter the demoninator = ";
        cin >> fr[0].demoninator;
        cout << "For Fraction 2 :" << endl;
        cout << "Enter the numerator = ";
        cin >> fr[1].numerator;
        cout << "Enter the denominator = ";
        cin >> fr[1].demoninator;
    }
    void add(fraction fr[2])
    {
        int up = 0, down = 0, nu1, nu2;
        nu1 = fr[0].numerator * fr[1].demoninator;
        down = fr[0].demoninator * fr[1].demoninator;
        nu2 = fr[1].numerator * fr[0].demoninator;
        up = nu1 + nu2;
        cout << "The sum of the fraction is = " << up << " / " << down << endl;
    }
    void sub(fraction fr[2])
    {
        int up = 0, down = 0, nu1, nu2, d;
        nu1 = fr[0].numerator * fr[1].demoninator;
        down = fr[0].demoninator * fr[1].demoninator;
        nu2 = fr[1].numerator * fr[0].demoninator;
        up = nu1 - nu2;
        cout << "The sub of the fraction is = " << up << " / " << down << endl;
    }
    void multi(fraction fr[2])
    {
        int up = 0, down = 0;
        up = fr[0].numerator * fr[1].numerator;
        down = fr[0].demoninator * fr[1].demoninator;
        cout << "The sub of the fraction is = " << up << " / " << down << endl;
    }
};
int main()
{
    fraction fr[2];
    fr->enter(fr);
    fr->add(fr);
    fr->sub(fr);
    fr->multi(fr);
    return 0;
}