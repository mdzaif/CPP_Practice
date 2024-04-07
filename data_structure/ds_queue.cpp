#include<bits/stdc++.h>
using namespace std;

int front = 0;
int rear = -1;
int counter = 0;
int size_q;
int *Queue;

bool isFull()
{
   return (counter == size_q)? true : false;
}


bool isEmpty()
{
    return (counter == 0)? true : false;
}


int enqueue(int x)
{
    if(isFull() == true)
    {
        return -1;
    }

    rear = (rear + 1) % size_q;
    Queue[rear] = x;
    counter++;

    return x;
}


int dequeue()
{
    if(isEmpty() == true)
    {
        return -1;
    }

    int item = Queue[front];
    front = (front + 1) % size_q;
    counter--;

    return item;
}


int ft()
{
    return Queue[front];
}



int rr()
{
    return Queue[rear];
}

void display()
{
    int i, k = front;
    cout<<"Queue:";
    for(i = 0; i < counter; i++)
    {
        cout<<" "<<Queue[k];
        k = (k + 1) % size_q;
    }
    cout<<endl<<endl;
}

int main()
{
    cout<<"Enter the queue size: ";
    cin>>size_q;
    Queue = new int [size_q];
    while(1)
    {

        int num;
        cout<<"Choose a option: (size of queue "<<size_q<<")"<<endl;
        cout<<"1. Enqueue()\n2. Dequeue()\n3. peek()\n4. isFull()\n5. isEmpty()\n6. Exit\n";
        cout<<"Enter the option: ";
        cin>>num;

        if(num == 1)
        {
            int p;
            cout<<"Enter a item: ";
            cin>>p;

            if(enqueue(p) == -1) {
                cout<<"Overflow"<<endl<<endl;
                display();
            }

            else {
                cout<<"Item: "<<p<<endl<<endl;
                display();
            }
        }

        else if(num == 2)
        {
            int e = dequeue();

            if(e == -1)
            {
                 cout<<"Underflow"<<endl<<endl;
            }

            else {
                cout<<"Delete item: "<<e<<endl<<endl;
                display();
            }
        }

        else if(num == 3)
        {
            cout<<"Choose a option:"<<endl;
            cout<<"1. Front\n2. Rear\nEnter your option: "<<endl;
            cin>>num;

            if(num == 1)
            {
                if(counter == 0)
                {
                    cout<<"No values"<<endl<<endl;
                }

                else {
                    cout<<"Front: "<<ft()<<endl<<endl;
                    display();
                }
            }

            else if(num == 2)
            {
                if(counter == 0) {
                    cout<<"No values"<<endl<<endl;
                }

                else {
                    cout<<"Rear: "<<rr()<<endl<<endl;
                    display();
                }
            }
        }

        else if(num == 4)
        {
            if(isFull() == true) {
                cout<<"The queue is full"<<endl<<endl;
            }

            else cout<<"The queue is not full"<<endl<<endl;
        }

        else if(num == 5)
        {
            if(isEmpty() == true) cout<<"The queue is empty"<<endl<<endl;

            else {
                cout<<"The queue is not empty"<<endl<<endl;
            }
        }


        else if(num == 6)
        {
            delete [] Queue;
            break;
        }

    }
}
