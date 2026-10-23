#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        std::cout << "* ";
    }
    std::cout << std::endl;

    // 1 loop under 3 loops.
    n--;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++) // stars (Hori. flipped triangle)
        {
            std::cout << "* ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) // spaces (odd triangle)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= n + 1 - i; j++) // stars(Hor. flipped triangle)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}