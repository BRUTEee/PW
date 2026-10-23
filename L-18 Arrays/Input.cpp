#include <iostream>

int main()
{
    std::cout << "Enter Array Size: ";
    int n;
    std::cin >> n;

    int arr[n] = {};
    std::cout << "Enter the elements: ";
    // input
    for (int i = 0; i <= n - 1; i++)
    {
        std::cin >> arr[i];
    }
    // print the negative elements of array
    for(int i = 0; i<=n-1; i++)
        {
        if (arr[i] < 0)
            std::cout << arr[i] << " ";
        }
}