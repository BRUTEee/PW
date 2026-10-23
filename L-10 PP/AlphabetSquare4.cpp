#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 0)
            {
                std::cout << (char)(i + 64) << " ";
            }
            else
            {
                std::cout << (char)(i + 96) << " ";
            }
        }
        std::cout << std::endl;
    }
}