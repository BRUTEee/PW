#include <iostream>

void change(int* ptr)
{
    *ptr = 20;
}
int main()
{
    int x = 10;
    change(&x);
    std::cout << x << std::endl;
}