#include <iostream>
using namespace std;
class parcel
{
    int weight;

protected:
    int shipcost;

public:
    parcel()
    {
        weight = 0;
        shipcost = 0;
    }
    parcel(int weight, int shipcost)
    {
        this->weight = weight;
        this->shipcost = shipcost;
    }
    virtual void call_shipping()
    {
        shipcost = weight * 10;
    }
};
class box : public parcel
{
    int h, w, d;

public:
    box()
    {
        this->h = 0;
        this->w = 0;
        this->d = 0;
    }
    box(int h, int w, int d)
    {
        this->h = h;
        this->w = w;
        this->d = d;
    }
    void call_shipping()
    {
        if ((h * w * d) > 3)
            this->shipcost = this->shipcost + 30;
    }
    void shippingCost()
    {
        cout << this->shipcost;
    }
};
int main()
{
    parcel *p = new parcel(1, 5);
    box b(1, 3, 3);
    p = &b;
    p->call_shipping();
    b.shippingCost();
    return 0;
}