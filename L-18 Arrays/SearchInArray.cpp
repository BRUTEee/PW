#include <iostream>

int main()
{
    std::cout << "Enter the Array Size: ";
    int n;
    std::cin >> n;

    std::cout << "Enter the Elements: ";
    int arr[n] = {};

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Enter the Integer to Search in Array: ";
    int m;
    std::cin >> m;

    bool flag = false; // Element isnt present in Array.
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            flag = true;
            index = i;
        }
    }
    if (flag)
    {
        std::cout << "Element is Present in Array at: " << index << std::endl;
    }
    else
        std::cout
            << "Element isn't present in Array.";
}