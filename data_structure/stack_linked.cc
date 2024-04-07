#include<bits/stdc++.h>
#include"stacklinked.h"

int main()
{
    int n, num;

    int item;
    cout<<"Enter 1 to start and 0 to stop: ";cin>>n;
    while(n != 0 && n == 1)
    {

        cout<<"Choose a option\n1. Push()\n2. Pop()\n3. Peek()\n4. stop\nType here: ";
        cin>>num;
        if(num == 1){
            cout<<"Enter a item: ";cin>>item;
            head = push(item);
            printstack();

        }
        else if(num == 2)
        {
            if(head == NULL) cout<<"Underflow"<<endl<<endl;
            else {head = pop();printstack();}

        }
        else if(num == 3)
        {
            if(head == NULL) cout<<"\nTop has no item"<<endl<<endl;
            else cout<<"\nTop item is "<<peek()<<endl<<endl;
        }
        else if(num == 4) break;



    }
    return 0;
}
