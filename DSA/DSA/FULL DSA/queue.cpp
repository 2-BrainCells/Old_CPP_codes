#include <iostream>
using namespace std;

class queue
{
public:
    int rear;
    int front;
    int *arr;
    int size;
    queue(int size)
    {
        rear = 0;
        front = 0;
        this->size = size;
        arr = new int(size);
    }
    void enqueue(int element)
    {
        if (rear == size)
        {
            cout << "Queue is full";
            return;
        }
        arr[rear] = element;
        rear++;
    }
    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty";
            return;
        }
        arr[front] = -1;
        front++;
        if (front == rear)
        {
            front = 0;
            rear = 0;
        }
    }
    void display()
    {
        while (front != rear)
        {
            cout << arr[front] << " ";
            front++;
        }
    }
};
int main()
{
    queue q(4);
    q.enqueue(10);
    q.enqueue(13);
    q.dequeue();
    q.display();
    return 0;
}