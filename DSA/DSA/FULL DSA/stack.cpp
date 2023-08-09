#include <iostream>
using namespace std;

class stack
{
public:
    int top;
    int *arr;
    int size;
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (top == size)
        {
            cout << "Stack Overflow" << endl;
        }
        top++;
        arr[top] = element;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
        }
        int val = arr[top];
        top--;
        cout << "Value popped " << val << endl;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return false;
        }
        return true;
    }
};

int main()
{
    stack s(5);
    s.push(2);
    s.push(34);
    s.push(45);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}