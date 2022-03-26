#include<iostream>
using namespace std;
template <class T>
class Harry
{
    public: 
    T data;
    Harry (T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Harry <T> :: display()
{
    cout<<data;
}
void func(int a)
{
    cout<<"I am function 1"<<a;
}
template <class T>
void func(T a)
{
    cout<<"I templatized function "<< a;
}
int main()
{
    Harry <float> h(3.232);
    h.display();
    cout<<endl;
    func(4); // exact match runs order
    cout<<endl;
    func(1212.121);
    return 0;
}