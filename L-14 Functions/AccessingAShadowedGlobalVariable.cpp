#include <iostream>
int x = 8;
int main()
{
    int x = 56;
    std::cout << x << std::endl;
    std::cout << ::x << std::endl; // scope resolution operator.
}