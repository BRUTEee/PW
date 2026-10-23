#include <iostream>

int main()
{
    std::cout << "Enter the value: ";
    int n;
    std::cin >> n;

    for(int i=1; i<=10; i++)
    {
        std::cout << n*i << " ";
    }

    return 0;
}