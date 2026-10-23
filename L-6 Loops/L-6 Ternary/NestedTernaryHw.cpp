#include <iostream>

int main()
{
    std::cout << "Enter the Numbers: ";
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    (a > b && a > c) ? std::cout << a << " is greatest." : (b > a && b > c) ? std::cout << b << " is greatest."
                                                                            : std::cout << c << " is greatest.";

    return 0;
}