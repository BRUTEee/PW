#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string color;
    bool isE20Compatible;

    void print()
    {
        cout << name << " " << color << " " << isE20Compatible << endl;
    }
};

int main()
{
    Car c1;
    c1.name = "Kia Sonet";
    c1.color = "Black";
    c1.isE20Compatible = true;

    Car c2 = {
        "Ferrari",
        "Red",
        false,
    };
    cout << c2.isE20Compatible << endl;

    c1.print();
    c2.print();
}