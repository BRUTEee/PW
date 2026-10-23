#include <iostream>

int main()
{
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;
    std::cout << &x << std::endl;
    std::cout << p1 << std::endl;

    std::cout << &p1 << std::endl;
    std::cout << p2 << std::endl;
}
