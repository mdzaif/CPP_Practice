//Node class for Node variable
//using namespace std;
class Node
{
  public:
    int key;
    Node* next;
};

//store the last node.
Node *last;
long long int c;
//create the node.
Node* newNode(int key)
{
    Node* node = new Node;
    node->key = key;

    node->next = nullptr;

    return node;
}

//connect a node with head pointer.
Node *prepend(Node *head, int data)
{
    Node *new_node = newNode(data);
    if(head == NULL)
    {
        head = new_node;
        last = new_node;
        c++;
        return head;
    }
    new_node->next = head;
    head = new_node;
    c++;
    return head;

}

//connect a node at the end.
Node *append(Node *head, int data)
{
    Node *new_node = newNode(data);
    if(head == NULL)
    {
        head = new_node;
        last = new_node;
        c++;
        return head;
    }
    last->next = new_node;
    last = new_node;
    c++;
    return head;

    /*if(head == NULL)
    {
        return new_node;
    }
    Node *current_node = head;
    while(current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    current_node->next = new_node;
    return head;*/
}

//print the singly linked list.
void printList(Node* head)
{
    Node* ptr = head;
    std::cout<<"Output of the list: ";
    while (ptr)
    {
        std::cout << ptr->key << " -> ";
        ptr = ptr->next;
    }

    std::cout <<"nullptr";
    std::cout<<std::endl<<std::endl;
}

//count the nodes for linked list.
/*int count(Node *head)
{
    Node *current_node = head;
    int c = 0;

    while(current_node != NULL)
    {
        c++;
        current_node = current_node->next;
    }

    return c;
}*/

//search a node from linked list.
Node *search(Node *head, int item)
{
    Node *current_node = head;

    while(current_node != NULL)
    {
        if(current_node->key == item)
        {
            return current_node;
        }
        current_node = current_node->next;

    }
    return NULL;
}

//remove a node from linked list.
Node *remove(Node *head, Node *node)
{
    if (node == head)
    {
        head = node->next;
        c--;
        delete node;
        return head;
    }

    else if(node == last)
    {
        Node* prv_last = head;
      while(prv_last->next->next != NULL)
      {
            prv_last = prv_last->next;
      }

      Node* last_node = prv_last->next;
      prv_last->next = nullptr;
      last = prv_last;
      c--;
      delete last_node;
      return head;
    }

    Node *current_node = head;
    while(current_node != NULL)
    {
        if(current_node == node)
        {
            break;
        }
        current_node = current_node->next;
    }
    if(current_node == NULL)
    {
        return head;
    }
    current_node = node->next;
    c--;
    delete node;
    return head;
}

//insert a node between two nodes of a linked list.
Node *insert(Node *node, int item)
{
    Node *new_node = newNode(item);
    new_node->next = node->next;
    node->next = new_node;
    c++;
    return new_node;
}
