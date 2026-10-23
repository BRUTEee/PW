#include <iostream>
int x = 10; // Global Variable

void fun()
{
    x = 20;
}
int main()
{
    std::cout << x << std::endl;
    fun();
    std::cout << x << std::endl;
}