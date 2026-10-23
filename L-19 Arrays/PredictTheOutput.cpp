#include <iostream>

int main()
{
    int num[26];
    int temp;

    // Assign values to the first and last elements
    num[0] = 100;
    num[25] = 200;

    // Swap num[0] and num[25]
    temp = num[25];
    num[25] = num[0];
    num[0] = temp;

    // Display the result
    std::cout << num[0] << " " << num[25];

    return 0;
}