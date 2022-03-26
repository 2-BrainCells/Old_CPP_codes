#include<iostream>
using namespace std;
int main()
{
    // holds the address of other data types

    int a = 3;
    int*b = &a; // holds address of a 
    // * ----> derefrencing operator
    // & ----> Address operator
    cout<<b<<endl; 
    cout<<&a<<endl;

    cout<<*b;  // value of a

    return 0;
}