#include <iostream>
#include"linkedlist.h"
using namespace std;

//main function.
int main()
{
    Node *head = NULL;
    int item;

    /* Node *first, *head;
    int n, item;
    cout<<"Create a first node: ";
    cin>>n;
    frist = newNode(n);
    head = frist;
    printList(head);
    last = frist;*/

    while(1)
    {
        cout<<"Menu\n\
1. prepend(): Insert a node beginning in the list.\n\
2. append(): Insert a node at end in the list.\n\
3. length(): Length of list.\n\
4. search(): Find a node from list.\n\
5. insert(): Insert new node between two nodes.\n\
6. remove(): Remove a node.\n\
7. stop: stop the program.\n\n";

        int num;
        cout<<"Enter the option: ";
        cin>>num;
        if(num == 1)
        {
            cout<<"Enter the item: ";
            cin>>item;
            head = prepend(head, item);
            printList(head);
        }
        else if(num == 2)
        {
            cout<<"Enter the item: ";
            cin>>item;
            head = append(head, item);
            printList(head);
        }
        else if(num == 3)
        {
            cout<<"\nThe length of the list: "<<c<<endl<<endl;

            printList(head);
        }
        else if(num == 4)
        {
            cout<<"Enter a item: ";
            cin>>item;
            if(search(head, item) != NULL)
            {
                cout<<"\nSearch Result: Found"<<endl;
            }
            else{
                cout<<"\nSearch Result: Not Found"<<endl<<endl;
            }
            printList(head);
        }
        else if(num == 5)
        {
            int prv;
            cout<<"Enter a previous node item: ";
            cin>>prv;
            cout<<"Enter a item for insert: ";
            cin>>item;
            Node *node = search(head, prv);
            if(node != NULL && node->next != NULL)
            {
                insert(node, item);
                printList(head);
            }
            else{
                cout<<"Insertion failed"<<endl;
                printList(head);
            }
        }
        else if(num == 6)
        {
            cout<<"Enter the item of node: ";
            cin>>item;
            Node *n2 = search(head, item);
            if(n2 != NULL)
            {
                head = remove(head, n2);
                printList(head);
            }
            else{
                cout<<"Node not found! failed to remove."<<endl;
            }

        }
        else if(num == 7)
        {
            break;
        }
    }
    return 0;
}
