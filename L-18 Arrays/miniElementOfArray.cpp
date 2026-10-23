#include <iostream>
#include <climits>

int main()
{
    int arr[] = {10,12,13,14,15};
    int n = sizeof(arr)/ sizeof(arr[0]);
    // int min = 0; (wrong) because 0 itself is minimum
    // int min = 1000; but this isnt enough if we have more data.
    int mn = arr[0];
       // int min = INT_MAX;
    for(int i=0;i<n; i++)
    {
        if(arr[i] < min)
        min = arr[i];
    }
    std::cout << min;
}