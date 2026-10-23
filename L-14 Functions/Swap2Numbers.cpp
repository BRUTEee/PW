#include <iostream>

int main()
{
    std::cout << "Enter the Number a and b: ";
    int a{}, b{};
    std::cin >> a >> b;
    std::cout << a << " " << b << std::endl;

    a = (a + b) - (b = a);

    // a = a + b;
    // b = a - b;
    // a = a - b;

    // int temp = a;
    // a = b;
    // b = temp;
    std::cout << a << " " << b << std::endl;
}