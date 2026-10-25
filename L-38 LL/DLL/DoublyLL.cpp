#include <iostream>
using namespace std;

class DoublyLinkedList
{
private:
    // Each node stores data and pointers in both directions.
    class Node
    {
    public:
        int val;
        Node *next;
        Node *prev;

        // Initialize a node with a value and null pointers.
        Node(int val)
        {
            this->val = val;
            next = nullptr;
            prev = nullptr;
        }
    };

    Node *head; // Points to the first node.
    Node *tail; // Points to the last node.
    int length; // Tracks the number of nodes.

public:
    // Constructor: initialize an empty doubly linked list.
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }

    // Destructor: automatically release all allocated nodes.
    ~DoublyLinkedList()
    {
        clear();
    }

    // Disable copying to prevent accidental shallow copies
    // and double deletion of dynamically allocated nodes.
    DoublyLinkedList(const DoublyLinkedList &) = delete;
    DoublyLinkedList &operator=(const DoublyLinkedList &) = delete;

    // ---------------------------------------------------------
    // INSERTION OPERATIONS
    // ---------------------------------------------------------

    // Insert a new node at the beginning of the list.
    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);

        // If the list is empty, the new node is both head and tail.
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        length++;
    }

    // Insert a new node at the end of the list.
    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);

        // If the list is empty, the new node is both head and tail.
        if (tail == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        length++;
    }

    // Insert a node at a zero-based position.
    // Valid positions: 0 to length, inclusive.
    // Returns false if the position is invalid.
    bool insertAtPosition(int position, int val)
    {
        if (position < 0 || position > length)
        {
            return false;
        }

        if (position == 0)
        {
            insertAtHead(val);
            return true;
        }

        if (position == length)
        {
            insertAtTail(val);
            return true;
        }

        // Find the node currently at the requested position.
        Node *current = head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }

        Node *newNode = new Node(val);
        Node *previous = current->prev;

        // Connect the new node between previous and current.
        newNode->prev = previous;
        newNode->next = current;

        previous->next = newNode;
        current->prev = newNode;

        length++;
        return true;
    }

    // ---------------------------------------------------------
    // DELETION OPERATIONS
    // ---------------------------------------------------------

    // Remove the first node.
    // Returns false if the list is empty.
    bool removeAtHead()
    {
        if (head == nullptr)
        {
            return false;
        }

        Node *temp = head;

        // If there is only one node, the list becomes empty.
        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            head->prev = nullptr;
        }

        delete temp;
        length--;

        return true;
    }

    // Remove the last node.
    // Returns false if the list is empty.
    bool removeAtTail()
    {
        if (tail == nullptr)
        {
            return false;
        }

        Node *temp = tail;

        // If there is only one node, the list becomes empty.
        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            tail->next = nullptr;
        }

        delete temp;
        length--;

        return true;
    }

    // Remove the node at a zero-based position.
    // Returns false if the position is invalid.
    bool removeAtPosition(int position)
    {
        if (position < 0 || position >= length)
        {
            return false;
        }

        if (position == 0)
        {
            return removeAtHead();
        }

        if (position == length - 1)
        {
            return removeAtTail();
        }

        // Locate the node to remove.
        Node *current = head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }

        // Connect its previous and next nodes.
        current->prev->next = current->next;
        current->next->prev = current->prev;

        delete current;
        length--;

        return true;
    }

    // ---------------------------------------------------------
    // DISPLAY OPERATIONS
    // ---------------------------------------------------------

    // Display the list from head to tail.
    void display() const
    {
        Node *temp = head;

        cout << "Forward: ";

        while (temp != nullptr)
        {
            cout << temp->val;

            if (temp->next != nullptr)
            {
                cout << " <-> ";
            }

            temp = temp->next;
        }

        cout << " <-> NULL" << endl;
    }

    // Display the list from tail to head.
    void displayReverse() const
    {
        Node *temp = tail;

        cout << "Backward: ";

        while (temp != nullptr)
        {
            cout << temp->val;

            if (temp->prev != nullptr)
            {
                cout << " <-> ";
            }

            temp = temp->prev;
        }

        cout << " <-> NULL" << endl;
    }

    // ---------------------------------------------------------
    // SEARCH AND SIZE OPERATIONS
    // ---------------------------------------------------------

    // Return true if the given value exists in the list.
    bool search(int target) const
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            if (temp->val == target)
            {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }

    // Return the current number of nodes.
    int size() const
    {
        return length;
    }

    // Check whether the list is empty.
    bool isEmpty() const
    {
        return head == nullptr;
    }

    // ---------------------------------------------------------
    // MEMORY MANAGEMENT
    // ---------------------------------------------------------

    // Delete every node and reset the list.
    void clear()
    {
        Node *current = head;

        while (current != nullptr)
        {
            Node *nextNode = current->next;
            delete current;
            current = nextNode;
        }

        head = nullptr;
        tail = nullptr;
        length = 0;
    }
};

// -------------------------------------------------------------
// MAIN FUNCTION: DEMONSTRATE ALL OPERATIONS
// -------------------------------------------------------------

int main()
{
    DoublyLinkedList list;

    // 1. Insert nodes at the tail.
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);

    cout << "Initial List" << endl;
    list.display();
    list.displayReverse();

    cout << "\nSize: " << list.size() << endl;

    // 2. Insert a node at the head.
    list.insertAtHead(5);

    cout << "\nAfter insertAtHead(5)" << endl;
    list.display();

    // 3. Insert a node at position 2.
    // Positions are zero-based.
    list.insertAtPosition(2, 15);

    cout << "\nAfter insertAtPosition(2, 15)" << endl;
    list.display();

    // 4. Remove the head node.
    list.removeAtHead();

    cout << "\nAfter removeAtHead()" << endl;
    list.display();

    // 5. Remove the tail node.
    list.removeAtTail();

    cout << "\nAfter removeAtTail()" << endl;
    list.display();

    // 6. Remove the node at position 1.
    list.removeAtPosition(1);

    cout << "\nAfter removeAtPosition(1)" << endl;
    list.display();

    // 7. Search for a value.
    int target = 30;

    cout << "\nSearching for " << target << ": ";

    if (list.search(target))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // 8. Display the final size and traversal.
    cout << "\nFinal List" << endl;
    list.display();
    list.displayReverse();

    cout << "Final Size: " << list.size() << endl;

    // Nodes are automatically released when 'list' goes out of scope.
    return 0;
}