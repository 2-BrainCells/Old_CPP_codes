#include <iostream>
using namespace std;

class circularqueue
{
public:
    int front;
    int rear;
    int *arr;
    int size;
    circularqueue(int size)
    {
        front = -1;
        rear = -1;
        this->size = size;
        arr = new int[size];
    }
    void enqueue(int element)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queueu is full ";
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = element;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = element;
        }
        else
        {
            rear++;
            arr[rear] = element;
        }
    }
    int dequeue()
    {
        if (front == 1)
        {
            cout << "Queue is empty";
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else
        {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";

            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
    }
};
int main()
{
    circularqueue cq(5);
    cq.enqueue(10);
    cq.enqueue(15);
    cq.display();
    return 0;
}