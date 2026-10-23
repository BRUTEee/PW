
#include <iostream>
using namespace std;

// Node: A user-defined data type for one linked-list element
class Node
{
public:
    int val;    // Stores the data
    Node *next; // Stores the address of the next node

    // Constructor: Initialise a node
    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};

int main()
{
    // Step 1: Create five nodes
    Node a(7);
    Node b(0);
    Node c(1);
    Node d(8);
    Node e(2);

    // Step 2: Connect the nodes using their next pointers
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = nullptr;

    // Step 3: Store the address of the first node
    Node *head = &a;

    // Step 4: Traverse the linked list
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}
