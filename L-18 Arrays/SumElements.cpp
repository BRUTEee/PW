#include <iostream>

int main()
{
    std::cout << "Enter the Array Size: ";
    int n;
    std::cin >> n;

    int arr[n] = {};
    std::cout << "Enter the elements: ";

    for (int i = 0; i <= n - 1; i++)
    {
        std::cin >> arr[i];
    }

    // sum of array
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += arr[i];
    }
    std::cout << sum;
    return 0;
}