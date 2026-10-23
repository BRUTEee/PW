#include <iostream>
#include <vector>
using namespace std;

void print (vector<int> &arr)
{
    for(int ele : arr)
    {
        cout << ele << " ";
    }
}

int main()
{
    vector<int> arr = {5, 4, 2, 3, 1};
    int n = arr.size();

    print(arr);
    cout << endl;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; i++)
            {
                if(arr[j] > arr[j+1])
                    swap(arr[j], arr[j+1]);

            }
    }

    print(arr); 


}