#include <iostream>

void sumOfThreeNumbers(int a, int b, int c)
{
    std::cout << "Enter the First Number: ";
    std::cin >> a;

    std::cout << "Enter the Second Number: ";
    std::cin >> b;

    std::cout << "Enter the Third Number: ";
    std::cin >> c;

    int sum = a + b + c;

    std::cout << sum << " is the sum.";
}
int main()
{
    sumOfThreeNumbers(21, 32, 45);
}