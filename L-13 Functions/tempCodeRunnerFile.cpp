#include <iostream>

int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
        fact *= i;
    return fact;
}

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            std::cout << " ";
        }
        // Print leading spaces
        for (int j = 0; j <= i; j++)
        {
            std::cout << ncr(i, j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}