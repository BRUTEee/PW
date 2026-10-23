#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    int a=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            std::cout << a++ << " ";
        }
        std::cout << std::endl;
    }
    
}