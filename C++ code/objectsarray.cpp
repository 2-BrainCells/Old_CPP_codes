#include<iostream>
using namespace std;

class Employee
{
private:
    int Id;
    int salary;
public:
    void setId()
    {
        salary = 122;
        cout<<"Enter the Id of the employee = ";
        cin>>Id;
    }
    void getId()
    {
        cout<<"The Id of the employee = "<<Id<<endl;
    }
};
int main()
{
    Employee e[100];
    for (int  i = 0; i < 2; i++)
    {  
        e[i].setId();
        e[i].getId();
    }
    
    return 0;
}