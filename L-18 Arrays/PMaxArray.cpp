#include <iostream>

int main()
{
    int arr[] = {10,12,13,14,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }

    std::cout << max;

    return 0;
}