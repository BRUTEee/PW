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
            if ((i + j) % 2 == 0)
            {
                std::cout << "1 " << " ";
            }
            else
            {
                std::cout << "0 " << " ";
            }

            // if(i%2==1)
            // {
            //     if(j%2==1)
            //         std::cout << 1 << " ";
            //     else
            //         std::cout << 0 << " ";
            // }
            // else
            // {
            //     if(j%2==1)
            //         std::cout << 0 << " ";
            //     else
            //         std::cout << 1 << " ";
            // }
        }
        std::cout << std::endl;
    }
}