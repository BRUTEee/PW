
#include <iostream>
using namespace std;

// Node: Represents one element of the linked list
class Node
{
public:
    int val;    // Stores the data
    Node *next; // Points to the next node

    // Constructor
    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};

// MyLL: Manages the entire linked list
class MyLL
{
private:
    Node *head; // Points to the first node
    Node *tail; // Points to the last node
    int length; // Number of nodes

public:
    // Constructor: Create an empty linked list
    MyLL()
    {
        head = tail = nullptr;
        length = 0;
    }

    // Return the current number of nodes
    int size() const
    {
        return length;
    }

    // Display all elements
    void display() const
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Insert a node at the end
    void insertAtTail(int val)
    {
        Node *n = new Node(val);

        if (length == 0)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }

        length++;
    }

    // Insert a node at the beginning
    void insertAtHead(int val)
    {
        Node *n = new Node(val);

        if (length == 0)
        {
            head = tail = n;
        }
        else
        {
            n->next = head;
            head = n;
        }

        length++;
    }

    // Remove the first node
    void removeAtHead()
    {
        if (length == 0)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;

        delete temp;
        length--;

        if (length == 0)
        {
            tail = nullptr;
        }
    }

    // Insert a node at a given index
    void insert(int idx, int val)
    {
        // Valid insertion indices: 0 through length
        if (idx < 0 || idx > length)
        {
            cout << "Invalid Index!" << endl;
            return;
        }

        // Insert at the beginning
        if (idx == 0)
        {
            insertAtHead(val);
            return;
        }

        // Insert at the end
        if (idx == length)
        {
            insertAtTail(val);
            return;
        }

        // Find the node immediately before the index
        Node *temp = head;

        for (int i = 1; i < idx; i++)
        {
            temp = temp->next;
        }

        // Create and connect the new node
        Node *n = new Node(val);
        n->next = temp->next;
        temp->next = n;

        length++;
    }

    // Remove a node at a given index
    void remove(int idx)
    {
        // Valid removal indices: 0 through length - 1
        if (idx < 0 || idx >= length)
        {
            cout << "Invalid Index!" << endl;
            return;
        }

        // Remove the first node
        if (idx == 0)
        {
            removeAtHead();
            return;
        }

        // Find the node immediately before the target
        Node *temp = head;

        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }

        // Identify the node to delete
        Node *toBeDeleted = temp->next;

        // Bypass the target node
        temp->next = toBeDeleted->next;

        // Update tail if the last node was removed
        if (toBeDeleted == tail)
        {
            tail = temp;
        }

        delete toBeDeleted;
        length--;
    }

    // Return the value at a given index
    int get(int idx) const
    {
        if (idx < 0 || idx >= length)
        {
            cout << "Invalid Index!" << endl;
            return -1;
        }

        Node *temp = head;

        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }

        return temp->val;
    }

    // Destructor: Release all remaining nodes
    ~MyLL()
    {
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }

        tail = nullptr;
        length = 0;
    }

    // Prevent unsafe shallow copying
    MyLL(const MyLL &) = delete;
    MyLL &operator=(const MyLL &) = delete;
};

int main()
{
    MyLL list;

    // Insert at the tail
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);

    cout << "Initial List: ";
    list.display();

    // Insert 15 at index 1
    list.insert(1, 15);

    cout << "After insert(1, 15): ";
    list.display();

    // Get the element at index 2
    cout << "Element at index 2: "
         << list.get(2) << endl;

    // Remove the element at index 1
    list.remove(1);

    cout << "After remove(1): ";
    list.display();

    cout << "Size: " << list.size() << endl;

    return 0;
}
