#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int run;
    float average;

    Cricketer(string name, int run, float average)
    {
        this->name = name;
        this->run = run;
        this->average = average;
    }
    void print()
    {
        cout << name << endl;
        cout << run << endl;
        cout << average << endl;
    }
};

int main()
{
    Cricketer c1("Virat Kolhi", 15109, 71.8);
    Cricketer c2("Mahendra Singh Dhoni", 10773, 62.0);
    Cricketer c3("Rahul Dravid", 10899, 39.1);

    Cricketer *p = new Cricketer("ABD", 10000, 55.4); // OBJ PTR
    p->print();
    Cricketer *ptr = &c1; // OBJ PTR
    cout << ptr->name << endl;
    cout << ptr->run << endl;
    cout << ptr->average << endl;
    // (*ptr).average = 74.1; // its inconvenient to write *ptr
    ptr->average = 74.1;
    cout << (*ptr).average << endl;
    cout << c1.average << endl;
};

// int x = 10;
// int* ptr = &x;
// *ptr = 20;
// cout << x << endl;