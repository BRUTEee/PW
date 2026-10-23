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
            std::cout << std::min(i,j) << " ";
            // if (i <= j)
            //     std::cout << i << " ";
            // else
            //     std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}