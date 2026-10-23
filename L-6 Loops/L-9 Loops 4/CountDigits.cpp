#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    int count = 0;
    if (n == 0)
        count++;

    // while (n > 0)
    while (n != 0)
    {
        n /= 10;
        count++;
    }

    std::cout << count;
}