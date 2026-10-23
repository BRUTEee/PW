#include <iostream>
using namespace std;
class Student // user defined data type
{
public:
    string name;
    int rollNo;
    float cgpa;

    // Constructor Overloading
    Student(string n, int r, float c) // Paramaterised Constructor
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }
    void print()
    {
        cout << name << " " << rollNo << " " << cgpa << endl;
    }
};

void change(Student& s)
{
    s.name = "Brute";
}

int main()
{
    Student x("Ayush", 86, 9.5);
    change(x);
    x.print();
}