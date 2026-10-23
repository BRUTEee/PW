#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int sum = 0, rev = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        sum += lastDigit;
        rev *= 10;
        rev += lastDigit;
        num /= 10;
    }

    std::cout << "Sum of digits: " << sum << std::endl;
    std::cout << "Reverse of number: " << rev << std::endl;

    return 0;
}