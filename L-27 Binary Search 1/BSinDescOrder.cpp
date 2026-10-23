#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n-1;

    while (low <= high)
    {
        int mid = (high + low) / 2;

        if (nums[mid] > target)
           low = mid + 1;
        else if (nums[mid] < target)
            high = mid - 1;
        else
            return mid;
    }

    return -1;
}

int main()
{
    vector<int> nums = {179, 124, 120, 99, 87, 79, 44, 22, 19, -4};
    int target = 44;

    cout << search(nums, target);

    return 0;
}