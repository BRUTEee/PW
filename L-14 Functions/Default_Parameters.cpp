#include <iostream>

void fun(int age = 20)
{
    std::cout << "My name is: " << age << std::endl;
}

int main()
{
    fun();
}