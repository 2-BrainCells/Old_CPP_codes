#include <iostream>
using namespace std;

class cmMeter;
class inchesFeet
{
    float feet, inches;

public:
    void getData()
    {
        cout << "Enter the distance in inches = ";
        cin >> inches;
        cout << "Enter the distance in feet = ";
        cin >> feet;
        // if (inches >= 12)
        // {
            int rem;
            rem = inches / 12;
            feet = feet + rem;
            inches = int(inches) % 12;
        // }
    }
    void putData()
    {
        cout << "The total distance = " << feet << "' " << inches << "'' " << endl;
    }
    friend void calculate(inchesFeet, cmMeter);
};
class cmMeter
{
    float meter, centi;

public:
    void getData()
    {
        cout << "Enter the distance in centimeter = ";
        cin >> centi;
        cout << "Enter the distance in meter = ";
        cin >> meter;
        // if (centi >= 100)
        // {
            int rem;
            rem = centi / 100;
            meter = meter + rem;
            centi = int(centi) % 100;
            centi = centi / 100;
        // }
    }
    void putData()
    {
        cout << "The distance in meters = " << meter + centi << endl;
    }
    friend void calculate(inchesFeet, cmMeter);
};
void calculate(inchesFeet i, cmMeter m)
{
    float icenti, imeter, idistance, mdistance;
    icenti = 2.54 * i.inches;
    imeter = 0.3048 * i.feet;
    icenti = icenti / 100;
    idistance = icenti + imeter;
    mdistance = m.meter + m.centi;
    cout << idistance << endl;
    cout << mdistance << endl;
    if (mdistance > idistance)
        cout << "The meter distance is the highest";
    else
        cout << "The feet distance is the higehst";
}
int main()
{
    cmMeter c;
    inchesFeet i;
    i.getData();
    c.getData();
    calculate(i, c);
    return 0;
}