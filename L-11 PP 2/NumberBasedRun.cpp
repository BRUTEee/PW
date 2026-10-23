#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=2*n-1; j++)
        {
            int a=i, b=j;
            if(i>n) a=2*n-i;
            if(j>n) b=2*n-i;
            std::cout << std::min(i,j);
        }
        std::cout << std::endl;
    }
}