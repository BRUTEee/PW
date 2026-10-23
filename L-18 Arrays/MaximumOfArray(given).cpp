#include <iostream>
#include <climits>

int main()
{
    int arr[] = {4, 2, 6, 8, 1, 9, 2, -2, -3, -122, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int MX = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > MX)
            MX = arr[i];
        // MX = max(MX, arr[i]);
    }
    std::cout << MX;
}