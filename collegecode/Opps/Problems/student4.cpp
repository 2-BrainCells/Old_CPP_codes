#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string name;
    int rollNumber;
    void display()
    {
        cout << name << " " << rollNumber << endl;
    }
};
int main()
{
    student s1, s2;
    s1.name = "Abhinav";
    s1.rollNumber = 2;
    s2.name = "Sujal";
    s2.rollNumber = 362;
    s1.display();
    s2.display();
    return 0;
}