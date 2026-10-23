#include <iostream>
using namespace std;

void print(int n, int current)
{
    if (current > n)
        return;

    cout << current << endl;

    print(n, current + 1);

    if (current != n)
        cout << current << endl;
}

int main()
{
    int n;
    cin >> n;

    print(n, 1);
}