#include<iostream>
using namespace std;

int add(int a , int b , int c)
{
    return a+b+c;
}


int add(int a , int b )
{
    return a+b;
}  

float volume(double r, int h)
{
    return (3.14* r* r* h );
}


int volume(int a )
{
    return (a* a* a);
}

int volume(int l , int h , int b)
{
    return( l * b * h );
}
int main()
{
    int a = 12, b = 12, c = 13;
    cout<<"The sum of a +  c = "<<add(a, b)<<endl;
    cout<<"The sum of a + b + c = "<<add(a,b,c)<<endl;
    cout<<"The volume of cuboid is  = "<< volume( 3, 7, 6)<<endl;
    cout<<"The volume of cylinder is =  "<<volume(3, 6)<<endl;
    cout<<"The volume of cube is = "<<volume(3)<<endl;
    return 0;
    
}