
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
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}


// Recursive traversal
void printRec(Node *head)
{
    // Base case: Stop when no node exists
    if (head == nullptr)
        return;

    // Print the current node
    cout << head->val << " ";

    // Recursively process the next node
    printRec(head->next);
}


// Recursive traversal : Print in reverse order 
void printReverse(Node *head)
{
    // Base case
    if (head == nullptr)
        return;

    // First reach the end of the list
    printReverse(head->next);

    // Print while recursive calls return
    cout << head->val << " ";
}


int main()
{
    // Step 1: Create nodes dynamically
    Node *a = new Node(7);
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

    // Step 3: Print using iteration
    cout << "Iterative: ";
    print(a);

    // Step 4: Print using recursion
    cout << "Recursive: ";
    printRec(a);
    cout << endl;

    // Step 5: Access individual node values
    cout << "\nIndividual node values:" << endl;
    cout << a->val << endl;
    cout << b->val << endl;
    cout << c->val << endl;
    cout << d->val << endl;
    cout << e->val << endl;

    // Step 6: Access values through next pointers
    cout << "\nAccessing nodes through pointers:" << endl;
    cout << a->next << endl; // Address of b
    cout << b << endl;       // Address of b

    cout << a->next->val << endl;
    cout << a->next->next->val << endl;
    cout << a->next->next->next->val << endl;
    cout << a->next->next->next->next->val << endl;

    // Step 7: Release allocated memory
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;

    return 0;
}