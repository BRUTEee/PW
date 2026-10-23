#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) //remove the 1 from this horizontally flipped - n+1-i
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}