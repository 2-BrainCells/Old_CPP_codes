#include <iostream>
using namespace std;

int count = 0;
class num
{

public:
    num()
    {
        count++;
        cout << "the constructor is called " << count<<endl;
    }
    ~num()
    {
        cout << "The destrutor is called " << count<<endl;
        count--;
    }
};

int main()
{
    cout << "Inside the main function" << endl;
    num n1;
    {
        cout << "Creatting two more objecrts" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "back to main"<<endl;
    return 0;
}