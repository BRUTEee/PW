// Function has its own value.
// other than void everyone has return
#include <iostream>

int Product(int a, int b)
{
    return a * b;
}
int main()
{
    std::cout << Product(4, 11);
}