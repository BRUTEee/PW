#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    int nsp = 0, nst = 2*n-1;
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
        nsp += 1;
        nst-=2;
        std::cout << std::endl;
    }
}