#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number(void)
{
    cout << "The roll numebr of the studdent is = " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks obtained in maths = " << maths << endl;
    cout << "The marks obtained in physics = " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is  = " << (maths + physics) / 2;
    }
};
int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display();
    return 0;
} 