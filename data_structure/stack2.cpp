#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> Stack;
    Stack.push(20);
    Stack.push(34);
    Stack.push(45);
    Stack.push(56);

    Stack.pop();
    Stack.pop();
    while(!Stack.empty())
    {
        cout<<Stack.top()<<" ";
        Stack.pop();
    }
}
