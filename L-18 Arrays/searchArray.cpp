#include <iostream>

int main()
{
    int arr[] = {10, 20, 30, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 20;
    bool flag = false; // means not present.
    for(int i=0; i<n; i++)
    {
        if(arr[i] == m)
        {
        flag = true;
        break;
        }
    }
    if (flag == true)
    std::cout << "Element is found";
    else
    std::cout << "Element not found";

    return 0;
}