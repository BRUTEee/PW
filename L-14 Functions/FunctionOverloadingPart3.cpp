#include <iostream>
void fun(int x, char y)
{
    std::cout << "IC" << std::endl;
}

void fun(char x, int y)
{
    std::cout << "CI" << std::endl;
}
int main()
{
    fun(97, 45); // error overload.
}