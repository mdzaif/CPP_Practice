using namespace std;

class Node
{
    public:
        int key;
        Node* next;
};

Node* newNode(int key)
{
    Node* node = new Node;
    node->key = key;
    node->next = nullptr;
    return node;
}
Node* head = NULL;

Node* push(int data)
{
    Node* new_node = newNode(data);
    if(head == NULL)
    {
        head = new_node;
        return head;
    }
    new_node->next = head;
    head = new_node;
    return head;
}

Node* pop()
{
    Node* pop_node = head;
    int item;
    if(pop_node->next == NULL)
    {
        item = pop_node->key;
        head = NULL;
        cout<<"Item removed: "<<item<<endl;
        delete pop_node;
        return head;
    }
    item = pop_node->key;
    head = pop_node->next;
    delete pop_node;
    cout<<"Remove Item: "<<item<<endl;
    return head;
}

int peek()
{
    return head->key;
}

void printstack()
{
    Node* ptr = head;
    std::cout<<"Output of the stack:\n";
    while (ptr)
    {
        std::cout << ptr->key<<endl;
        ptr = ptr->next;
    }

    std::cout<<std::endl<<std::endl;
}
