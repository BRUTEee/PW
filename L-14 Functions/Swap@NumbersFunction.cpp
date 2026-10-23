#include <iostream>

void swap(int &a, int &b) // alias
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 2;
    // std::swap(a, b);
    swap(a, b);
    std::cout << a << " " << b << std::endl;
}