#include<bits/stdc++.h>
#include"queuelinked.h"
using namespace std;

int main()
{

    front = enqueue(10);
    front = enqueue(11);
    front = enqueue(12);
    front = enqueue(13);
    cout<<"After the enqueue: ";
    printqueue(front);
    front = dequeue();
    front = dequeue();
    front = dequeue();
    front = dequeue();
    cout<<"After the dequeue: ";
    printqueue(front);
    cout<<"front item: "<<peek()<<endl;
    return 0;
}
