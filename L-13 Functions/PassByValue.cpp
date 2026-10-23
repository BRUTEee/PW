#include <iostream>

void change(int x)
{
    x = 20;
}

int main()
{
    x = 10;
    change(x);
    std::cout << x << std::endl; // Print 10

    // never variable goes, goes its value
    // 2) local variable - both are different.
}