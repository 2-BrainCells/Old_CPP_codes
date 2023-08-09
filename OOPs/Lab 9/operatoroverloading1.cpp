#include <iostream>
using namespace std;
class Marks
{
    int marks;

public:
    Marks()
    {
        marks = 0;
    }
    Marks(int im)
    {
        marks = im;
    }
    // += ;
    Marks operator+=(int addedMarks)
    {
        marks = marks + addedMarks;
        return *this;
    }
    // using friend function
    friend void operator-=(Marks &m, int k);

    // increment and decrement operator (prefix)
    // Marks operator++()
    // {
    //     marks = marks + 1;
    //     return *this;
    // }
    // postfix
    Marks operator++(int)
    {
        marks = marks + 1;
        return *this;
    }

    // display()
    void display()
    {
        cout << marks << endl;
    }
    Marks operator-(Marks m);

    // insertion and extraction operator
    friend ostream &operator<<(ostream &, Marks &);
    friend istream &operator>>(istream &, Marks &);
};

// outside class declaration
Marks Marks ::operator-(Marks m)
{
    marks = this->marks * m.marks;
    return *this;
}
// using friend function
void operator-=(Marks &m, int k)
{
    m.marks -= k;
}

// insertion operator
ostream &operator<<(ostream &output, Marks &m)
{
    output << "hello" << endl;
    output << "Marks " << m.marks;
    return output;
}

istream &operator>>(istream &input, Marks &m)
{
    input >> m.marks;
    return input;
}
int main()
{
    Marks m1(10), m2(12);
    Marks m3 = m1 - m2;
    Marks m4(1);
    m4 += 12;
    m3.display();
    // m4.display();

    // operator overloading for short hand +=
    Marks m5(45);
    m5 -= 13;
    // m5.display();

    // below code works with postfix

    Marks m6(9);
    m6++;
    m6.display();

    // below code wroks with prefix

    // Marks m7(9);
    // ++m7;
    // m7.display();

    Marks m8;
    cin >> m8;
    cout << m8;
    return 0;
}