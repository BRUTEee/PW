#include <iostream>
#include <vector>
using namespace std;

void printRec(vector <int> &arr, int idx)
{
    if(idx == arr.size()) return;
    cout << arr [idx] << " ";
    printRec(arr, idx+1);

    // // for reverse:
    // printRec(arr, idx + 1);
    // cout << arr[idx] << " ";
}

int main()
{  
    vector<int> arr = {1,23,44,5,5555,23444};
    printRec(arr, 0);
}
