#include <iostream>

void fun(char x)
{
    std::cout << "Hi" << std::endl;
}

void fun(double y)
{
    std::cout << "Double Dhamaka" << std::endl;
}

void fun(int x)
{
    std::cout << "int hai toh git hai" << std::endl;
}

int main()
{
 fun(7);
}