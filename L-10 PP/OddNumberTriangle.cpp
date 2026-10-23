#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // WAP to print first n numbers.
        {
            std::cout << 2 * j - 1 << " ";
        }
        std::cout << std::endl;
    }
}