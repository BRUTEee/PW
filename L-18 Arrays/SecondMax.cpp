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

    int SMX = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == MX)
            continue;

        if (arr[i] > SMX)

            SMX = arr[i];
            
        // this can be written as -
        // if (arr[i] > SMX && arr[i] == MX)
        // SMX == arr[i];
    }
    std::cout << "Second Max Number is: " << SMX << std::endl;
    return 0;
}