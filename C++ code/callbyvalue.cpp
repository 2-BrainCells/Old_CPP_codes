#include<iostream>
using namespace std;

void sum(int a, int b)
{
    int c = a+b;
    cout<<c;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


// call  by reference
void swapPointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using refrence variables
void swapRefrence(int &a, int &b)
{
    int temp;
    temp = a;
    a = b; 
    b = temp;
}

int main()
{
    int a =4, b =5;
    cout<<"The sum of 4+5 is = ";
    sum(4,5);
    cout<<endl;
    swapPointer(&a,&b);
    cout<<"The swapped values of a and b are = "<<a<<" "<<b<<endl;
    swapRefrence(a,b);
    cout<<"The swapped values of a and b are = "<<a<<" "<<b;
    return  0;
}