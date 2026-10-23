#include <iostream>

void fun(int n)
{
    std::cout << n << std::endl;
    if (n > 20)
        return;
    std::cout << n * n << std::endl;
}
int main()
{
    fun(27);
    fun(17);
}