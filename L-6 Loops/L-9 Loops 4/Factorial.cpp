#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int num;
    std::cin >> num;

    // int fact = 1;
    long long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    std::cout << fact;
}