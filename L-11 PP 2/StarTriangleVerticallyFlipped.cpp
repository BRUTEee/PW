#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((i+j)>n)
                std::cout << "* " ;
            else 
                std::cout << "  " ;
        }
        std::cout << std::endl;
    }
}