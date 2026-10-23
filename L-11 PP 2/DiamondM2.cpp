#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    int nsp = n - 1, nst = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            std::cout << "* ";
        }
        if (i < n)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        std::cout << std::endl;
    }
}