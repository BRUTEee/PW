#include <iostream>

int main()
{
    std::cout << "Enter the array size: ";
    int n;
    std::cin >> n;

    std::cout << "Enter the elements: ";
    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }

    std::cout << product;
    return 0;
}