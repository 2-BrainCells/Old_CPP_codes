#include <iostream>
using namespace std;

class doublyendedqueue
{
    int front;
    int rear;
    int *arr;
    int size;
    doublyendedqueue(int size)
    {
        front = -1;
        rear = -1;
        this->size = size;
        arr = new int[size];
    }
    void push_front(int element)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1;
        }
        else
            front--;
        arr[front] = element;
    }
    void push_rear(int element)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
            rear++;
        arr[front] = element;
    }
    void pop_rear()
    {
        if (front == 1)
        {
            cout << "Queue is empty";
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
    }
};
int main()
{
    return 0;
}