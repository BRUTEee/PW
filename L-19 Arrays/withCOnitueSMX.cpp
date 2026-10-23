#include <iostream>

int main()
{
    int arr[] = {20,13,14,15,20};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int mx = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > mx)
         mx = arr[i];
    }

    int smx = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == mx)
         continue;
         if(arr[i] > smx)
         smx = arr[i];
    }

    std::cout << mx << " " << smx << std::endl;

    return 0;
}