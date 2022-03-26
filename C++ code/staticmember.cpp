// class variable , linked through the class


#include<iostream>
using namespace std;
class Employee
{
private:
   static int count;
   int id;
public:
    void setData()
    {
        cout<<"Enter the Id = ";
        cin>>id;
        count++;
    }
    void getdata()
    {
        cout<<"The id is = ";
        cout<<id;
        cout<<endl;
        cout<<"The employee number is = "<< count<<endl;
    }
    static void getCount()
    {
        cout<<"The value of count = "<<count<<endl;

    }
   
};
int Employee :: count;   // count = 100;  static data member 
int main()
{
    Employee harry, rohan , lavish;
    harry.setData();
    harry.getdata();
    Employee :: getCount();
    rohan.setData();
    rohan.getdata();
    Employee :: getCount();
    return 0;
}