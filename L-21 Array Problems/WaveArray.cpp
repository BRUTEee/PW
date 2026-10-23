#include <iostream>
#include <vector>
class Solution
{
public:
    void sortInWave(vector<int> &arr)
    {
        // code here
        for(int i = 0; i<arr.size(); i++)
        {
            for(int j = i+1; j<arr.size; j++)
            {
                if(i > j)
                {
                    swap(arr[i], arr[j])
                    i++;
                    j++;
                }
            }
        }
    }
};