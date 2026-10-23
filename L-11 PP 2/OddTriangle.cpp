#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++) // for odd and for even 2*i
        {
            std::cout << "* ";
        }
        std::cout << std::endl;

        // Method 2
        int stars = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= stars; j++)
            {
                std::cout << j << " ";
            }
            stars += 2;
            std::cout << std::endl;
        }
    }
}