#include <iostream>
                // parameters    
void minOfTwo(int a, int b)
{
    if (a > b)
        std::cout << b << " is smaller" << std::endl;
    else
        std::cout << a << " is smaller" << std::endl;
}
int main()
{               // arguements
    minOfTwo(71,34);

    return 0;
}