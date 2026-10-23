#include <iostream>

int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            std::cout << (char)(j+64) << " ";
        }
        std::cout << std::endl;
    }
}