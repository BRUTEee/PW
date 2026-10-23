#include <iostream>

int main()
{
    std::cout << "Enter the value: ";
    int n;
    std::cin >> n;

    for (int i = n; i >= 1; i--)
    {
        std::cout << i << " ";
    }

    for (int i = 1; i < = n; i++)
    {
        std::cout << n + 1 - i << " ";
    }
}