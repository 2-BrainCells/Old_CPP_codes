#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_rollnumnber(int a)
    {
        roll_number = a;
    }
    void print_number()
    {
        cout << "The roll number of the student is = " << roll_number << endl;
    }
};

class test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "The maths marks are" << maths;
        cout << "The physics marks are" << physics;
    }
};
class sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "The score is = " << score << endl;
    }
};
class Result : public test, public sports
{
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Total score is = " << total << endl;
    }
};
int main()
{
    Result r;
    r.set_rollnumnber(100);
    r.set_marks(70.4, 79.9);
    r.set_score(9);
    r.display();
    return 0;
}