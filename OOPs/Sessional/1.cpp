#include <iostream>
using namespace std;
class Parcel
{
    int weight;

protected:
    int shipping_cost;

public:
    Parcel()
    {
        this->weight = 0;
        this->shipping_cost = 0;
    }
    Parcel(int weight, int shipping_cost)
    {
        this->weight = weight;
        this->shipping_cost = shipping_cost;
    }
    void Call_shipping()
    {
        shipping_cost = shipping_cost + (weight * 10);
        cout << shipping_cost << endl;
    }
    void total_cost()
    {
        cout << "The shipping cost is = " << shipping_cost << endl;
    }
};
class Box : public Parcel
{
    int height, width, depth;

public:
    Box()
    {
        height = 0;
        width = 0;
        depth = 0;
    }
    Box(int height, int width, int depth)
    {
        this->height = height;
        this->width = width;
        this->depth = depth;
    }
    void Call_shipping()
    {
        if ((height * width * depth) > 30)
        {
            shipping_cost = shipping_cost + 30;
            cout << shipping_cost << endl;
        }
    }
    void total_cost()
    {
        cout << "The shipping cost is = " << shipping_cost << endl;
    }
};
int main()
{
    Parcel p(12, 30);
    Box b(1, 2, 3);
    return 0;
}