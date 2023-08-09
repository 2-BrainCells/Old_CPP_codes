#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    long long phoneNumber;
    string address;
    int rollNumber;
    void display()
    {
        cout << phoneNumber << " " << rollNumber << " " << address << endl;
    }
};
int main()
{
    student s1, s2;
    s1.phoneNumber = 9876543219;
    s1.address = "Dominose";
    s1.rollNumber = 1213;
    s2.phoneNumber = 98976543212;
    s2.address = "Pizza Hut";
    s2.rollNumber = 4353;
    s1.display();
    s2.display();
    return 0;
}
