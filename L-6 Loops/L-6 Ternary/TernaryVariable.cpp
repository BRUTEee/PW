#include <iostream>

int main()
{
    int x = 6;
    int y = (x > 12) ? x - 4 : x * 4;
    std::cout << y;

    return 0;
}