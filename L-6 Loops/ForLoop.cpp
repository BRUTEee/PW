#include <iostream>

int main()
{
    // 8 iterations means how many times the loop has run.
    for (int i = -2; i <= 5; i++)
    {
        std::cout << "Hello" << std::endl;
    }
    
    std::cout << "Enter the value for a: ";    
    int a;
    std::cin >> a;
    std::cout << "Enter the value for b: ";
    int b;
    std::cin >> b;
    
    for (int i = a; i <= b; i++)
    {
        std::cout << "Hello" << std::endl;
    }

    return 0;
}