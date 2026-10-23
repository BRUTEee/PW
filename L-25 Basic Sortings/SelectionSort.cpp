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
    // Selection Sort
    vector<int> arr= {12,2,3,5,7};
    int n = arr.size();

    print(arr);
    cout << endl;

    for(int i=0;i<n-1;i++)
        {
        int mn = arr[i], mnIdx = i;
         for (int j = i; j < n; j++)
        {
            if(arr[j] < mn)
            {
                mn = arr[j];
                mnIdx = j;
            }
        }

        swap(arr[i], arr[mnIdx]);
        }

        print(arr);
}