#include <iostream>
#include <cmath>

int main()
{
    // More than 2 arguements arent allowed.
    std::cout << std::max(27,11) << std::endl;
    std::cout << std::min(16,17) << std::endl;
    std::cout << std::pow(2.6,2.6) << std::endl;
    std::cout << std::sqrt(8) << std::endl;
    std::cout << std::cbrt(1000) << std::endl;
    std::cout << std::abs(-5) << std::endl;


    //for taking 3 arguements.
    std::cout << std::max(2, std::max(3,4)) << std::endl;
}