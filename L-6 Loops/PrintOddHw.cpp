#include <iostream>

int main()
{
    /*
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0 && i % 3 == 0)
        {
            std::cout << i << " ";
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1 && i % 3 == 0)
        {
            std::cout << i << " ";
        }
    }

    for (int i = 1; i <= 99; i += 2)
    {
        if (i % 3 == 0)
        {
            std::cout << i << " ";
        }
    */
    for (int i = 3; i <= 99; i += 6)
    {
        std::cout << i << " ";
    }


    return 0;
}