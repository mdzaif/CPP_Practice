#include<bits/stdc++.h>
#define SIZE 1000

using namespace std;

class Queue
{
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    Queue(int size = SIZE);
    ~Queue();

    int dequeue();
    void enqueue(int item);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};

Queue::Queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

Queue::~Queue()
{
    delete [] arr;
}

int Queue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Underflow"<<endl;
        return -1;
    }
    int x = arr[front];
    front = (front + 1) % capacity;
    count--;

    return x;
}

void Queue::enqueue(int item)
{
    if(isFull())
    {
        cout<<"Overflow"<<endl;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    cout<<"Inserting "<<item<<endl;
    count++;
}

int Queue::peek()
{
    if(isEmpty())
    {
        cout<<"Underflow"<<endl;
    }
    return arr[front];
}

int Queue::size()
{
    return count;
}

bool Queue::isEmpty()
{
    return (size() == 0);
}

bool Queue::isFull()
{
    return (size() == capacity);
}

int main()
{
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
}
