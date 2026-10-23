#include <iostream>

int main()
{
    std::cout << "Input: ";
    int n;
    std::cin >> n;

    for (int i=1; i<=n; i++)
    {
        std::cout << i << std::endl;
        std::cout << n+1-i << std::endl;
    }

    return 0;
}