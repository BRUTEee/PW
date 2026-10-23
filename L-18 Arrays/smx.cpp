#include <iostream>
#include <climits>

int main()
{
    int arr[] = {10,12,13,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > mx)
        mx = arr[i];
    }

    int smx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > smx && arr[i] != mx)
        smx = arr[i];
    }

    std::cout << mx << " " << smx;
    return 0;
}