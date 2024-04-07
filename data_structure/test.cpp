#include<bits/stdc++.h>
#define C 3

using namespace std;

int st[C];
int top = -1;

bool isFull()
{
    if(top < C-1)
    {
        return false;
    }
    return true;
}

bool isEmpty()
{
    if(top != -1)
    {
        return false;
    }
    return true;
}

int push(int x)
{
    if(isFull())
    {
        return -1;
    }

    top++;
    st[top] = x;

    return x;
}

int pop()
{
    int item;
    if(isEmpty())
    {
        return -1;
    }

    item = st[top];
    top--;

    return item;

}

int peek()
{
    return st[top];
}

void print_stack()
{
    int n = top;
    cout<<"Output of the stack: "<<endl;
    while(n >= 0)
    {
        cout<<st[n]<<endl;
        n--;
    }
    cout<<endl;
}

int main()
{
    while(1)
    {
        int n;
        cout<<"Choose any option:\n1. Push()\n2. Pop()\n3. Peek()\n4. isFull()\n5. isEmpty()\n6. stop()\n"<<endl;
        cin>>n;
        if(n == 1)
        {
            int k;
            cout<<"push(): ";
            cin>>k;
            if(push(k) == -1)
            {
                cout<<"Overflow"<<endl;
            }
            print_stack();
        }
        else if(n == 2)
        {
            int q = pop();
            if(q == -1)
            {
                cout<<"Item reomve: Underflow"<<endl;
            }
            else{
                 cout<<"Item remove: "<<q<<endl;
            }

            if(isEmpty() == true){
                cout<<"Output of the stack:\nNo elements"<<endl<<endl;
            }
            else{
                print_stack();
            }
        }
        else if(n == 3)
        {
            cout<<"Top of the stack: "<<peek()<<endl<<endl;
            print_stack();
        }
        else if(n == 4)
        {
            if(isFull() == false)
            {
                cout<<"The stack is not full\n"<<endl;
            }
            else{
                cout<<"The stack is full\n"<<endl;
                print_stack();
            }
        }
        else if(n == 5)
        {
            if(isEmpty() == false)
            {
                cout<<"The stack is not empty\n"<<endl;
                print_stack();
            }
            else{
                cout<<"The stack is empty\n"<<endl;
            }
        }
        else if(n == 6)
        {
            break;
        }

    }
    return 0;
}
