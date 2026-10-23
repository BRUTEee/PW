#include <iostream>

void starTriangle(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    int a;
    std::cout << "Enter the number For a: ";
    std::cin >> a;
    starTriangle(a);

    int b;
    std::cout << " Enter the number for b: ";
    std::cin >> b;
    starTriangle(b);

    int c;
    std::cout << "Enter the number for c: ";
    std::cin >> c;
    starTriangle(c);

    return 0;
}