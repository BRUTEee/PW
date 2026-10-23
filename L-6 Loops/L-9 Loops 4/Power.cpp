#include <iostream>

int main()
{
    std::cout << "Enter the base: ";
    int a;
    std::cin >> a;

    std::cout << "Enter the exponent: ";
    int b;
    std::cin >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
        if (a == 0)
            break;
    }

    if (a == 0 && b == 0)
    {
        std::cout << "Indeterminate Form";
    }

    else
    {
        std::cout << ans;
    }
}