
#include <iostream>
using namespace std;

// Node: A user-defined data type
class Node
{
public:
    int val;    // Stores the node's value
    Node *next; // Points to the next node

    // Constructor
    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};

// Print the entire linked list only with head
void print(Node *head)
{
    Node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void PrintRec(Node* head)
{
    Node* temp = head;
}

int main()
{
    // Step 1: Dynamically create nodes
    Node *a = new Node(7); // Head node
    Node *b = new Node(0);
    Node *c = new Node(1);
    Node *d = new Node(8);
    Node *e = new Node(2);

    // Step 2: Connect the nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = nullptr;

    // Step 3: Print the linked list
    cout << "Linked List: ";
    print(a);

    // Step 4: Access individual node values
    cout << "\nIndividual node values:" << endl;
    cout << a->val << endl;
    cout << b->val << endl;
    cout << c->val << endl;
    cout << d->val << endl;
    cout << e->val << endl;

    // Step 5: Access values through next pointers
    cout << "\nAccessing nodes through pointers:" << endl;
    cout << a->next << endl;                  // Address of b
    cout << b << endl;                        // Address of b
    cout << a->next->val << endl;             // Value of b
    cout << a->next->next->val << endl;       // Value of c
    cout << a->next->next->next->val << endl; // Value of d
    cout << a->next->next->next->next->val
         << endl; // Value of e

    // Step 6: Free dynamically allocated memory
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;

    return 0;
}
