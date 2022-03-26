#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter()
    {
        counter = 0;
    }
    void getPrice();
    void setPrice();
    void displayPrice();

};
void shop :: setPrice()
{
    cout<<"Enter the product id = "<<endl; 
    cin>>itemId[counter];
    cout<<"Enter the price of the product = "<<endl; 
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of the item with Id "<< itemId[i] << " is "<< itemPrice[i];
        cout<<endl;
    }

}
int main()
{
    shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.displayPrice();

    return 0;
}