#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    // Upper Pyramid
    int nsp = n - 1, nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            std::cout << "* ";
        }
        nst += 2;
        nsp--;
        std::cout << std::endl;
    }

    // Downward Triangle or lower inverted pyramid
    nsp = 1;
    nst = 2 * n - 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            std::cout << "* ";
        }
        nsp++;
        nst -= 2;
        std::cout << std::endl;
    }
}