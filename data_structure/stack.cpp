#include<bits/stdc++.h>
using namespace std;
#define C 3
int sk[C];
int top = -1;//index of the stack.

void push(int x){
    //cout<<"top: "<<top<<endl;
    if(top<C-1)// check if there is any empty spaces in stack.
    {
        top = top + 1;
        sk[top] = x;
        cout<<"Data Added: "<<x<<endl;
    }
    else
    {
        cout<<"Exception: No spaces!\n";
    }

}
int pop()
{
    if(top >= 0)
    {
        int val = sk[top];
        top = top - 1;
        return val;
    }
    cout<<"Exception from pop(), Empty stack!\n";
    return -1;
}
int peek(){
    if (top >= 0)
    {
        return sk[top];
    }
    cout<<"Exception from peek, empty  stack\n";
    return -1;
}

void print_stack()
{
    while(top != -1)
    {
        cout<<sk[top]<<" ";
        pop();
    }
}
int main()
{
    cout<<"Implementing stack in C++.\n";
    peek();
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    pop();
    cout<<"Top of the stack "<<peek()<<endl;
    print_stack();
    return 0;
}
