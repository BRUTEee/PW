#include <iostream>
#include <climits>

int main()
{
    int arr[] = {-2, -5, -6, -9, -4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int max = 0; (wrong) why because 0 itself is greater 
    // than any other but we want from the given elements.
    // int max = arr[0]; we can take this, its a good approach.
    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > mx)
        mx = arr[i];
    }

    std::cout << mx;
}