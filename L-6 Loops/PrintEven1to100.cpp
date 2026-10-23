#include <iostream>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }

    for (int i = 2; i <= 100; i += 2)
    {
        if (i % 2 == 0) // best one
        {
            std::cout << i << " ";
        }
    }

    for (int i = 1; i <= 50; i++)
    {
        std::cout << i * 2 << " "; // Best one
    }

    return 0;
}