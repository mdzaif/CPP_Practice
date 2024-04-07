#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

//create a node function for linked list.
Node *create_node(int item, Node *next)
{
    Node *new_node = (Node *) malloc(sizeof(Node));// set the memory or allocate the memory for the new node.
    if(new_node == NULL)// if new node is NULL then then it can not able to point others so node can not be created.
    {
        cout<<"Error! Could Not Create A New Node"<<endl;
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;

    return new_node;
}

//insert a node at beginning in the linked list.
Node *prepend(Node *head, int item)
{
    Node *new_node = create_node(item, head);

    return new_node;
}

//insert a node at last in the linked list.
Node *append(Node *head, int item)
{
    Node *new_node = create_node(item, NULL);

    if(head == NULL)
    {
        return new_node;
    }

    Node *current_node = head;

    while(current_node->next != NULL)
    {
        current_node = current_node->next;
    }

    current_node->next = new_node;

    return head;
}

// count the node of a linked list.
int count_node(Node *head)
{
    Node *current_node = head;
    int c = 0;
    while(current_node != NULL)
    {
        c++;
        current_node = current_node->next;
    }

    return c;
}

// search a node in linked list.
Node *search_node(Node *head, int item)
{
    Node *current_node = head;

    while(current_node != NULL)
    {
        if(current_node->data == item)
        {
            return current_node;
        }
        current_node = current_node->next;
    }

    return NULL;
}

//remove a node from the linked list.
Node *remove_node(Node *head, Node *node)
{
    if(node == head)
    {
        head = node->next;

        free(node);
        return head;
    }

    Node *current_node = head;

    while(current_node != NULL)
    {
        if(current_node->next == node)
        {
            break;
        }
        current_node = current_node->next;
    }

    if(current_node == NULL)
    {
        return head;
    }

    current_node->next = node->next;

    free(node);
    return head;
}

//insert between two node.
void insert_node(Node *node, int item)
{
    Node *new_node = create_node(item, node->next);

    node->next = new_node;
}

//print the linked list.
void print_linked_list(Node *head)
{
    Node *current_node = head;
    while(current_node != NULL)
    {
        cout<<current_node->data<<" ";
        current_node = current_node->next;
    }
    cout<<endl;
}


//main code.
int main()
{
    Node *n1, *n2, *head, *item;
    int ct;
    n1 = create_node(10, NULL);// create a node
    head = n1;//assign it in head pointer.
    print_linked_list(head);// print the linked list.

    head = append(head, 20);
    head = append(head, 30);
    head = prepend(head, 0);//assign a node beginning in the linked list.
    insert_node(search_node(head, 30), 40);
    print_linked_list(head);//print the linked list.
    head = append(head, 50);//assign a node at last in the linked list.
    print_linked_list(head);//print the linked list.

    ct = count_node(head);
    cout<<"Total node is "<<ct<<endl;
    item = search_node(head, 40);
    if(item != NULL)
    {
        cout<<"Data is found"<<endl;
    }
    else{
        cout<<"Data is not found"<<endl;
    }

    /*n2 = search_node(head, 50);
    head = remove_node(head, n2);
    print_linked_list(head);*/

    head = prepend(head, -1);
    print_linked_list(head);

    return 0;
}
