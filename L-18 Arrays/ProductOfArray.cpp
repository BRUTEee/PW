#include <iostream>

int main()
{
    int arr[] = {2, 4, 5, 6};
    int n = sizeof(arr) / 4;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    std::cout << product;
    return 0;
}