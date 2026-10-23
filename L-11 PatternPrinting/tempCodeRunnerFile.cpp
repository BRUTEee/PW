#include <iostream>

int main()
{
    std::cout << "Enter the Rows & Coloumn: ";
    int m, n;
    std::cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }
}