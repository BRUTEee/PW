#include <iostream>

int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, r;
    std::cout << "Enter n and r: ";
    std::cin >> n >> r;

    int ncr = fact(n) / fact(r) * fact(n - r);
    std::cout << ncr;
}