#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for(int ele : arr)
    cout << ele << " ";
}

int main()
{
    vector<int> arr = {5,1,2,3,4};
    int n = arr.size();

    print(arr);
    cout << endl;

    for(int i = 1; i<=n-1; i++)
    {

        // for(int j=i;j>=1 && arr[j] < arr[j-1]; j--);
        int j = i;
        while(j>=1 && arr[j] < arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    print(arr);
}