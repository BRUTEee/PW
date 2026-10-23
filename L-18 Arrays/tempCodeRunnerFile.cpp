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

    int SMN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < SMN && arr[i] == SMN)
            SMN = arr[i];
    }
    std::cout << "Second Min Number is: " << SMN << std::endl;
    return 0;
}