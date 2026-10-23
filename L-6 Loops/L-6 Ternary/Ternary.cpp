#include <iostream>

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

   // (n%2==0) ? std::cout << "Even" : std::cout << "Odd";
    std::cout << ((n%2==0) ? "Even" : "Odd");

    return 0;
}