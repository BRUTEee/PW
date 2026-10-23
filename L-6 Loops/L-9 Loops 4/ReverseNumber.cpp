#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int rev = 0;
    while (n != 0)
    {
        rev *= 10; // extract the last digit
        rev += (n % 10); // 
        n /= 10;
    }

    std::cout << rev;
}