#include <iostream>

int main()
{
    std::cout << "Enter the number of terms: ";
    int n;
    std::cin >> n;

    int a = 1, r = 2;
    for (int i = 1; i <= n; i++)
    {
        std::cout << a << " ";
        a *= r;
    }
}