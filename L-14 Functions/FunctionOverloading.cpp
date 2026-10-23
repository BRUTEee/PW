#include <iostream>

void fun()
{
    std::cout << "Hi" << std::endl;
}

//This will give error 
// void fun(int x=20)
// {
//     std::cout << "Good Morning" << std::endl;
// }

void fun(int x, int y)
{
    std::cout << "Hhehe" << std::endl;
}

int main()
{
    fun();
}