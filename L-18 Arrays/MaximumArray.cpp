#include <iostream>
#include <climits>

int main()
{
    std::cout << "Enter the Array Size: ";
    int n;
    std::cin >> n;

    std::cout << "Enter the elements: ";
    int arr[n] = {};

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int MX = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > MX)
            MX = arr[i];
    }
    std::cout
        << MX << " is the Maximum Element.";
    return 0;
}