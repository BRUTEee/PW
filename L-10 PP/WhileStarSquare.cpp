#include <iostream>

int main()
{
    int i = 1;
    while (i <= 4)
    {
        i++;

        int j = 1;
        while (j <= 4)
        {
            j++;
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}