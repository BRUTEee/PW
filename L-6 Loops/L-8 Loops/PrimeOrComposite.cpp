#include <iostream>

int main()

{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    int factors = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factors++;
        }
    }

    if (factors >= 3)
    {
        std::cout << "Composite Number.";
    }

    else if (factors = 1)
    {
        std::cout << "Neither Prime Nor Composite.";
    }

    else
    {
        std::cout << "Prime Number.";
    }
    return 0;
}