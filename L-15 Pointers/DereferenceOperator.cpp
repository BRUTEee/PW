#include <iostream>

int main()
{

    int x = 139;
    int *ptr = &x;
    *ptr = 70;
    std::cout << x << std::endl;
    // std::cout << *p << std::endl;
    // int x = 7;
    // int* p1 = &x;
    // int* p2 = &x;
    // std::cout << p1 << " " << &p1 << std::endl;
    // std::cout << p2 << " " << &p2 << std::endl;
}