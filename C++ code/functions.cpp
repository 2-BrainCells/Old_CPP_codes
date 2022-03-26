#include<iostream>
using namespace std;

void sum(int , int  );

int main()
{
    int a,b;
    cout<<"Enter the first number = ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the second number = ";
    cin>>b;
    // actual parameters 
    cout<<endl;
    sum(a,b);
    return 0;

}

void sum(int a, int b ) // formal prarmeters
{
    int c = a+b;
    cout<<c;

}