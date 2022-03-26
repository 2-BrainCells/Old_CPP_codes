#include<iostream>
using namespace std;
inline void product(int a , int b)  // inline only use for small function
{ 
    static int d=0; // only runs once
    d = d + 1;      // the value is stored after initilisation
    int c = a * b + d;
    cout<<c;

}
float money(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;


}
int main()
{
    // int a, b;
    // cout<<"Enter the value of a and b = ";
    // cin>>a>>b;
    // product(a,b);
    // cout<<endl;
    // product(a,b);
    // cout<<endl;
    // product(a,b);
    // cout<<endl;
    // product(a,b);
    // cout<<endl;
    // product(a,b);
    // cout<<endl;
    int moneyhave = 100000;
    cout<<"If you have "<< moneyhave <<" in the bank amount , you will recievce in 1 year = "<<money(moneyhave);
    cout<<"If you have "<<moneyhave<<" and you are a VIP then you will get "<<money(moneyhave, 1.6);
    

    return 0;
}