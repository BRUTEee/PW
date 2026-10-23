#include <iostream>

int main()
{
    // int arr[10] = {}; // Default 0
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / 4;
    for (int i = 0; i <= n-1; i++)
    {
        std::cout << arr[i] << " "; /// 0 to n-1
    }

    return 0;
}