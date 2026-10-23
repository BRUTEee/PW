#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for(int ele : arr)
    {
        cout << ele << " ";
    }
}


int main()
{
    vector<int> arr = {3,1,2,5,4,0};
    int n = arr.size();

    print(arr);
    cout << endl;

    for(int i=0; i<n-1; i++)
    {
        int mx = arr[i], mxIdx = i;
        for(int j=i; j<=n-1-i; j++)
        {
            if(arr[j] > mx)
            {
                mx = arr[j];
                mxIdx = j;
            }
        }
        swap(arr[n-1-i], arr[mxIdx]);
    }
    print(arr);
}