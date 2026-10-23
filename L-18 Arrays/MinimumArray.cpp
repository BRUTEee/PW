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

    int MN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < MN)
            MN = arr[i];
    }
    std::cout << MN << " is the Minimum Element.";
    return 0;
}