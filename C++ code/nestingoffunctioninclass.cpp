#include<iostream>
#include<string>
using namespace std;

class binary
{
private:
    string s;
public:
    void read();
    void chk_bin();
    void ones();
    void display();
};

void binary :: read()
{
    cout<<"Enter a binary number = ";
    cin>>s;
}

void binary :: chk_bin()
{
    for (int i = 0; i < s.length(); i ++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"This is not a binary"<<endl;
            break;
        }
        else
        cout<<"Binary Number"<<endl;
        exit(0);
    }

}
void binary :: ones()

{
    for(int i = 0; i < s.length(); i++ )
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }

}
void binary :: display()
{
    for (int i = 0; i < s.length(); i++) 
    {
        cout<<s.at(i);
    }

}
int main()
{ 
    binary b;
    b.read();
    b.display();
    cout<<endl;
    b.ones();
    b.display();
    return 0;
}