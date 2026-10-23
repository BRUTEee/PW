#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    int sum = 0;

    while (n != 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit;
        n /= 10;
    }

    std::cout << sum;
}