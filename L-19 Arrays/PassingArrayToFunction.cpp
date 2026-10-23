#include <iostream>

// void change (int x)
// {
//     x = 20;
// }

// int main()
// {
//     int x = 6;
//     change(x);
//     std::cout << x << std::endl;

// } gives o/p = 6.

void change(int xy[])
{
    xy[0] = 20;
}

int main()
{
    int x[] = {1, 2, 3};
    change(x);
    std::cout << x[0] << std::endl;

    return 0;
}