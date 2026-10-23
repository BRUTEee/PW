
#include <iostream>
#include <stdexcept>
using namespace std;

class MyVector
{
private:
    int length; // Number of elements currently in use
    int cap;    // Total allocated capacity
    int *arr;   // Pointer to the dynamic array

public:
    // Constructor: Initialise the vector
    MyVector(int capacity, int default_value)
    {
        if (capacity < 0)
        {
            throw invalid_argument("Capacity cannot be negative");
        }

        length = capacity;
        cap = capacity;
        arr = new int[cap];

        for (int i = 0; i < length; i++)
        {
            arr[i] = default_value;
        }
    }

    // Return the current size
    int size() const
    {
        return length;
    }

    // Return the current capacity
    int capacity() const
    {
        return cap;
    }

    // Add an element at the end
    void pushback(int val)
    {
        // Resize if the array is full
        if (length == cap)
        {
            int newCap = (cap == 0) ? 1 : cap * 2;
            int *temp = new int[newCap];

            // Copy existing elements
            for (int i = 0; i < length; i++)
            {
                temp[i] = arr[i];
            }

            // Release old memory
            delete[] arr;

            // Point to the new array
            arr = temp;
            cap = newCap;
        }

        // Insert the new element
        arr[length] = val;
        length++;
    }

    // Remove the last element logically
    void popback()
    {
        if (length == 0)
        {
            cout << "Vector is empty!" << endl;
            return;
        }

        length--;
    }

    // Return the element at the given index
    int get(int idx) const
    {
        if (idx < 0 || idx >= length)
        {
            throw out_of_range("Invalid vector index");
        }

        return arr[idx];
    }

    // Update the element at the given index
    void set(int idx, int val)
    {
        if (idx < 0 || idx >= length)
        {
            throw out_of_range("Invalid vector index");
        }

        arr[idx] = val;
    }

    // Display all active elements
    void display() const
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Destructor: Release dynamically allocated memory
    ~MyVector()
    {
        delete[] arr;
    }

    // Disable copying to prevent unsafe pointer sharing
    MyVector(const MyVector &) = delete;
    MyVector &operator=(const MyVector &) = delete;
};

int main()
{
    // Create a vector with 5 elements, each initialised to -1
    MyVector v(5, -1);

    cout << "Initial size: " << v.size() << endl;
    cout << "Initial capacity: " << v.capacity() << endl;
    cout << "Elements: ";
    v.display();

    // Remove the last element
    v.popback();

    cout << "\nAfter popback():" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Elements: ";
    v.display();

    // Add an element at the end
    v.pushback(10);

    cout << "\nAfter pushback(10):" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Elements: ";
    v.display();

    // Access an element
    cout << "\nElement at index 2: " << v.get(2) << endl;

    // Update an element
    v.set(2, 120);

    cout << "\nAfter set(2, 120):" << endl;
    cout << "Elements: ";
    v.display();

    return 0;
}
