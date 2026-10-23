#include <iostream>

int main()
{
    int a = 10;
    int* ptr = &a;
    std::cout << &a << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ptr << std::endl;

    return 0;
}