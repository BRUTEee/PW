#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (int ele : arr)
    cout << ele << " ";
}

int main()
{
    vector<int> arr = {12,3,4,5,6};
    int n = arr.size();

    print(arr);
    cout << endl;

    for(int i=0; i< n-1; i++)
    {
        int swaps = 0;
        for(int j=n-2; j>=0; j--)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swaps++;
            }

        }
        if(swaps==0)
        break;
    }

    print(arr);
    cout << endl;
}