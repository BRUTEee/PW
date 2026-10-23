#include <iostream>

int main()
{
    std::cout << "Enter the number: ";
    int n;
    std::cin >> n;

    // int factors = 0
    bool flag = false; // means prime for now
        // for (int i = 2; i <= n - 1; i++)
        // for(int i =2; i<= sqrt(n); i++)
        for(int i = 2; i*i <=n; i++)
    {
        // factors++
        flag = true;
        break;
    }

    if (flag == true)
    {
        std::cout << "Composite Number.";
    }

    else if(flag == 1)
    {
        std::cout << "Neither Composite Nor Prime";
    }

    else
        {
            std::cout << "Prime Number.";
        }

    return 0;
}