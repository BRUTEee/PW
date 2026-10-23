#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    // for (int i = 1; i <=n; i++)
    // {
    //     if(n%i==0)
    //     {
    //         std::cout << i << " ";
    //     }
    // }

    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            std::cout << i << " ";

            if(i != n/i) 
            std::cout << n/i << " ";
        }
    }
}