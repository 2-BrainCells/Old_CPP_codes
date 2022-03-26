#include<iostream>
using namespace std;

class complex
{
    int a , b;
    public:
    void setNubner(int n1, int n2)
    {
        a = n1;
        b = n2;

    }
    void printNumber()
    {
        cout<<"The number is =  "<<a<<" +"<< b<<"i"<<endl;
    }
    friend complex sumComplex(complex o1, complex o2);
};

 complex sumComplex(complex o1, complex o2)
{
    complex o3; 
    o3.setNubner((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, c3;
    c1.setNubner(1, 4);
    c2.setNubner(5, 8);
    c1.printNumber();
    c2.printNumber();
    c3 = sumComplex(c1, c2); 
    c3.printNumber();
    return 0;
}