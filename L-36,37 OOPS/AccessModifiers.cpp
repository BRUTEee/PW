
#include <iostream>
#include <string>
using namespace std;

class Cricketer
{
private:
    int runs;
    string name;
    float average;

public:
    // Constructor
    Cricketer(string name, int runs, float average)
    {
        this->name = name;
        this->runs = runs;
        this->average = average;
    }

    // Display all details
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Average: " << average << endl;
    }

    // Getter: read private runs
    int getRuns()
    {
        return runs;
    }

    // Setter: update private runs
    void setRuns(int runs)
    {
        this->runs = runs;
    }
};

int main()
{
    // Dynamically create an object
    Cricketer *c = new Cricketer("ABD", 12000, 73.3);

    // Display the object's details
    c->print();

    cout << "\nRuns using getter: "
         << c->getRuns() << endl;

    // Update runs using setter
    c->setRuns(16000);

    cout << "\nAfter updating runs:" << endl;
    c->print();

    // Release dynamically allocated object
    delete c;
    c = nullptr;

    return 0;
}
