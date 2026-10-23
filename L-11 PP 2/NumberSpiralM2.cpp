#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << std::min(i, j) << " ";
        }
        for (int j = n - 1; j >= 1; j--)
        {
            std::cout << std::min(i, j) << " ";
        }
        std::cout << std::endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << std::min(i, j) << " ";
        }
        for (int j = n - 1; j >= 1; j--)
        {
            std::cout << std::min(i, j) << " ";
        }
        std::cout << std::endl;
    }
}