#include <iostream>

int main()
{
    int x = 4, y = 6;
    if (x++ || y++)
    {
        std::cout << x << y;
    }

    else
    {
        std::cout << "No";
    }

    return 0;
}