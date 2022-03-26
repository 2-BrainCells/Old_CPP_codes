#include <iostream>
using namespace std;

class bank
{
    int principal ;
    int years;
    float interestrate;
    float returnValue;
public:
bank()
{}
bank (int p , int y , float r);
bank (int p, int y, int r);  
void show();

};

bank :: bank (int p , int y , float r)
{
    principal = p;
    years = y;
    interestrate = r;
    for (int  i = 0 ; i < y; i++) 
    {
        returnValue = returnValue * ( 1 + r );
    }
}

bank :: bank (int p , int y , int r)
{
    principal = p;
    years = y;
    interestrate = float(r)/100;
    for (int  i = 0 ; i < y; i++) 
    {
        returnValue = returnValue * ( 1 + r );
    }
}
void bank :: show()
{
    cout<<principal<<endl;
    cout<<years<<endl;
    cout<<returnValue<<endl;
}
int main()
{
    bank b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout<<"Enter the value of p , y and r"<<endl;
    cin>>p>>y>>r;
    b1 = bank(p, y, r);
    b1.show();
    cout<<"Enter the value of p , y and R"<<endl;
    cin>>p>>y>>r;
    b2 = bank(p, y, R);
    b2.show();
    
    return 0;
}