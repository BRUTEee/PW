#include <iostream>

int main()
{
    int marks[] = {35, 65, 66, 99, 110, 78, 78, 88, 88, 100};
    // std::cout << size(marks) << std::endl;
    std::cout << sizeof(marks) / 4 << std::endl;

    std::cout << marks[2] << std::endl;
    std::cout << marks[4] << std::endl;

    marks[2] = 99; // update
    std::cout << marks[2] << std::endl;

    std::cin >> marks[2]; // input
    std::cout << marks[2] << std::endl;

    return 0;
}