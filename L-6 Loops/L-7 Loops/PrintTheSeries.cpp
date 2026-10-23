#include <iostream>

int main()
{
    std::cout << "Enter the number of terms: ";

    int n;
    std::cin >> n;

    // 99, 95, 91, 87..
    int a = 99, d = -4;
    for (int i = 1; i <= n; i++)
    {
        std::cout << a << " ";
        a += d;
    }
    return 0;
}