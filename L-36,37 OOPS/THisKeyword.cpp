#include <iostream>
using namespace std;
class Pokemon
{
    public:
    string name;
    string type;
    int hp;
    Pokemon(string n, string t, int h)
    {
        name = n;
        type = t;
        hp = h;
    }

    void print()
    {
        cout << name << " " << type << " " << hp << endl;
    }
};

int main()
{
    Pokemon p1("Pikachu", "Electric", 70);
    Pokemon p2("Charizard", "Fire", 100);
    Pokemon p3("Mewtwo", "Legendary Psychic", 120);
    p3.print();

}