#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *a = NULL;
    Node *b = NULL;
    Node *c = NULL;
    a = new Node();
    b = new Node();
    c = new Node();
    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;
    cout<<"Link list got created!"<<endl;
    while(a != NULL)
    {
        cout<<a->data<<" ";
        a = a->next;
    }
    return 0;
}
