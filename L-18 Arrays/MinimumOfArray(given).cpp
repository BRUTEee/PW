#include <iostream>
#include <climits>

int main()
{
    int arr[] = {-2, -4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int MN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] < MN)
        //     MN = arr[i]; // why bcs there's already built in function MAX thats why!
        MN = std::min(MN, arr[i]);
    }
    std::cout << MN << " is the Minimum Number.";
    return 0;
}