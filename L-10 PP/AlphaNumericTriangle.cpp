#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                std::cout << (char)(j + 64) << " ";
            }
            else
            {
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
    }
}