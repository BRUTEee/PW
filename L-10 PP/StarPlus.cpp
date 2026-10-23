#include <iostream>
//only for odd numbers
int main()
{
    std::cout << "Enter the Number: ";
    int n;
    std::cin >> n;

    int mid=n/2+1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==mid || j==mid)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";

            }
        }
        std::cout << std::endl;
    }
}