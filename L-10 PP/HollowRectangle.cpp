#include <iostream>

int main()
{
    std::cout << "Enter the rows: ";
    int m;
    std::cin >> m;

    std::cout << "Enter the columns: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == m || j == 1 || j == n)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}