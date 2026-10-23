#include <iostream>

int main()
{
    int arr[] = {10,12,13,14,15};
    int n=sizeof(arr)/4;
    int prod = 1;
    for(int i=0; i<n; i++)
    {
        prod = prod*arr[i];
        std::cout << prod << std::endl;
    }

    std::cout << "product of elements = " << prod;
    return 0;
}