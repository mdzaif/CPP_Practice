using namespace std;

class Node{
    public:
        int key;
        Node* next;
};


Node* newNode(int key)
{
    Node* new_node = new Node;
    new_node->key = key;
    new_node->next = nullptr;
    return new_node;
}

Node* front = NULL;// front of the queue
Node* rear;// rear of the queue

Node* enqueue(int item)
{
    Node* new_node = newNode(item);
    if(front == NULL)
    {
        front = new_node;
        rear = new_node;
        return front;
    }
    rear->next = new_node;
    rear = new_node;
    return front;
}
Node* dequeue()
{
    Node* pop_node = front;
    int item;
    if(pop_node->next == NULL)
    {
        item = pop_node->key;
        front = NULL;
        cout<<"Item removed: "<<item<<endl;
        delete pop_node;
        return front;
    }
    item = pop_node->key;
    front = pop_node->next;
    delete pop_node;
    cout<<"Remove Item: "<<item<<endl;
    return front;
}
int peek()
{
    if(front == NULL) return 0;
    else return front->key;
}
void printqueue(Node* front)
{
    Node* current_node = front;
    while(current_node)
    {
        cout<<current_node->key<<" ";
        current_node = current_node->next;
    }
    cout<<endl<<endl;
}
