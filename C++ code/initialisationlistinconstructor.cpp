/*
Syntax
constructor( argumnet - list) : initialisation section
{
    code
}

clas test
{
    int a;
    int b;
    public:
    Test (int i , int j) : a(i) , b(j)
    {
    body
    }
}

*/

#include <iostream>
using namespace std;

class test 
{
    int a; int b;
    public:  
    // test(int i ,int j) : a(i), b(j + i)     //runs properly
    // {
    //     cout<<"Constructor is executed"<<endl<<a<<endl<<b;
    // }
    // test(int i ,int j) : a(i), b(a + j)    // runs properly
    // {
    //     cout<<"Constructor is executed"<<endl<<a<<endl<<b;
    // }
    test(int i ,int j) : a(i + b), b(j)     // doesnot run 
    {
        cout<<"Constructor is executed"<<endl<<a<<endl<<b;
    }
};
int main()
{
    test t(10, 12);
    return 0;
}