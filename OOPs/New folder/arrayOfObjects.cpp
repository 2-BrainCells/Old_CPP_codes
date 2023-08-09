#include <iostream>
#include <string>
using namespace std;
class employee
{
    int age;
    string name;

public:
    void getData(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    void putData()
    {
        cout << this->age << " " << this->name << endl;
    }
};
int main()
{
    employee e[5];
    int age;
    string name;
    for (int i = 0; i < 5; i++)
    {
        cin >> age;
        getline(cin >> ws, name);
        e[i].getData(age, name);
    }
    for (int i = 0; i < 5; i++)
    {
        e[i].putData();
    }
    return 0;
}